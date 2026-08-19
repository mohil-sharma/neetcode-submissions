class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        int x;
        int y;

        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }

        while(pq.size()>1){
            x=pq.top();
            pq.pop();
            y=pq.top();
            pq.pop();
            if(x==y){
                pq.push(0);
            }
            else{
                pq.push(abs(x-y));
            }
        }
        return pq.top();
    }
};
