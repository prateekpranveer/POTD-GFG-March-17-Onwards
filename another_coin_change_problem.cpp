  bool make(int i, int k, int t, vector<int> &coins, vector<vector<vector<int>>> &dp) {
      if (t==0 && k==0) return true;
      if (k==0 && t!=0) return false;
      if (t<=0 && k!=0) return false;
      if (i<=0) return false;
      if (dp[i][k][t]!=-1) return dp[i][k][t];
      bool a = make(i-1, k, t, coins, dp);
      bool b = make(i, k-1, t-coins[i-1], coins, dp);
      return dp[i][k][t] = a|b;
  }
    bool makeChanges(int N, int K, int target, vector<int> &coins) {
        vector<vector<vector<int>>>dp(N+1, vector<vector<int>> (K+1, vector<int>(target+1, -1)));
        return make(N, K, target, coins, dp);
    }