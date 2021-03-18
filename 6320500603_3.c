#include<stdio.h>
int main()
{
    int i,k,n,g,z,c,max,m=0;
    scanf ("%d %d",&n,&g);
    char a;
    int x[n],y[n];

    for (i=0; i<n; i++)
    {
        x[i] = 0;
        y[i] = 0;
    }
    for (i=0; i<g; i++)
    {
        scanf (" %c %d %d",&a,&z,&c);
        if (a == 'U')
        {
            x[z-1] = c;
        }
        else if (a == 'P')
        {
            max = x[z-1];
            for (k=z; k<c; k++)
            {
                if (max < x[k])
                {
                    max = x[k];
                }
            }
            y[m] = max;
            m++;
        }

    }
    for (i=0; i<m; i++)
    {
        printf ("%d\n",y[i]);
    }
    return 0;
}
