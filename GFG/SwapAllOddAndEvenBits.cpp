unsigned int swapBits(unsigned int n)
{
    unsigned int sum=0;
    int r1,r2,tmp,i=0;
	while(n!=0)
	{   
	    r1=n%2;
	    n=n>>1;
	    r2=n%2;
	    tmp=r1*2+r2;
	    sum=(int(pow(2,i))*tmp)+sum;
	    i=i+2;
	    n=n>>1;
	}
	return sum;
}