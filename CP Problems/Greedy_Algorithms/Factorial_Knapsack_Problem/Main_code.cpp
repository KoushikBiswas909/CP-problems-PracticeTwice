/*
Sol Link: https://pencilprogrammer.com/algorithms/fractional-knapsack-problem/
Input:
50
60 10
100 20
120 30

Output:
Values:60 100 120 
Weights:10 20 30 
240
 
*/
#include<bits/stdc++.h>
using namespace std;

typedef struct{
  int value;
  int weight;
  float density;
}Item;

void input(Item items[],int n){
  for(int i=0;i<n;i++){
    cin>>items[i].value;
    cin>>items[i].weight;
  }
}

void display(Item items[],int n){
  cout<<"Values:";
  for(int i=0;i<n;i++){
    cout<<items[i].value<<" ";
  }
  cout<<endl;
  cout<<"Weights:";
  for(int i=0;i<n;i++){
    cout<<items[i].weight<<" ";
  }
  cout<<endl;
}

bool comparitor(Item a, Item b){
  return (a.density>b.density);
}

float knapsack(Item items[],int n, int w){

  // Calculating Density of each item
  for(int i=0;i<n;i++){
    items[i].density=(items[i].value/items[i].weight);
  }

  // Sort the array decending order of density
  sort(items,items+n,comparitor);

  // Itreate through desending order of density
  float totalvalue=0,totalweight=0;
  for(int i=0;i<n;i++){

    // Check if I add the item, will it fit in knapsack
    if(totalweight+items[i].weight<=w){
      totalvalue=totalvalue+items[i].value;
      totalweight=totalweight+items[i].weight;
    }
    else{
      float remaining_weight=w- totalweight;
      totalvalue=totalvalue+(remaining_weight * items[i].density);
      totalweight=totalweight+remaining_weight;
      break;
    }
  }
  return totalvalue;
}

int main(){
  int W; // Knapsack Weight
  cin>>W;
  Item items[3];
  input(items,3);// Takes inputs
  display(items,3);
  // We have to find maximum posible value
  float maxvalue= knapsack(items,3,W);
  cout<<maxvalue<<endl;
}



