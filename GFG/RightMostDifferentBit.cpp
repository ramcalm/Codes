int posOfRightMostDiffBit(int m, int n)
{
    int x=m^n;
    return log2(x & -x) + 1;
}