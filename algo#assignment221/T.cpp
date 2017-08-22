#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
long long int a[500][500],maxi[500][500];
int main()
{
    int T,cs=0;
    scanf("%d",&T);
    while(T--)
    {
        int i,j,k,N,y;
        scanf("%d",&N);
        memset(a,0,sizeof(a));
        memset(maxi,0,sizeof(maxi));
        for(i=0;i<N;i++)
            for(j=0;j<=i;j++)
                scanf("%lld",&a[i][j]);

        for(i=N,k=N-1;i<2*N-1;i++,k--)
            for(j=0;j<k;j++)
                scanf("%lld",&a[i][j]);

        maxi[0][0]=a[0][0];

        for(i=0;i<N-1;i++)
            for(j=0;j<=i;j++)
            {
                maxi[i+1][j] = max(maxi[i+1][j],a[i+1][j] + maxi[i][j]);
                maxi[i+1][j+1] = max(maxi[i+1][j+1],a[i+1][j+1] + maxi[i][j]);

            }

        for(i=N,k=N-1;i<2*N-1;i++,k--)
            for(j=0;j<k;j++)
            {
                y=max(maxi[i-1][j],maxi[i-1][j+1]);
                maxi[i][j] = a[i][j]+y;
            }
        printf("Case %d: %lld\n",++cs,maxi[2*N-2][0]);
    }
}
