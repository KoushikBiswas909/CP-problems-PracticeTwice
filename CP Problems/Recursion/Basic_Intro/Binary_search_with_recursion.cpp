/*  Binary Search algorithm with Recursion  */


#include<bits/stdc++.h>
using namespace std;

int BinarySearchWithRecursion(vector<int> array,int target, int start, int end){
    int mid = (start+end)/2; // Calculate the middle element

    if(array[mid]==target)
        return mid;
    else if(array[mid] > target)
        return BinarySearchWithRecursion(array,target,start,mid-1);
    else if(array[mid] < target)
        return BinarySearchWithRecursion(array,target,mid+1,end);
    else
        return -1;
}

int main(){
    vector<int> array={1, 2 ,4, 5, 66, 77};
    int target=5;
    cout<<BinarySearchWithRecursion(array,target,0,5)<<endl;
}

/*
There are mainly two types of Recurrence:
1. Linear Recursion, Example: Fibonacci series code
2. Divide-conquer Recursion , Example: Binary search with recursion

N.B. source kunal's channel
*/
