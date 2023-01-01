#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define mia -1e18
#define maa 1e18
#define pii pair<int,int>
using namespace std;
#define maxn 1000100
signed main(){
    vector<int>dp(maxn);
    int x;
    for(int i=2;i<=100;i++){
        x=i*i*i;
        if(dp[x]==0){
            for(int j=x;j<maxn;j+=x){
                if(j<maxn)
                dp[j]=-1;
            }
        }
    }
    int cn=0;
    for(auto &it:dp){
        if(it==-1) cn++;
        else it=cn;
    }
    int tt;
    cin>>tt;
    int i=1;
    while(tt--)
    {
                int n;
                cin>>n;
                if(dp[n]==-1){
                    cout<<"Case "<<i<<": "<<"Not Cube Free"<<endl;
                }
                else{
                    cout<<"Case "<<i<<": "<<n-dp[n]<<endl;
                }
                
                i++;
 
                
    }
} 