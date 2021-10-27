#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void heapify(int arr[],int i,int item){
    while(i>1 && item>arr[i/2]){
        arr[i]=arr[i/2];
        i=i/2;
    }
    arr[i]=item;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[10];
    for(int i=1;i<=8;i++){
        cin>>arr[i];
    }
    arr[9]=95;
    
    heapify(arr,9,95);

    for(int i=1;i<=9;i++){
        cout<<arr[i]<<" ";
    }
    
}
/*
Input: 90 80 70 75 68 59 48 60
Output: 95 90 70 80 68 59 48 60 75 

*/
