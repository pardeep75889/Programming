#include<stdio.h>
int main(){
    int a, b, c, d;

    printf("Enter the first no. : ");
    scanf("%d", &a );

    printf("Enter the second no. : ");
    scanf("%d", &b);

    c = a / b;
    printf("Division of two no. : %d \n", c);

    d = (a%b);
    printf("Remainder of these two no. : %d", d);
    return 0;
}