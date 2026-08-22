class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i=1;
        if(nums[i]==nums[i-1]){
            while(i<nums.size() && nums[i]==nums[i-1]){
                 i++;
            }
           
        }
        if(nums[i]>nums[i-1]){
            while(i<nums.size()){
                if(nums[i]>=nums[i-1]){
                    i++;
                }
                else{
                    return false;
                }
            }
        }
        else {
            while(i<nums.size()){
                if(nums[i]<=nums[i-1]){
                    i++;
                }
                else{
                    return false;
                }
            }
        }
        return true;

    }
};