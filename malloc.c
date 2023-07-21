#include<stdio.h>
#include<stdlib.h>
int main()
{

    int n=3;
    int*arr=(int*)malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr);
        for(int j=0;j<n;j++)
            printf("%d",arr[i]);
    }
}
