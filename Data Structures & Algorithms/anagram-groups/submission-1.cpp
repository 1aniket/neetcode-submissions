class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        

        unordered_map<string , vector<string>>ans;


        for(auto i : strs)
        {
            string sorted = i;
            sort(sorted.begin() , sorted.end());

            ans[sorted].push_back(i);

        }

        vector<vector<string>>rans;

        for(auto i : ans)
        {
            rans.push_back(i.second);
        }

        return rans;
    }
};
