//C program to find the sum of array elements using pointers
#include<stdio.h>
#include<conio.h>
int sum_of_array(int *p, int size)
{
 int sum=0, i;
 for(i=0; i<size; i++)
 {
  sum+=*p;
  p++;
 }
 return sum;
}
int main()
{
 int array[100], size, sum, i;
 clrscr();
 printf("Enter the size of the array (max 100) : ");
 scanf("%d", &size);
 printf("Enter array elements :\n");
 for(i=0; i<size; i++)
 {
  printf("Element %d : ", i+1);
  scanf("%d", &array[i]);
 }
 sum=sum_of_array(array, size);
 printf("The sum of array elements is %d", sum);
 getch();
 return 0;
}
