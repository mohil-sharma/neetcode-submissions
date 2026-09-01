class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> x;
        vector<char> y;
        for(int i=0;i<s.length();i++){
            x.push_back(s[i]);
        }
        for(int i=0;i<t.length();i++){
            y.push_back(t[i]);
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());

        if(x==y){
            return true;
        }
        return false;
    }
};
