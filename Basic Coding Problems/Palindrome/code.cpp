#include<bits/stdc++.h>
using namespace std;

// Palindrome Number

int main(){
    int n;
    cin>>n;
    int sum =0, final = n;

    while(n>0){
        int temp = n%10;
        sum = (sum*10)+temp;
        n = n/10;
    }
    if(final == sum)
        cout<<"Yes";
    else
        cout<<"No";
}
