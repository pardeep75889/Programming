#include <iostream>
using namespace std;
#include <conio.h>
#include <stdio.h>
#include <string.h>
void reverseit(char *p)
{
    int j;
    int len = strlen(p);
    j = len - 1;
    for (int i = 0; i < len / 2; i++)
    {
        char a = p[i];
        p[i] = p[j];
        p[j] = a;
        j--;
    }
    cout << "\n\nReverse Of String : ";
    puts(p);
}
int main()
{
    char str[50];
    int n;
    char ch;
    do
    {
        cout << "Reverse of a String";
        cout << "\nEnter The String : ";
        gets(str);
        reverseit(str);
        cout << "Do You Want To Continue : ";
        ch = getche();
    } while (ch != 'n');
    getch();
}