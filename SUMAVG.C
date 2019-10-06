//program to find sum and average of two numbers
#include<stdio.h>
#include<conio.h>
int main ()
{
 float no1, no2;
 clrscr ();
 printf("Enter first number : ");
 scanf("%f", &no1);
 printf("Enter second number : ");
 scanf("%f", &no2);
 printf("The sum of the two numbers is %.2f\n", no1+no2);
 printf("The average of the two numbers is %.2f", (no1+no2)/2);
 getch ();
 return 0;
}
