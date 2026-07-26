class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";

        for(auto &st:strs){
            for(auto &ch:st){
                res.push_back(ch);
            }
            res.push_back(char(0xFFFFFF));
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string curr="";

        for(int i=0;i<s.length();i++){  
            if(s[i]==char(0xFFFFFF)){
                res.push_back(curr);
                curr="";
                continue;
            }
            curr.push_back(s[i]);   
        }
        return res;
    }
};
