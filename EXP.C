//program to find the exponential function
#include<stdio.h>
#include<conio.h>
float exponential(int, float);
int main()
{
 int n;
 float x;
 clrscr ();
 printf("Enter the value of n : ");
 scanf("%d", &n);
 printf("Enter the value of x : ");
 scanf("%f", &x);
 printf("e^x = %f", exponential(n, x));
 getch ();
 return 0;
}

float exponential(int n, float x)
{
 float sum=1.0f;   //initialize sum of series
 int i;
 for (i = n - 1; i > 0; --i)
  sum = 1 + x * sum / i;
 return sum;
}
