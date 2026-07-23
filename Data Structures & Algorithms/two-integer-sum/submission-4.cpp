class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int remaining;
        for(int i=0;i<nums.size();i++){
            remaining=target-nums[i];
            if(mp.find(remaining)!=mp.end()){
                return {mp[remaining],i};
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return {};
    }
};
