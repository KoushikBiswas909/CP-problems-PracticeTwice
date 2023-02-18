class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //array size
        int n=nums.size();

        //Calculate total sum
        int total_sum=0;
        for(int i=0;i<nums.size();i++){
            total_sum+=nums[i];
        }

        //Prefix sum implementation
        vector<int> prefix_arr(n);
        prefix_arr[0]=nums[0];
        if(total_sum-nums[0]==0){
            return 0;
        }
        for(int i=1;i<n;i++){
            prefix_arr[i]=prefix_arr[i-1]+nums[i];
            if(prefix_arr[i-1]==(total_sum-prefix_arr[i])){
                return i;
            }
        }
        return -1;
    }
};
