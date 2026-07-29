class Solution {
public:
    int maxArea(vector<int>& nums) {
        int height=0;
        int dist=0;
        int m_area=0;
        int cur_area;

        int i=0;
        int j=nums.size()-1;

        while(i<j){
            height=min(nums[i],nums[j]);
            dist=j-i;
            cur_area=height*dist;
            
            if(m_area<cur_area){
                m_area=cur_area;
            }

            if((nums[i]==nums[j])){
                i++;
                j--;
            }
            else if(nums[i]>nums[j]){
                j--;
            }
            else{
                i++;
            }
            
        }
        return m_area;
    }
};
