class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i=s.size()-1,j=t.size()-1;
        int s1=0,t1=0;
        while(i>=0 || j>=0)
        {
            while(i>=0)
            {
                if(s[i]=='#')
                {
                    s1++;
                    i--;
                }
                else if(s1>0)
                {
                    s1--;
                    i--;
                }
                else
                    break;
            }
            while(j>=0)
            {
                if(t[j]=='#')
                {
                    t1++;
                    j--;
                }
                else if(t1>0)
                {
                    t1--;
                    j--;
                }
                else
                    break;
            }
            if (i >= 0 && j >= 0 && s[i] != t[j])
                return false;
            if ((i >= 0) != (j >= 0))
                return false;
            i--; j--;
        }
        return true;
    }
};