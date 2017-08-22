#include <iostream>
#include<stdio.h>
using namespace std;
long ways [7500];
void count ()
{
int coin [] = {1,5,10,25,50},i,j;
    ways [0] = 1;
    for (int i = 0; i < 5; i++ ) {
        for (int j = coin [i]; j <=7500; j++ )
            ways [j] += ways [j - coin [i]];

    }

}
int main ()
{
    count ();
    int n,test;
    //scanf("%d",&test);
    while(scanf("%d",&n)!=EOF){
        //scanf("%d",&n);
        cout<<ways[n]<<endl;
    }
    return 0;
}
