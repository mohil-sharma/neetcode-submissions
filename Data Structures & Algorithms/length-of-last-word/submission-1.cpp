class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int last=0;
        int j=s.length()-1;
        if(s[j]==' '){
            while(s[j]==' '){
                s.pop_back();
                j--;
            }
        }
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' '){
                last=count;
                count=0;
                break;
            }
            count++;
            last=count;
        }
        return last;
    }
};