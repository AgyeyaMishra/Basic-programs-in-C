//program to find simple interest
#include<stdio.h>
#include<conio.h>
int main()
{
 float principal, rate, time, simpleinterest;
 clrscr ();
 printf("Enter the principal amount : ");
 scanf("%f", &principal);
 printf("Enter the rate of interest (in percent) : ");
 scanf("%f", &rate);
 printf("Enter the time for which simple interest has to be calculated : ");
 scanf("%f", &time);
 simpleinterest = (principal * rate * time)/100;
 printf("Simple interest is %f ", simpleinterest);
 getch ();
 return 0;
}

