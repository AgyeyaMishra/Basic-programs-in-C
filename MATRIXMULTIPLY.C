//matrix multiplication in C
#include<stdio.h>
#include<conio.h>
int main()
{
 int m, n, p, q , i, j, k, sum=0;
 int a[10][10], b[10][10], multiply[10][10];
 clrscr();
 printf("Enter number of rows and columns of first matrix :\n");
 scanf("%d %d", &m, &n);
 printf("Enter elements of first matrix :\n");
 for(i=0; i<m; i++)
  for(j=0; j<n; j++)
   scanf("%d", &a[i][j]);

 printf("Enter number of rows and columns of second matrix :\n");
 scanf("%d %d", &p, &q);
 printf("Enter elements of second matrix :\n");
 for(i=0; i<p; i++)
  for(j=0; j<q; j++)
   scanf("%d", &b[i][j]);

 if(n!=p)
  printf("The matrices cannot be multiplied with each other.\n");
 else
 {
  for(i=0; i<m; i++)
  {
   for(j=0; j<q; j++)
   {
    for(k=0; k<p; k++)
    {
     sum+=a[i][k]*b[k][j];
    }
    multiply[i][j]=sum;
    sum=0;
   }
  }
 }

 printf("Product of the matrices are :\n");
 for(i=0; i<m; i++)
 {
  for(j=0; j<q; j++)
   printf("%d   ", multiply[i][j]);
  printf("\n");
 }
 getch();
 return 0;
}