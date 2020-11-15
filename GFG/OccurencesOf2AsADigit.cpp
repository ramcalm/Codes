long long int count2sinRangeAtDigit(long long int number, long long int d)
{
    long long int no=0;
    while(number!=0)
    {
        if((number%10)==2)
            no++;
        number/=10;
    }
    return no;
}

/* Counts the number of '2' digits between 0 and n */
long long int numberOf2sinRange(long long int number)
{
// Your code goes here
    int no=0;
    for(long long int i=0;i<=number;i++)
    {
        no=no+count2sinRangeAtDigit(i,0);
    }
    return no;
}