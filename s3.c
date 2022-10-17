#include<stdio.h>
struct student
{
char student_name[50];
char branch;
float cgp;
};
void main()
{
	struct student s;
	printf("Enter the name of student : ");
	scanf("%s",s.student_name);
	printf("Enter Branch : ");
	scanf("%s",&s.branch);
	printf("enter cgp : ");
	scanf("%f",&s.cgp);
	return;
}

	


