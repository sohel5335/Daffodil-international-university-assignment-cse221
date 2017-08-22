#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;

int main()
{
    int test,cs=0,p,b;
     scanf("%d",&test);
    for(int t=1; t<= test; t++){
        int size;
        scanf("%d",&size);
        cs++;
       vector<int>a;
        for(int i=0;i<size;i++)
            {
             scanf("%d",&b);
             a.push_back(b);
            }
        sort(a.begin(),a.end());
        scanf("%d",&p);
        cout<<"Case "<<cs<<":\n";
        if(p==2){
        for(int i=size-1; i>=0; i--){
            printf("%d",a[i]);
            if(i==0)
                 printf("\n");
            else
                printf(" ");
        }
        }
        else if(p==1){
            for(int i=0;i<size;i++){
               printf("%d",a[i]);
            if(i==size-1)
                printf("\n");
            else
                printf(" ");
            }
        }

    }
    return 0;
}

