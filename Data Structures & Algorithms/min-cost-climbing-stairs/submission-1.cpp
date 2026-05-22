class Solution {


  private:
  unordered_map<int , int>dp;
  int find(vector<int>& cost, int index)
  {
    if(index>=cost.size())
    {
      return 0; 
      
    }



    if(dp.count(index))return dp[index];
    
    int singleStep =cost[index] + find(cost  , index+1);
    int doubleStep = cost[index] + find(cost  , index+2);

    return dp[index]  = min( singleStep , doubleStep );
  }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int min_cost = INT_MAX;

     
        int startAt0 = find(cost  , 0);
        int startAt1 = find(cost  , 1);

        min_cost = min(startAt0 , startAt1);


        return min_cost;
    }
};
