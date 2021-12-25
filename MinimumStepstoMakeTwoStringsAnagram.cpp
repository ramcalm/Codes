class Solution {
public:
    int minSteps(string s, string t) {
        
        map<char, int> data;
        int i,cnt=0;
        for(char ch='a';ch<='z';ch++)
            data[ch]=0;
        for(i=0;i<s.length();i++)
        {
            data[s[i]]++;
        }
        for(i=0;i<t.length();i++)
        {
            if(data[t[i]]!=0)
            {
                data[t[i]]--;
                cnt++;
            }
        }
        cout<<cnt;
        return s.length()-cnt;
    }
};