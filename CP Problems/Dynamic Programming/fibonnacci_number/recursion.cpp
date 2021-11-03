#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int fib(int n){
    if(n<=1)
      return n;
    else
      return fib(n-1)+fib(n-2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}
