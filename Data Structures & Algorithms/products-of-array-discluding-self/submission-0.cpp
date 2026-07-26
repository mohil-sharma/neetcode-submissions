class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n, 1);
        vector<int> right(n,1);
        vector<int> res(n,1);
        int l=1;
        int r=1;

        for(int i=0;i<nums.size();i++){
            left[i]=l;
            l=l*nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            right[i]=r;
            r=r*nums[i];
        }
        for(int j=0;j<nums.size();j++){
            res[j]=left[j]*right[j];
        }
        return res;
    }
};
