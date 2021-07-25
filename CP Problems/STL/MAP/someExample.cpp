/* Problem: Given N elements, Print the element which occurs max no of time.
   Input: 5
          2 3 3 3 1
   Output: 3 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<int,int> mpp; // u can use unorder_map or map, but un is remomanded
    int maxi=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mpp[x]++; //equivalant to mpp[1]=1;
        if(mpp[x]>mpp[maxi]){
            maxi=x;
        }
    }
    cout<<maxi<<endl;
}
