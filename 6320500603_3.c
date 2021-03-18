#include<stdio.h>
int main()
{
    int n,i,j,max=0,min[2],s,l=0,m=0;
    scanf("%d",&n);
    int a[n][2],b[n],k,x[n];

    if(n>1&&n<1001)
    {
        for(i=0;i<n;i++)
        {
            b[i]=i+1;
            for(j=0; j<2; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    }






    return 0;
}
