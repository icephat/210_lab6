#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);

    char b[n][100];
    char c[100];
    for(i=0;i<n;i++)
    {
        scanf("%s",b[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(b[j],b[j+1])==1)
            {
                strcpy(c,b[j]);
                strcpy(b[j],b[j+1]);
                strcpy(b[j+1],c);
            }

        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",b[i]);
    }




    return 0;
}
