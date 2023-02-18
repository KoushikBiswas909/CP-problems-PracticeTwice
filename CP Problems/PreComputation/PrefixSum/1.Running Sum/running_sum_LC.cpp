/*
To Practice prefix sum technique first try this.
Problem Link:    https://leetcode.com/problems/running-sum-of-1d-array/description/
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(auto &it: nums)
        cin>>it;
    vector<int> answer(n);
    answer[0]=nums[0];
    for(int i=1;i<n;i++){
        answer[i]=answer[i-1]+nums[i];
    }
    for(auto it: answer)
        cout<<it<<" ";
}

/*
Input: 
5
10 20 10 5 15
output:
10 30 40 45 60 
*/
