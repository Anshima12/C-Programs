#include <stdio.h>
#include <string.h>
int main()
{
    char name[10][50];
    char temp[50];
    printf("Enter the names of 10 students: ");
    for(int i=0;i<10;i++)
    {
        scanf("%s",name[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
    printf("Names of students in alphabetical order:\n");
    for(int i=0;i<10;i++)
    {
        printf("%s\n",name[i]);
    }

}