class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        if(n==0) {
            return 0;
        }
        vector<int> g(n,0),s(n,0);
        for(int i=0;i<n-1;i++) {
            int c = 0;
            for(int j=i+1;j<n;j++) {
                if(rating[j]>rating[i]) {
                    c++;
                }
            }
            g[i] = c;
            c=0;
            for(int j=i+1;j<n;j++) {
                if(rating[j]<rating[i]) {
                    c++;
                }
            }
            s[i] = c;
        }
        int ans = 0;
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(rating[j]>rating[i]) {
                    ans+=g[j];
                } else if(rating[j]<rating[i]) {
                    ans+=s[j];
                }
            }
        }
        return ans;
    }
};