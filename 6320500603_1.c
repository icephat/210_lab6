#include <stdio.h>
#include <string.h>
int main ()
{
     int n,i,j,k=0;
     scanf("%d",&n);
     if (n>=1&&n<=10000)
     {
      char b[n][100];
      char c[n][100];
      for (i=0; i<n; i++)
      {
            scanf (" %[^\n]s",b[i]);
      }
      for (i=1;i<n;i++)
            for (j=0;j<i;j++)
            {
                for (k=0;k<1000; )
                {
                    if (b[i][k]<b[j][k])
                    {
                        strcpy (c[i],b[j]);
                        strcpy (b[j],b[i]);
                        strcpy (b[i],c[i]);
                        break;
                    }
                    else if (b[i][k] == b[j][k])
                    {
                        k++;
                    }
                    else break;
                }
            }
            for (i=0; i<n; i++)
            {
                printf ("%s\n",b[i]);
            }
    }
 return 0;
}
