bool areRotations(string s1,string s2)
{
    int m,n,i;
    n=s1.size();
    m=s2.size();
    if(m!=n)
        return false;
    for(i=0;i<m;i++)
    {
        string r = s1.substr(i,n-i)+s1.substr(0,i);
        if(r.compare(s2)==0)
            return true;
    }
    return false;
}