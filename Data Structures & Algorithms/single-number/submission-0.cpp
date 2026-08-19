class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count=nums[0];

        for(int i=1;i<nums.size();i++){
            count=count^nums[i];
        }
        return count;
    }
};
