int maxConsecutiveOnes(int x)
{
    int c=0;
    while(x!=0)
    {
        x=x&x<<1;
        c++;
    }
    return c;
    
    
}