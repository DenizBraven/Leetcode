class Solution {
public:
    unordered_map<int, int> dp;
    
    int longestSubsequence(vector<int>& arr, int difference) {
        int ans = 0;
        
        for (int x : arr) {
            if (dp.count(x - difference))
                dp[x] = dp[x - difference] + 1;
            else
                dp[x] = 1;
            
            ans = max(ans, dp[x]);
        }
        return ans;
    }
};
