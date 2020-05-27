//------------------------------------------- User: shruti_1998

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = index.size();
        
        for(int i = 1 ; i < n ; ++ i ) {
            for(int j = 0 ; j < i ; ++ j ) {
                if(index[j]>=index[i])
                    index[j]++;
            }
        }
        
        vector<int> ans(n, 0);
        
        for(int i = 0; i < n ; ++ i ) {
            ans[index[i]] = nums[i];
        }
        
        return ans;
    }
};