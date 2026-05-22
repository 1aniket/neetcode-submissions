class Solution {
  private:
  vector<int>dp;
  int findAns(vector<int>&nums , int index)
  {
    if(index >= nums.size())
    {
      return 0;
    }
    if(dp[index]!=-1)return dp[index];
    int maxi = INT_MIN;
    for(int i = index ; i < nums.size(); i++)
    {
      int current = nums[i]+ findAns(nums , i+2);
      maxi = max(maxi , current);

    }
    
    return dp[index]=  maxi;

  }
public:
    int rob(vector<int>& nums) {
        

      int ans = 0;
      dp.assign(nums.size()+1 , -1);
     ans = findAns(nums , 0);
      

      


      return ans;

    }
};
