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


