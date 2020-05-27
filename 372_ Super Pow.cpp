//------------------------------------------- User: shruti_1998

class Solution {
    
    int find(long long int a, long long int b) {
        long long int result=1;
        if(a==0)
            return 0;
        if(b==0)
            return 1;
        while(b) {
            if(b&1)
                result*=a;
            b/=2;
            a*=a;
            result%=1337;
            a%=1337;
        }
        return result;
    }
    
public:
    int superPow(int a, vector<int>& b) {
        int n = b.size();
        long long int ans = 1;
        
        for(int i = n-1; i >=0; -- i ) {
            ans = (ans*find(a, b[i]))%1337;
            a = find(a, 10);
        }
        
        return ans;
    }
};