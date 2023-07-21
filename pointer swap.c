#include<stdio.h>
int swap(int*x,int*y)
{

    int temp;
    temp=*a;
    *x=*y;
    xy=temp;
    printf("%d%d",*x,*y)
}
int main()
{
    int a=10,b=20;
    printf("%d%d",a,b);
    swap(&a,&b);
    printf("%d%d",a,b);

}

