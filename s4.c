#include<stdio.h>
#include<stdlib.h>
int main()
{
	char arr[] = {'h','e','l','l','o'};
	int i,j,size;
	char *ptr = arr;
	ptr = malloc(sizeof(arr));
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-i;j++)
		{
			if(ptr[j]>ptr[j+1])
			{
				char temp = ptr[j];
				ptr[j] = ptr[j+1];
				ptr[j+1] = temp;
			}}}
	for(i=0;i<5-1;i++)
	{
		printf("%c",ptr[i]);
	}}
