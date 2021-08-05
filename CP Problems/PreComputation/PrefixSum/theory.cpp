// https://www.geeksforgeeks.org/prefix-sum-array-implementation-applications-competitive-programming/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
   array<int,5> arr;
   array<int,5> ps;
   for(int i=0;i<5;i++){
      cin>>arr[i];
   }
   ps[0]=arr[0];
   for(int j=1;j<5;j++){
      ps[j]=ps[j-1]+arr[j];
   }
   for(auto it:ps){
      cout<<it<<" ";
   }
   
}

INPUT: 10 20 10 5 15
OUTPUT: 10 30 40 45 60 

