<?php
// Start the session
session_start();

// Connect to the database
$db = mysqli_connect("localhost", "root", "", "my_database");

// Check the connection
if (!$db) {
  die("Connection failed: " . mysqli_connect_error());
}

// Check if the form is submitted
if (isset($_POST['email']) && isset($_POST['password'])) {
  // Get the form data
  $email = $_POST['email'];
  $password = $_POST['password'];

  // Validate the email
  if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
    echo "Invalid email format";
    exit();
  }

  // Sanitize the input
  $email = mysqli_real_escape_string($db, $email);
  $password = mysqli_real_escape_string($db, $password);

  // Hash the password
  $password = md5($password);

  // Query the database
  $sql = "SELECT * FROM users WHERE email = '$email' AND password = '$password'";
  $result = mysqli_query($db, $sql);

  // Check if the user exists
  if (mysqli_num_rows($result) == 1) {
    // Fetch the user data
    $user = mysqli_fetch_assoc($result);

    // Set the session variables
    $_SESSION['user_id'] = $user['id'];
    $_SESSION['user_name'] = $user['name'];
    $_SESSION['user_email'] = $user['email'];

    // Redirect to the home page
    header("Location: home.php");
    exit();
  } else {
    // Display an error message
    echo "Wrong email or password";
    exit();
  }
}
?>