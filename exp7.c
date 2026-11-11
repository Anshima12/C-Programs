#include<stdio.h>
void swap(int *a,int *b)/*call by reference */
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int factorial(int n)/*call by value*/
{
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}
int add(int x,int y)/*simple user defined function*/
{
    return x+y;
}
int main()
{
    printf("Enter two numbers to swap: ");
    int x,y;
    scanf("%d %d",&x,&y);
    printf("Before swapping: x=%d, y=%d\n",x,y);
    swap(&x,&y);
    printf("After swapping: x=%d, y=%d\n",x,y);
    printf("Enter a number to find its factorial: ");
    scanf("%d",&x);
    printf("Factorial of %d is %d\n",x,factorial(x));
   printf("Enter two numbers to add: ");
    scanf("%d %d",&x,&y);
    printf("Sum of %d and %d is %d\n",x,y,add(x,y));
    return 0;
}


