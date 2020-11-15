class Solution {
public:
    int numJewelsInStones(string j, string s) {
        vector<char> ch;
        int sum=0,i;
        for(i=0;i<j.length();i++)
        {
            ch.push_back(j[i]);
        }
        for(i=0;i<s.length();i++)
        {
            if(count(ch.begin(), ch.end(), s[i]))
            {
                sum++;
            }
        }
        return sum;
        
    }
};