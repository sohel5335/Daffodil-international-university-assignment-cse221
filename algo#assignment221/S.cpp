#include<algorithm>
#include<iostream>
#include<cstdio>
using namespace std;
int maxi[1010][1010],value[1010],weight[1010];
int main()
{

     int mw,n,t;
     cin>>t;
     while(t--)
     {
         cin>>n;
         for(int i=1;i<=n;i++)
         {
             cin>>value[i]>>weight[i];
         }
         int a,sum=0;
         cin>>a;
         for(int i=0;i<a;i++)
         {
             cin>>mw;
             for(int i=1;i<=n;i++)
             {
                for(int w=1;w<=mw;w++)
                {
                    if(weight[i]>w)
                    {
                        maxi[i][w] = maxi[i-1][w];
                        }
                    else
                    {
                            maxi[i][w]=max(maxi[i-1][w-weight[i]]+value[i],maxi[i-1][w]);
                    }
                 }
              }
              sum+=maxi[n][mw];
         }
         printf("%d\n",sum);
     }
    return 0;
}
