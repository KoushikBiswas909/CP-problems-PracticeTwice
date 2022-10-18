#include<bits/stdc++.h>
using namespace std;

// Reverse a string

int main(){
    string s;
    cin>>s;

    int len = s.length();

    for(int i=0;i<len/2;i++){
        swap(s[i],s[len-1-i]);
    }
    cout<<s;
}
