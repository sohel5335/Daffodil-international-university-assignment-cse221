#include<stdio.h>
#define max 93
#define flag -1
using namespace std ;
long f[max];

long fib_c(int n){
if(f[n]==flag)
       f[n]=fib_c(n-1)+fib_c(n-2);

       return (f[n]);
}

 int main (){
    int n ,test;
    scanf("%d",&test);
    while(test--){
    scanf("%d",&n);
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++)
    f[i] =flag;

    printf("%ld\n",fib_c(n));
}
    return 0;
 }
