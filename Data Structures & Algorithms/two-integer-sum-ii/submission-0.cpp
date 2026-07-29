class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        vector<int> s;

        while(i<j){
            if((numbers[i]+numbers[j])==target){
                s.push_back(i+1);
                s.push_back(j+1);
                return s;
            }
            else if ((numbers[i]+numbers[j])>target){
                j--;
            }
            else{
                i++;
            }
        }
        return s;
    }
};
