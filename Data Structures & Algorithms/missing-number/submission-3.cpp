class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int count=0;
        for(int i=0;i<=nums.size();i++){
            if(i!=nums.size()){
                count=count^nums[i]^i;
            }
            else{
                count=count^i;
            }
            
        }
        return count;
    }
};
