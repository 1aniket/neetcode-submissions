class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int product = 1;

        unordered_set<int>zeros;


        for(int i = 0 ; i < nums.size();i++)
        {
            if(nums[i]==0)zeros.insert(i);
            else product*=nums[i];
        }


        vector<int>ans ;

        for(auto i : nums)
        {
            if(i==0 && zeros.size()>1)
            {
                ans.push_back(0);
            }else if(i==0 && zeros.size()==1)
            {
                ans.push_back(product);
            }else if(i!=0 && !zeros.empty())
            {
                ans.push_back(0);
            }else ans.push_back(product/i);
        }

        return ans;

    }
};
