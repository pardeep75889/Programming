#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "World";
    int result = str1.compare(str2);
    if (result == 0)
    {
        cout << "The strings are equal." << endl;
    }
    else if (result < 0)
    {
        cout << "The first string is less than the second." << endl;
    }
    else
    {
        cout << "The first string is greater than the second." << endl;
    }
    return 0;
}
