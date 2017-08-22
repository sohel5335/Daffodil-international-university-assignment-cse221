#include<iostream>
#include<cstdio>
using namespace std;

int main ()
{
    unsigned int a,b;
    scanf("%d %d",&a,&b);

        if(a>=b)
            cout<<"Become a Jedi, you will!"<<endl;
        else if (a<b)
            cout<<"Too old, you are!"<<endl;

    return 0;
}
