#include<bits/stdc++.h>
using namespace std;

// Printing Simple Pyramid

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
