//------------------------------------------- User: shruti_1998

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        int n = inter.size();
        
        vector<vector<int>> ans;
        
        sort(inter.begin(), inter.end(), [](vector<int> a, vector<int> b) {
           if(a[0]==b[0])
               return a[1]<b[1];
            else
                return a[0]<b[0];
        });
        
        if(n==0)
            return ans;
        ans.push_back(inter[0]);
        int i = 0;
        
        for(int j = 1; j < n ; ++ j ) {
            if(ans[i][1] >= inter[j][0]) {
                ans[i][1] = max(ans[i][1], inter[j][1]);
            }
            else {
                ans.push_back(inter[j]);
                i++;
            }
        }
        return ans;
    }
};