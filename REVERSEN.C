//program to reverse a five digit number
#include<stdio.h>
#include<conio.h>
void main ()
{
 int n;
 float reverse;
 clrscr ();
 printf("Enter a number : ");
 scanf("%d", &n);
 while(n!=0)
 {
  reverse = ((reverse*10) + (n%10));
  n/=10;
 }
 printf("Reversed Number = %.0f", reverse);
 getch ();
}