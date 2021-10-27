#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void heapify(int arr[],int i,int n){
    if(i>=n)
        return;
    int maxIndex=2*i;
    if(maxIndex<n and arr[maxIndex]<arr[maxIndex+1]){
        maxIndex=maxIndex+1;
    }
    if(arr[i]>=arr[maxIndex])
        return;
    swap(arr[i],arr[maxIndex]);
    heapify(arr,maxIndex,n);
}

deleteele(int arr[],int n){
    int max=arr[1];
    arr[1]=arr[n];

    heapify(arr,1,n-1);
    return max;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[10];
    for(int i=1;i<=8;i++){
        cin>>arr[i];
    }
    int ans=deleteele(arr,8);
    for(int i=1;i<=7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<ans;
}
/*
Input: 90 80 70 75 68 59 48 60
Output: 80 75 70 60 68 59 48 
        90

*/
