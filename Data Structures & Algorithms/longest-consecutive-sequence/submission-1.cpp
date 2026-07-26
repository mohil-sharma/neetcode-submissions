class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int longest=0;
        int max=0;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(auto x:s){
            longest=1;
            if(s.find(x-1)!=s.end()){
                continue;
            }
            while(s.find(x+1)!=s.end()){
                x++;
                longest++;
            }
            if(max<longest){
                max=longest;
            }
        }
        return max;
    }
};
