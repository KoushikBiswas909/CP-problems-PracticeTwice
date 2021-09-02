/*
problem: https://cses.fi/problemset/task/1713/
Hint: Create a hash array of max size, and precompute the count.
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

