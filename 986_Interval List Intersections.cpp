//------------------------------------------- User: shruti_1998

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> ans;
        
        int n = A.size(), m = B.size();
        
        for(int i = 0 ; i < n ; ++ i ) {
            for(int j = 0 ; j < m ; ++ j ) {
                int x1 = A[i][0], y1 = A[i][1], x2 = B[j][0], y2 = B[j][1];
                
                if(x1>y2 || x2>y1)
                    continue;
                else {
                    vector<int> local;
                    local.push_back(max(x1, x2));
                    local.push_back(min(y1, y2));
                    ans.push_back(local);
                }
                
            }
        }
        return ans;
    }
};