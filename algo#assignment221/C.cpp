#include<iostream>
using namespace std;
int main ()
{
    int t,n,f,cs=0;
    cin>>t;
    while(t--){
        f=1;
        cs++;
        cin>>n;
        for(int i=1;i<=n;i++){
            f*=i;
        }
        cout<<"Case "<<cs<<": "<<f<<endl;
    }
    return 0;
}
