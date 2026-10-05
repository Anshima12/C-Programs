/*WRITE PROGRAM TO IMPLEMENT IF-ELSE CONDITIONS(SIMPLE AS WELL NESTED)ON SUITABLE PROGRAMS*/
#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    // Simple if-else
    if (marks >= 40)
    {
        printf("You are Pass.\n");
    }
    else
    {
        printf("You are Fail.\n");
    }

    // Nested if-else
    if (marks >= 40)
    {
        if (marks >= 75)
        {
            printf("Grade: Distinction\n");
        }
        else if (marks >= 60)
        {
            printf("Grade: First Division\n");
        }
        else
        {
            printf("Grade: Second Division\n");
        }
    }
    else
    {
        printf("Grade: No Division\n");
    }

    return 0;
} 