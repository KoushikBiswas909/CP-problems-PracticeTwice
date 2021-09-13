// We have to calculate a^b^c  modulo 10^9+7
// If we use previous method the get error caz (a^(b^c)%m)%m not equal to (a^b^c)%m
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll solve(ll p , ll q, ll m){
  if(q==0)
    return 1%m;
  else if(q%2==0){
    ll temp1=solve(p,q/2,m);
    return (temp1*temp1)%m;
  }
  else{
    ll temp2=solve(p,q-1,m);
    return (p*temp2)%m;
  }
}

int main(){
  ll t;
  cin>>t;
  ll m=1e9+7;
  while(t--){
    ll a,b,c;
    cin>>a>>b>>c;
    ll x=solve(b,c,m-1);
    cout<<solve(a,x,m)<<endl;
  }
}

// Hint is b^c (mod m-1)
// Resource: Farmet's little theorem and Ecluid's theorem, ARS LONGA VITE BRE... 




