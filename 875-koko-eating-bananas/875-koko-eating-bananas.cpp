class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        int lo = 1, hi = piles[0];
        for(int i:piles)
        {
            hi=max(hi,i);
        }
        while (lo < hi) {
            int mi = lo + (hi - lo) / 2;
            if (!possible(piles, H, mi))
                lo = mi + 1;
            else
                hi = mi;
        }

        return hi;
    }
    bool possible(vector<int>& piles, int H, int K) {
        int time = 0;
        for(int i:piles)
        {
            int x=i/K;
            int y=i%K;
            if(y)
                time++;
            time+=x;
        }
        return time <= H;
    }
};