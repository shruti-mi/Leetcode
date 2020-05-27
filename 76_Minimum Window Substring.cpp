//------------------------------------------- User: shruti_1998

class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length(), m = t.length();
        map<char, int> mp1, mp2;
        
        int cnt=0, l = 0, len = INT_MAX;
        string ans="";
        
        for(int i = 0 ; i < m; ++ i ) {
            mp1[t[i]]++;
        }
        
        for(int i = 0 ; i < n ; ++ i ) {
            mp2[s[i]]++;
            
            if(mp2[s[i]]<=mp1[s[i]])
                cnt++;
            
            while(l<=i && mp2[s[l]]>mp1[s[l]]) {
                mp2[s[l]]--;
                l++;
            }
            
            if(cnt == m) {
                if(len>(i-l+1)) {
                    len = i-l+1;
                    ans = s.substr(l, len);
                }
            }
            
        }
        
        return ans;
    }
};