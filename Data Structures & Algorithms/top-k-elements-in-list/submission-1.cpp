class Solution {
public:

    static bool comp(const pair<int , int>& a , const pair<int , int>&b)
    {
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int , int >freq;
        vector<pair<int , int>>sorted_freq;

        for(auto i : nums)
        {
            freq[i]++;
        }
    
        for(auto i : freq)
        {
            sorted_freq.push_back({i.first , i.second});
        }
        sort(sorted_freq.begin() , sorted_freq.end() , comp );

        vector<int>ans;
        for(int i =0 ; i<k;i++)
        {
            ans.push_back(sorted_freq[i].first );

        }

        return ans;
    }
};
