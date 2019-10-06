//program to find sum of digits of a five digit number
#include<stdio.h>
#include<conio.h>
int main()
{
 int n, sum = 0, d;
 clrscr ();
 printf("Enter a number : ");
 scanf("%d", &n);
 while(n>0)
 {
  d = n%10;
  sum = sum + d;
  n = n/10;
 }
 printf("Sum = %d", sum);
 getch ();
 return 0;
}