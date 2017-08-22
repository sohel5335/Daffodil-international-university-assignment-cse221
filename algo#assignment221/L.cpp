#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main ()
{
    int t;
    scanf("%d",&t);
    for(int a=1;a<=t;a++)
    {
        char c[1000];
       scanf("%s",c);
        int n= strlen(c),j=-1;
        int y=n,i;
        char t[1000],v[1000];
        sort(c,c+n);
        for( i=0; i<n; i++)
        {
            if(c[i-1]==c[i])
            {
                if(i%2==1)
                t[--y]=c[i];
                else
                    t[++j]=c[i];
            }
            else
            {
                t[++j]=c[i];
            }

        }
        t[i]='\0';
        int k,l;
            for(k=n-1,l=0;k>=0;k--,l++){
                v[l]=t[k];
            }
              v[l]='\0';

          if(!strcmp(v,t))
            printf("Case %d: %s\n",a,t);
          else
            printf("Case %d: impossible\n",a);
    }
}






