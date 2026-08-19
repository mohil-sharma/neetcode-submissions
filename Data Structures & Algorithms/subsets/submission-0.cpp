class Solution {
public:
    vector<int> sub(vector<int>& nums,int i,vector<int> temp,vector<vector<int>>& ans){
        if(i==nums.size()){
            ans.push_back(temp);
            return temp;
        }

        temp.push_back(nums[i]);
        sub(nums,i+1,temp,ans);
        temp.pop_back();
        sub(nums,i+1,temp,ans);
        
        return temp;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;

        sub(nums,0,temp,ans);

        return ans;
    }
};
