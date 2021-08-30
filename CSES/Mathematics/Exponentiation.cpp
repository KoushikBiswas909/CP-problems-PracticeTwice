// Brute-force Solution giving TLE

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll m=1000000007;


int main(){
  ll n;
  cin>>n;
  while(n--){
    ll a,b;
    cin>>a>>b;
    ll ans=1;
    while(b--){
      ans=(ans*a)%m;
    }
    cout<<ans<<endl;
  }
}
// Time complexity is O(n×b) which can take O(N²). It will show TLE in CSES online judge.
Input:
3
3 4
2 8
123 123

Output:
81
256
921450052
  
  
  
************************************************************************************************************************************************************

// Optimized Solution

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll m=1000000007;

ll solve(ll a, ll b){
  if(b==0)
    return 1%m;
  else if(b%2==0){
    ll x=solve(a,b/2);
    return (x*x)%m;
  }
  else{
    ll y=solve(a,b-1);
    return (a*y)%m;
  }
}


int main(){
  ll n;
  cin>>n;
  while(n--){
    ll a,b;
    cin>>a>>b;
    cout<< solve(a,b) <<endl;
  }
}

/*
Time Complexity will be O(log n), Sucessfully passed all test cases.

Input:
3
3 4
2 8
123 123

Output:
81
256
921450052


Theory Hint: Modular Exponentiation from "guide to cp and learning".
Video: https://www.youtube.com/watch?v=nO7_qu2kd1Q&list=PL2_aWCzGMAwLz3g66WrxFGSXvSsvyfzCO&index=8&ab_channel=mycodeschool
*/
