class Solution {
public:
    bool isPalindrome(string s) {

        vector<int> v;
        for(int it=0;it<s.length();it++){
            if((s[it]>=48 && s[it]<=57) || (s[it]>=65 && s[it]<=90) || (s[it]>=97 && s[it]<=122)){
                if((s[it]>=65 && s[it]<=90)){
                    v.push_back(s[it]+32);
                }
                else{
                    v.push_back(s[it]);
                }
                
            }
        }

        int i=0;
        int j=v.size()-1;
        while(i<j){
            if(v[i]==v[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
