class Solution {
public:
    bool isRobotBounded(string instructions) {
        int lastx = 0, lasty= 0, newx=0, newy=0;
        vector<int> dirx = {0, 1, 0, -1};
        vector<int> diry = {1, 0, -1, 0};
        int dir = 0;
        for(int i=0; i<instructions.length(); i++)
        {
            if(instructions[i]=='G')
            {
                newx = lastx + dirx[dir];
                newy = lasty + diry[dir];
            }
            else if(instructions[i]=='L')
                dir = (dir + 3) %4;
            else
                dir = (dir+1)%4;
            lastx = newx; lasty = newy;
        }
        if((newx==0 && newy==0)||(dir!=0))
            return true;
        return false;
    }
};