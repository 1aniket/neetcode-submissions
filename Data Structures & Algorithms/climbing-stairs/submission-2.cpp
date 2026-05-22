class Solution {
  private : 
  vector<int>dp;
  int find(int n)
  {
    if(n==0)return 1;
    if(n<0)return 0;

    if(dp[n]!=0)return dp[n];

    int singleStep = find(n-1);
    int doubleStep = find(n-2);
    return dp[n]=singleStep + doubleStep;
  }
public:
    int climbStairs(int n) {
        

      int ans = 0 ;
      dp.assign(n+1 , 0);
      ans = find(n);
      return ans ;
    }
};
