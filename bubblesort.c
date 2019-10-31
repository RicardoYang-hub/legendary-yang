#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int a[N];
    int i,j,temp;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<(N-1)/2;i++)
    {
        temp=a[i];
        a[i]=a[N-1-i];
        a[N-1-i]=temp;
    }
    for(i=0;i<N;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
