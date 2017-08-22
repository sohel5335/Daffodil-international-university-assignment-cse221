#include<stdio.h>
#include<math.h>
int main ()
{
    int  t;
    scanf("%d",&t);
    while(t--){
            int x,res=0;
            scanf("%d",&x);
            if(x%5==0){
               res=x/5;
            }
            else {
                res=x/5;
                res++;
            }
            printf("%d\n",res);
    }
    return 0;
}
