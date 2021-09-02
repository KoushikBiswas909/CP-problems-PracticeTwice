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
/*       Optimal Approach: This is best approach                 */

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



/*           NAIVE APPROACH:        This Approach accepted in some case but overall TLE            */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll x;
    cin>>x;
    ll cnt=0,cnt1=0;
    for(int i=1;i*i<=x;i++){
      ll temp=x/i;
      if((x%i==0) && i!=temp){
        cnt++;
      }

      if((x%i==0) && (i==temp)){
        cnt1++;
      }
    }
    cout<<(2*cnt)+cnt1<<endl;
  }
}



