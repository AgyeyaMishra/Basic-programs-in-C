//C program to find the size of a given file
#include<stdio.h>
#include<conio.h>

long int findSize(char file_name[])
{
 FILE *fp=fopen(file_name, "r");
 long int size;
 if(fp==NULL)
 {
  printf("Unable to open the file or file not found.\n");
  return -1;
 }
 fseek(fp, 0L, SEEK_END);
 size=ftell(fp);     //will calculate the size of the file
 fclose(fp);
 return size;
}
int main()
{
 char file_name[]={"file.txt"};
 long int size = findSize(file_name);
 clrscr();
 if(size!=-1)
  printf("Size of the given file is %ld bytes \n", size);
 getch ();
 return 0;
}