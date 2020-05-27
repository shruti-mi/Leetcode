//------------------------------------------- User: shruti_1998

class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int n = A.size(), m = B.size(), ans=0;
        
        vector<vector<int>> dp(n, vector<int>(m,0));
        
        for(int i = 0 ; i < n ; ++ i ) {
            for(int j = 0 ; j < m ; ++ j ) {
                if(A[i] == B[j]) {
                    dp[i][j] = 1;
                    if(i-1>=0 && j-1>=0)
                        dp[i][j]+=dp[i-1][j-1];
                }
                
                if(dp[i][j]>ans)
                    ans = dp[i][j];
            }
        }
        
        return ans;
    }
};