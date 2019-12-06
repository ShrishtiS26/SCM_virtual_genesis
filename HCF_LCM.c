#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,t,hcf,x,y,lcm;

    printf("Enter two numbers");
    scanf("%d %d",&x,&y);
    a=x;
    b=y;

    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    hcf=a;
    lcm=(x*y)/hcf;
    printf("Highest common factor is %d",hcf);
    printf("Least common Multiple is %d",lcm);
    return 0;
}
