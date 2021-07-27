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


/* Problem:

   Given N strings and Q queries, 
   In each query you are given a string
   print frequency of that string.

   N <= 10^6
   |S| <= 100
   Q <= 10^6 

   Input:
   8
   abc
   def
   op
   abc
   op
   def
   abc
   p

   output:
   abc 3
   def 2
   op 2
   p 1


*/

#include<bits/stdc++.h>
using namespace std;

int main(){
   map<string,int> mpp;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
      string s;
      cin>>s;
      mpp[s]++;
   }
   for(auto it:mpp){
      cout<< it.first<<" "<<it.second<<endl;
   }
}
