//------------------------------------------- User: shruti_1998

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int n = A.size();
    
        int i = 0, j=n-1, k = n-1; 
        
        vector<int> ans(n,0);
        
        while(i<=j) {
            if(abs(A[i]) > abs(A[j])) {
                ans[k] = pow(A[i], 2);
                i++;
            }
            else {
                ans[k] = pow(A[j], 2);
                j--;
            }
            k--;
        }
        
        return ans;
    }
};