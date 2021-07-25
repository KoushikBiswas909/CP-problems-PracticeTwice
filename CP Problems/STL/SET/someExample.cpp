    /* Given N elements, print all elements in sorted order. 
       Input: 6
              8 7 8 2 7 3
       Output: 2 3 7 7 8 8         
    */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    multiset<int> ms;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ms.insert(x);
    }
    for(auto it: ms){
        cout<<it<<" ";
    }
}


