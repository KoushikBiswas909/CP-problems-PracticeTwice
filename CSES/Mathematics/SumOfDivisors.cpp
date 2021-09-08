/* Sum of Divisors CSES problem set Brute Force Approach
Input: 5

Output: 21
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int sumofdiviors(int n){
    int a=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(n/i==i)
                a=a+i;
            else
                a=a+i+(n/i);
        }
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        int b=0;
        b=sumofdiviors(i);
        ans+=b;
    }
    cout<<ans<<endl;
}


*************************************************************************************************************************************************************
// Optimal approach


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int mod=1e9+7;

// This is also right
/*ll modularbinaryexponentiation(int base, int exponent){
  if(exponent==0)
    return 1;
  ll result=modularbinaryexponentiation(base,exponent/2);
  if(exponent%2==1)
    return (((result*result)%mod)*base)%mod;
  else
    return (result*result)%mod;
}*/


// This is also right
ll modularbinaryexponentiation(int a, int b){
  if(b==0)
    return 1%mod;
  else if(b%2==0){
    ll x=modularbinaryexponentiation(a,b/2);
    return (x*x)%mod;
  }
  else{
    ll y=(modularbinaryexponentiation(a,b-1))%mod;
    return (a*y)%mod;
  }
}

int main(){
  ll n;
  cin>>n;

  ll answer=0;
  for(ll i=1,j;i<=n;i=j){
    ll q=n/i;
    j=(n/q)+1;

    ll sumuptojminus1=((j%mod*((j-1)%mod))%mod * modularbinaryexponentiation(2,mod-2))%mod;
    ll sumuptoIminus1=((i%mod*((i-1)%mod))%mod * modularbinaryexponentiation(2,mod-2))%mod;
    ll rangewithQuotientQ= (sumuptojminus1- sumuptoIminus1+mod)%mod; //When we performming any difference with mod, always use extra +mod, because if diff goes in '-'ve, +mod always keep it in range [0,n).
    answer= (answer+(q%mod)*rangewithQuotientQ)%mod;
  }
  cout<<answer<<endl;
}


