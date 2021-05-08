//This problem based on FAST INPUT OUTPUT technique (Fast I/O)
//link:


//https://www.codechef.com/MAY21C/problems/LKDNGOLF
//problem code : LKDNGOLF


//BruteFroce Approch (where i use linear searching, thats why time limit exceed. )

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll T;
    cin >> T;
    while(T--){
    	ll N,x,k;
    	cin >> N >> x >> k;
    	int count=0;
    	for(int i=0;i<N+2;i++){
           if((i*k)==x)
           	count++;
    	}
    	for(int i=0;i<N+2;i++){
    		if(((N+1)-(i*k))==x)
    			count++;
    	}
    	if(count == 1 || count == 2){
    		cout << "YES" << endl;
    	}
    	else
    		cout << "NO" << endl;
    }
}




// Now this is OPtimal Solution

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll T;
	cin >> T;
	while(T--){
		ll N,x,k;
		cin >> N >> x >>k;
		if(((x%k)==0) || (((N+1)-x)%k)==0)
			cout << "YES"<< endl;
		else
			cout << "NO" << endl;
	}

}







.
  
