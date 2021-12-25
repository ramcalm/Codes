class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res=INT_MIN;
        for(auto x:sentences)
        {
            int temp=0;
            for(auto i:x)
                if(i==' ')
                    temp++;
            res=max(res,temp+1);
        }
        return res;
    }
};