#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{
    vector<int>v;
    int n,num,test;
   scanf("%d",&test);
   while(test--){
        scanf("%d",&n);
   vector<int>v;
    while(n--){
        scanf("%d",&num);
        vector<int>::iterator iv = lower0_bound(v.begin(),v.end(),num);
        if(v.end()==iv)
            v.push_back(num);
        else
            v[iv-v.begin()]=num;
    }
    printf("%d\n",v.size());
   }
}
