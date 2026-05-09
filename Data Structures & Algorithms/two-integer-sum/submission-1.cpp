class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int , int>present ;

        for(int i =0;i<nums.size();i++)
        {
            int rem = target - nums[i];

            if(present.count(rem))return{present[rem] , i};

            present[nums[i]]= i;
        }

        return {};

    }
};
