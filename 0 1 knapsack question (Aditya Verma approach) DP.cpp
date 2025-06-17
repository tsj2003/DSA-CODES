class Solution
{
    public:
   int knapsack01(vector<int>& wt, vector<int>& val, int n, int W) {

    vector<vector<int>> dp(n+1, vector<int>(W+1, -1)); 

    if(n ==0 || W == 0){
        return 0;
    }

    if (dp[n][W] != -1){
    return dp[n][W];
    }

    if(wt[n-1] <= W){


        return dp[n][W] = max(val[n-1] + knapsack01(wt,val,n-1,W - wt[n-1]), knapsack01(wt,val,n-1,W ));


    }
    else {
        return dp[n][W] = knapsack01(wt,val,n-1,W );
    }
   
}

};
