#include<bits/stdc++.h>
using namespace std;

// Binary Search

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &it: arr)
        cin>>it;
    int x;
    cin>>x;
    sort(arr.begin(), arr.end());

    int low =0,high=n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == x){
            cout<<"Found";
            break;
        }
        else if(x<arr[mid]){
            high = mid-1;
        }
        else
            low = mid+1;
    }
}

