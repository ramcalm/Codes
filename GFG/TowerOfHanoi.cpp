long long toh(int n, int from, int to, int via)
{
if (n == 0)
return 0;
long long x = toh(n - 1, from, via, to);
cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
long long y = toh(n - 1, via, to, from);
return x + 1 + y;
}