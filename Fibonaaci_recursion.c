#include <stdio.h>
#include <stdlib.h>
int fibo(int n);
int main()
{
    int n,i;
    printf("Enter the number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\n",fibo(i));
    printf("Hello world!\n");
    return 0;
}
int fibo(int n)
{
    if(n==1||n==2)
        return 1;
    return(fibo(n-1)+fibo(n-2));
}
