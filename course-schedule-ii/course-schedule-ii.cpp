class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prereq) {
        vector<int> res;
        int n=prereq.size();
        vector<int> degree(numCourses,0);
        stack<int> st;
        for(int i=0;i<n;i++)
            degree[prereq[i][0]]++;
        for(int i=0;i<numCourses;i++)
        {
            if(degree[i]==0)
                st.push(i);
        }
        while(!st.empty())
        {
            int curr=st.top();
            res.push_back(curr);
            st.pop();
            for(int i=0;i<n;i++)
            {
                if(prereq[i][1]==curr)
                {
                    degree[prereq[i][0]]--;
                    if(degree[prereq[i][0]]==0)
                        st.push(prereq[i][0]);
                }
            }
        }
        if(res.size()==numCourses)
            return res;
        return {};
    }
};
/*
class Solution {
    public int[] findOrder(int numCourses, int[][] prerequisites) {
        int count=0;
        int inDegree[] =  new int[numCourses];
        int result[] =  new int[numCourses];

        Stack<Integer> st= new Stack();
        for(int i=0;i<prerequisites.length;i++)
             inDegree[prerequisites[i][0]]++;
         for(int i=0;i<numCourses;i++)
             if(inDegree[i]==0)
                 st.push(i);
         while(!st.isEmpty())
         {
             int current = st.pop();
             result[count++]=current;
             for(int i=0;i<prerequisites.length;i++)
             {
                 if(prerequisites[i][1]==current)
                 {
                     inDegree[prerequisites[i][0]]--;
                  if(inDegree[prerequisites[i][0]]==0)
                    st.push(prerequisites[i][0]);

                 }
            }



 }
        if(numCourses==count)
        return result;
    else
        return new int[0];

    }
}
*/