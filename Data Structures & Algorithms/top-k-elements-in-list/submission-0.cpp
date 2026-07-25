class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp={};
        typedef pair<int,int> p;
        int n=nums.size();
        int value,freq;
        vector<int> result={};

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        priority_queue<p,vector<p>,less<p>> pq;//min-heap

        for(auto &i:mp){
            value=i.first;
            freq=i.second;

            pq.push({freq,value});
        }

        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();

            if(result.size()>k){ 
                result.pop_back();
            }
        }
        return result;
    }
};
