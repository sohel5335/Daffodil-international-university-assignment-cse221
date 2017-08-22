#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,n[1000];
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        for(int j=0;j<s;j++){}
        {
            cin>>n[j];
        }
        sort(n,n+s);
        for(int i=s-1; i>=0; i--){
            cout<<n[i];
            if(i==0)
                cout<<endl;
            else
                cout<<" ";
        }
    }
    return 0;
}
