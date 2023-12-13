#include <iostream>
#include <cstdio>
#include <stdexcept>

using namespace std;

int main()
{
    string filename;
    cout << "Enter the name of the file to delete: ";
    cin >> filename;

    try
    {
        if (remove(filename.c_str()) != 0)
        {
            throw runtime_error("Error deleting file");
        }
    }
    catch (const exception &e)
    {
        cerr << e.what() << endl;
    }

    return 0;
}