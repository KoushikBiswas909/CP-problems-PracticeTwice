// https://www.youtube.com/watch?v=Z8Fj3pcHXDs&t=693s&ab_channel=ARSLONGAVITABREVIS



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> range(1e6+1,0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        range[x]++;
    }

    for(int gcd=1e6;gcd>=1;gcd--){
        int multiples=0;
        // checking there are any multiple of gcd in range gcd to 1e6.
        for(int i=gcd; i<=1e6; i+=gcd){
            multiples=multiples+range[i];
        }
        if(multiples>1){
            cout<<gcd<<endl;
            return 0;
        }
    }
}




