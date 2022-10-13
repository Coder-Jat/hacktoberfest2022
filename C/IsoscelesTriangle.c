#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the 3 sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        if (a == b || b == c || c == a)
        {
            printf("The triangle is an isosceles triangle.");
        }
        else
        {
            printf("The triangle is not an isosceles triangle.");
        }
    }
    else
    {
        printf("The sides of triangle is invalid!");
    }
}