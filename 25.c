#include<stdio.h>
int fib(int);
int main()
{
    int a;
    printf("ENTER NUMBER THAT'S YOU WANT TO FIND THE FIBONACCI SERIES \n");
    scanf("%d",&a);
    for (int i= 0; i<a; i++)
    {
        printf("%d ",fib(i));
    }
}
int fib (int n)
{
    if(n==0)
    return 0;
    else if (n==1)
    return 1;
    else 
    return (fib(n-1)+fib(n-2));
}
