class Solution {
public:
    bool isAnagram(string s, string t) {
        

        unordered_map<char , int>freq;

        for(auto i : s)
        {
            freq[i]++;
        }


        for(auto i : t)
        {
            if(freq[i]==0 )return false;

            freq[i]--;

            if(freq[i]==0)freq.erase(i); 
        }

        if(freq.empty())return true;

        return false;
    }
};
