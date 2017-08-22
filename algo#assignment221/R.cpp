#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;
int n,m,lcs[2000][2000],test,cs=0;
int main()
{
    string s1,s2;
    scanf("%d",&test);
    while(test--)
    {
        //getline(cin,s1);
        //getline(cin,s2);
        cin>>s1;
        cin>>s2;
        n=s1.size();
        m=s2.size();
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
            {
                if(s1[i-1]==s2[j-1])
                lcs[i][j]=lcs[i-1][j-1]+1;
                else
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
            }
        printf("Case %d: %d\n",++cs,lcs[n][m]);
    }
return 0;
}
