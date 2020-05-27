//------------------------------------------- User: shruti_1998

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int n = nums.size(), ans=INT_MAX;
        
        if(n==0)
            return 0;
        
        int sum = 0, l = 0;
        
        for(int i = 0 ; i < n ; ++ i ) {
            sum+=nums[i];
            while(sum>=s) {
                ans = min(ans, i-l+1);
                sum-=nums[l++];
            }
        }
        
        if(ans==INT_MAX)
            ans=0;
        return ans;
    }
};