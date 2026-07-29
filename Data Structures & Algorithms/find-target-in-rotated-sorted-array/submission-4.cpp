class Solution {
   public:
    int getMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int mid;

        while (low < high) {
            mid = (low + high) / 2;

            if(nums[mid]>nums[high]){
                low=mid+1;
            }
            else {
                high=mid;
            }
        }
        return high;
    }

    int search(vector<int>& nums, int target) {
        int minIndex=getMin(nums);

        int low=0;
        int high=minIndex-1;
        int mid;

        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        int left=minIndex;
        int right=nums.size()-1;
        int center;

        while(left<=right){
            center=(left+right)/2;
            if(nums[center]==target){
                return center;
            }
            else if(nums[center]>target){
                right=center-1;
            }
            else{
                left=center+1;
            }
        }

        return -1;
    }

};
