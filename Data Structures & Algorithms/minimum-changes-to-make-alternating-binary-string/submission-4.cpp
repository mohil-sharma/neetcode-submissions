class Solution {
public:
    int minOperations(string s) {
        int count=0;
        int temp=0;
        if(s[0]=='0'){
            for(int i=0;i<s.length();i++){
                if(i%2==0 && s[i]=='0'){
                    //sahi hai
                }
                else if(i%2!=0 && s[i]=='1'){
                    //toh bhi sahi hai 
                }
                else{
                    count++;
                }
            }
            for(int i=0;i<s.length();i++){
                if(i%2==0 && s[i]=='1'){
                    //sahi hai
                }
                else if(i%2!=0 && s[i]=='0'){
                    //toh bhi sahi hai 
                }
                else{
                    temp++;
                }
            }
            return min(temp,count);
        }
        else if(s[0]=='1'){
            for(int i=0;i<s.length();i++){
                if(i%2==0 && s[i]=='1'){
                    //sahi hai
                }
                else if(i%2!=0 && s[i]=='0'){
                    //toh bhi sahi hai 
                }
                else{
                    count++;
                }
            }
            for(int i=0;i<s.length();i++){
                if(i%2==0 && s[i]=='0'){
                    //sahi hai
                }
                else if(i%2!=0 && s[i]=='1'){
                    //toh bhi sahi hai 
                }
                else{
                    temp++;
                }
            }
            return min(temp,count);
        }

        return min(temp,count);
    }
};