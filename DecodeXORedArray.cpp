class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> decoded;
        decoded.push_back(first);
        for(int i=1;i<encoded.size()+1;i++)
            decoded.push_back(decoded[i-1]^encoded[i-1]);
        return decoded;
    }
};