#include<iostream>
using namespace std;
int main ()
{
   long long  int  t,n,i;

    cin>>t;
    while (t--)
    {
        cin>>n;
        i=0;

            while(n%2==0 && n!=0 ){
                n/=2;
                i++;
            }


            if(i%2==0 )
                cout<<"Chicken First!\n";
            else if (i%2!=0)
                cout<<"Egg First!\n";
        }

        return 0;
    }
