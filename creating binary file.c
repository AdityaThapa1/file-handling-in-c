#include<stdio.h>
struct stud
{
      int rno;
      char gender;
      char name[50],fac[50];
};
int main()
{
	struct stud s[3];
	int i;
      FILE *fp;
      fp=fopen("student.dat","w");
      	if (fp == NULL)
	{
		printf( "\nError opening file\n");
		exit (1);
	}
	for(i=0;i<3;i++){
	
      printf("Enter record of student{%d}:\n\n",i);
      printf("\nEnter student  id number : ");
      scanf("%d",&s[i].rno);
      printf("\nEnter name of student: ");
      scanf("%s",s[i].name);
      fflush(stdin);
      printf("\nEnter student faculty : ");
      scanf("%s",s[i].fac);
      fflush(stdin);
      printf("\nEnter gender of student : ");
      scanf("%c",&s[i].gender);
      fflush(stdin);
      fprintf(fp,"%d\n%s\n%s\n%c\n",s[i].rno,s[i].name,s[i].fac,s[i].gender);
  		}
      printf("\nRecord stored in file...");
      fclose(fp);
      return 0;
  }
