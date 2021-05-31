/*
Given array a of N integers.
Given Q queries and in each query given a number X.
Print count of that number in array.

constraints
1 <= N <=10^5
1 <= a[i] <=10^7
1 <= Q <= 10^5


*/

/*#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll N;
	cin >> N;
	ll a[N];
	for(ll i=0;i<N;i++){
		cin >> a[i];
	}
	ll Q;
	cin >> Q;
	while(Q--){
		ll x;
		cin >> x;
		ll count=0;
		for(ll i=0;i<N;i++){
			if(a[i]==x)
				count++;
		}
		cout << count <<endl;
	}

}*/


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int n= 10^7+10;

ll hsh[n];

int main(){
	ll N;
	cin >> N;
	ll a[N];
	for(ll i=0;i<N;i++){
		cin >> a[i];
		hsh[a[i]]++;
	}
	ll Q;
	cin >> Q;
	while(Q--){
		ll x;
		cin >> x;
		cout << hsh[x] <<endl;
	}
}