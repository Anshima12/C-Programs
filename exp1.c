/*WRITE PROGRAMS TO PRINT STATEMENTS IN SEQUENTIAL ORDER USING SIMPLE PRINTF,SCANF,INPUT/OUTPUT FUNCTIONS*/
#include <stdio.h>
int main()
{
	char name[50];
	int age;
	printf("hello world\n");
	printf("enter name and age");
    scanf("%s",name);
    scanf("%d",&age);
    printf("the name is %s\n",name);
    printf("the age is %d\n",age);
	return 0;
}