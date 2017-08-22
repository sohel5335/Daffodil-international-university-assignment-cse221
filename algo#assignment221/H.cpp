#include<iostream>
using namespace std;
int main ()
{
    unsigned int t,n,m,a,s[100][100],cs=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cs++;
        int f=0;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
            {
                cin>>s[i][j];
            }

        int i,j;
        cin>>a;

        for( i=0; i<n; i++){
        for( j=0; j<m; j++)
            {
                if(a==s[i][j])
                {
                    f=1;
                    i++;
                    j++;
                    break;
                }
            }
            if(f==1)
                break;
        }
        if(f==1)
        cout<<"Case "<<cs<<": "<<i<<" "<<j<<endl;
        else
            cout<<"Case "<<cs<<": Not Found!\n";
    }
    return 0;
}
