#include<stdio.h>
int main()
{
   int n,m,a,b,rev=0,c,d;
    printf("enter the number=");
    scanf("%d",&n);
    a=n*n;
    while(n!=0)
    {

        b=n%10;
        rev=rev*10+b;
        n=n/10;
    }
    m=rev*rev;
    while(m!=0)
    {
        c=m%10;
        d=d*10+c;
        m=m/10;
    }
    if(a==d)
    {

        printf("\n true");
    }
    else{
        printf("\n false");
    }

}
