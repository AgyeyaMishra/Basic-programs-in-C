//program to calculate average marks using structure
#include<stdio.h>
#include<conio.h>
struct avg_marks
{
 float m1;
 float m2;
 float m3;
 float m4;
 float m5;
};
int main()
{
 struct avg_marks a[10];
 int i, n;
 clrscr();
 printf("Enter the number of students whose average marks is to be calculated : ");
 scanf("%d", &n);
 for(i=0; i<n; i++)
 {
  printf("\n");
  printf("Enter marks in first subject : ");
  scanf("%f", &a[i].m1);
  printf("Enter marks in second subject : ");
  scanf("%f", &a[i].m2);
  printf("Enter marks in third subject : ");
  scanf("%f", &a[i].m3);
  printf("Enter marks in fourth subject : ");
  scanf("%f", &a[i].m4);
  printf("Enter marks in fifth subject : ");
  scanf("%f", &a[i].m5);
  printf("Average marks is %.2f", (a[i].m1+a[i].m2+a[i].m3+a[i].m4+a[i].m5)/5);
 }
 getch();
 return 0;
}
