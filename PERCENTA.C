//program to calculate percentage of marks in five subjects
#include<stdio.h>
#include<conio.h>
int main()
{
 float m1, m2, m3, m4, m5, percentage;
 clrscr ();
 printf("Enter the marks in first subject : ");
 scanf("%f", &m1);
 printf("Enter the marks in second subject : ");
 scanf("%f", &m2);
 printf("Enter the marks in third subject : ");
 scanf("%f", &m3);
 printf("Enter the marks in fourth subject : ");
 scanf("%f", &m4);
 printf("Enter the marks in fifth subject : ");
 scanf("%f", &m5);
 percentage = ((m1+m2+m3+m4+m5)/5);
 printf("The percentage is %.2f ", percentage);
 getch ();
 return 0;
}