/*
problem: https://cses.fi/problemset/task/1713/
Hint: Create a hash array of max size, and precompute the count.

Some Modification:
1. If we want sum of divisiors
-> Change div_cnt[j]++; to div_cnt[j]+=j;
2. Min divisior each X
-> Change div_cnt[j]++; to div_cnt[j]=min(div_cnt,j);
3. Max divisior each X
-> Change max();
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int maxv=1e6+1;

int main(){
    ll div_cnt[maxv]={0};
    for(ll i=1;i<maxv;i++){
        for(ll j=i;j<maxv;j+=i){
            div_cnt[j]++;
        }
    }



    ll t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        cout<<div_cnt[x]<<endl;

    }


    return 0;
}

