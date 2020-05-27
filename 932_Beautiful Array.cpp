//------------------------------------------- User: shruti_1998

class Solution {
public:
    
    vector<int> find(vector<int> vec) {
        
        int n = vec.size();
        
        if(n>2){ 
            vector<int> lf((n+1)/2), rh(n/2);
            
            for(int i = 0, k = 0, j = 0 ; i < n ; ++ i ) {
                if(i&1)
                    rh[k++] = vec[i];
                else
                    lf[j++] = vec[i];
            }
            
            lf = find(lf);
            rh = find(rh);
            
            for(int i = 0, k = 0 ; i < n ; ++ i ) {
                
                if(i<lf.size())
                    vec[i] = lf[i];
                else 
                    vec[i] = rh[k++];
            }
        }
        
        return vec;
    }
    
    vector<int> beautifulArray(int N) {
        vector<int> vec(N);
        
        for(int i = 0 ; i < N ; ++ i ) {
            vec[i] = i+1;
        }
        
        return find(vec);
        
    }
};