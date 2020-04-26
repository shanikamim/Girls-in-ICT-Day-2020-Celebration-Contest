#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e5+7;
int n;

long long a[maxn];
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    int flag = 0;
    for(int i=2;i<=n-1;i++){
        if(a[i]+a[i-1]>a[i+1])
            flag = 1;
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
