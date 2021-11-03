/*
Algorithm:

fib(n){
  if(n<=1)
     return n;
  if(Fn is in memory)
     return Fn;
  else
     cal Fn = fib(n-1)+fib(n-2);
     Store Fn in memory
     return Fn
}

Time complexity: O(n)

*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

vector<int> v(MAX_N,-1);

int fib(int n){
    if(n<=1)
        return n;
    if(v[n]>0)
        return v[n];
    v[n]=fib(n-1)+fib(n-2);

    return v[n];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}
