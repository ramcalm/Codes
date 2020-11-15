int sod(int n)
{
    if(n<10)
    {
        return n;
    }
    return n%10+sod(n/10);
}
int digitalRoot(int n)
{
    if(n<10)
    {
        return n;
    }
    return digitalRoot(sod(n));
}