#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void addition()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Sum of %d and %d: %d\n", a, b, a+b);
}

void subtract()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Difference of %d and %d: %d\n",a,b, a-b);
}

void multiply()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Multiplication of %d and %d: %d\n",a,b, a*b);
}

void divide()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(b != 0)
    {
        printf("Division of %d and %d: %d\n",a,b, a/b);
    }
    else
    {
        printf("Division by zero is undefined.\n");
    }
}

void power()
{
    int a, b, c = 1;
    printf("Enter number you want to raise to the n power and n: ");
    scanf("%d%d", &a, &b);

    for(int i=0; i<b; i++)
        c = c*a;
    if(b==0)
        c = 1;

    printf("%d to the %d power: %d\n", a, b, c);

}

void squarert()
{
    float a;

    printf("Enter the number you want to find the square root of: \n");
    scanf("%f", &a);

    printf("The square root of %.0f is: %.2f", a, sqrt(a));
}

int main()
{
    printf("Enter the operation you would like to do | + | - | * | / | sqrt | ^ | \n");

    char op[4];
    scanf("%s", op);

    if(strcmp(op, "+") == 0)
        addition();
    else if(strcmp(op, "-") == 0)
        subtract();
    else if(strcmp(op, "*") == 0)
        multiply();
    else if(strcmp(op, "/") == 0)
        divide();
    else if(strcmp(op, "^") == 0)
        power();
    else if(strcmp(op, "sqrt") == 0)
        squarert();
    else
        printf("Invalid Input!");

    return 0;
}
