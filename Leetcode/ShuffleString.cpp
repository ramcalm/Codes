
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string fin(1,'x');
        for(int i=1;i<s.length();i++)
            fin=fin+'x';
        for(int i=0;i<indices.size();i++)
        {
            fin[indices[i]]=s[i];
        }
        return fin;
    }
};