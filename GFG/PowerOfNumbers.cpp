long long power(int N,int R)
{
    if(R==0)
        return 1;
    long long M=1000000007;
    return ((N%M)*(power(N,R-1)%M)%M);
}
