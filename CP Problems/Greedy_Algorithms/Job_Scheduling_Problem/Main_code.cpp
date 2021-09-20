#include<bits/stdc++.h>
using namespace std;

struct job{
     char id; // job name
     int dead; // job deadline
     int profit; // job profit
};

bool comparison(job a,job b){
     return (a.profit>b.profit); // Big to small sorting
}

void printjobseduleing(job arr[],int n){
     sort(arr,arr+n,comparison);
     
     int result[n];
     bool slot[n];
     for(int i=0;i<n;i++){
          slot[i]=false;
     }

     for(int i=0;i<n;i++){
          //int deadline=arr[i].dead;
          for(int j=min(n,arr[i].dead);j>0;j--){
               if(slot[j]==false){
                    //slot[j-1]=true;
                    result[j]=i;
                    slot[j]=true;
                    break;
               }
          }
     }

     for(int i=0;i<n;i++){
          if(slot[i])
               cout<<arr[result[i]].id<<" "<<endl;
     }
     
}

int main(){
    job arr[]= { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},{'d', 1, 25}, {'e', 3, 15}};
    int n=sizeof(arr)/sizeof(arr[0]);
    printjobseduleing(arr,n);
    return 0;
}


