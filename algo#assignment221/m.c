#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int i,n,temp=0,sum=0;
        scanf("%d",&n);
      for( i=0;i<n;i++){
          int ai,pi;
            scanf("%d %d",&ai,&pi);
          if(i==0){
                temp=pi;
             sum+=ai*pi;
          }

        else{
            temp>pi? temp=pi:temp;
            sum+=ai*temp;
        }

      }
      printf("%d\n",sum);
        }
    }

