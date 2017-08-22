#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
    int test,cs=0,p,b,d;
    scanf("%d",&test);
    for(int t=1; t<= test; t++)
    {
        int size;
        scanf("%d",&size);
        cs++;
        vector<int>a;
        for(int i=0; i<size; i++)
        {
            scanf("%d",&b);
            a.push_back(b);
        }
        scanf("%d",&d);
        int l=0,h=size-1,f=0;
        if(a[0]<a[h])
        {
            while (l<=h )
            {
                int md=(l+h)/2;
                if(a[md]==d)
                    f=1;
                if(a[md]<d)
                    l=md+1;
                else
                    h=md-1;

            }
        }
        else if(a[0]>h) {
                 while (l<=h)
            {
                int md=(l+h)/2;
                if(a[md]==d){
                    f=1;
                }
                if(a[md]>d)
                    l=md+1;
                else
                    h=md-1;

            }

        }
        if(f==1)
        printf("Case %d: Found.\n",cs);
        else if (f==0)
             printf("Case %d: Not Found.\n",cs);
    }
}
