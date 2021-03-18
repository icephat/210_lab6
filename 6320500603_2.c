#include<stdio.h>
int main()
{
    int n,i,first,rd,k=0,x=0;
    scanf("%d",&n);
    int a[n];
    int b[n];
    scanf("%d",&first);
    scanf("%d",&rd);
    for(i=0;i<n;i++)
    {
        a[i]=first%10;
        first/=10;
        b[i]=rd%10;
        rd/=10;
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==b[i])
        {
            k++;
        }
        else
        {
            x++;
        }
    }
    printf("%d %d",k,x);
    return 0;
}
