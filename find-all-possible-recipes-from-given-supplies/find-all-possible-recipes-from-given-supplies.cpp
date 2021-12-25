class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        vector<int> indeg;
        for(auto x:ingredients)
            indeg.push_back(x.size());
        stack<string> st;
        for(auto x:supplies)
            st.push(x);
        vector<string> res;
        while(!st.empty())
        {
            string x=st.top();
            st.pop();
            for(int i=0;i<ingredients.size();i++)
            {
                if(indeg[i]!=0)
                {
                    if(find(ingredients[i].begin(), ingredients[i].end(), x) != ingredients[i].end())
                        indeg[i]--;
                    if(indeg[i]==0)
                    {
                        st.push(recipes[i]);
                        res.push_back(recipes[i]);
                    }
                }
            }
        }
        return res;
    }
};