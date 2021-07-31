// 3.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll t;
   cin>>t;
   while(t--){
      ll n;
      cin>>n;
      unordered_map<ll,ll> mp;
      for(ll i=0;i<n;i++){
         ll x;cin>>x;
         mp[x]++;
      }
      ll ans=0;
      for(auto it:mp){
         ans+=min(((it.first)-1),it.second);
      }

      cout<<ans<<endl;
   }
}


