//program for addition of two 3X3 matrices
#include<conio.h>
#include<stdio.h>
int main()
{
 int i, j, a[3][3], b[3][3], c[3][3];
 clrscr();
 printf("Enter the elements in first matrix :\n");
 for(i=0; i<3; i++)
  for(j=0; j<3; j++)
   scanf("%d", &a[i][j]);

 printf("Enter the elements in second matrix :\n");
 for(i=0; i<3; i++)
  for(j=0; j<3; j++)
   scanf("%d", &b[i][j]);

 printf("First matrix :\n");
 for(i=0; i<3; i++)
 {
  for(j=0; j<3; j++)
   printf("%d ", a[i][j]);
  printf("\n");
 }

 printf("Second matrix :\n");
 for(i=0; i<3; i++)
 {
  for(j=0; j<3; j++)
   printf("%d ", b[i][j]);
  printf("\n");
 }

 printf("Addition of the two matrices :\n");
 for(i=0; i<3; i++)
 {
  for(j=0; j<3; j++)
   printf("%d ", (a[i][j]+b[i][j]));
  printf("\n");
 }
 getch();
 return 0;
}
