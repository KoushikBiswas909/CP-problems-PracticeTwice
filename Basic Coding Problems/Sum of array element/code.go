#include<bits/stdc++.h>
using namespace std;

// Sum of numbers in an array

int main(){
    int arr[10];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<5;i++){
        sum += arr[i];
    }

    cout<<sum;
}
