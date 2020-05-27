//------------------------------------------- User: shruti_1998

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1, j = n-1;
        
        int k = n+m-1, p = n;
        
        
        while(i>=0 && j>=0 ) {
            if(nums1[i]>nums2[j]){
                nums1[k] = nums1[i];
                i--;
                p--;
            }
            else {
                nums1[k] = nums2[j];
                j--;
            }
           k--;
        }
        
       
        if(i<0) {
            while(j>=0) {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }
        
    }
};