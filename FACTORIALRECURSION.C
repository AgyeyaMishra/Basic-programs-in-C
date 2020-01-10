//program to find factorial of a number using recursion
#include<stdio.h>
#include<conio.h>
long int fact (long int x)
{
 if(x==0||x==1)
  return 1;
 else
  return x*fact(x-1);
}
int main()
{
 long int a;
 clrscr();
 printf("Enter a number whose factorial is to be found : ");
 scanf("%ld", &a);
 printf("Factorial of the entered number is %ld", fact(a));
 getch ();
 return 0;
}
