#include <bits/stdc++.h>
#include <cmath>
using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    if(n%2!=0)
        return(min(ceil((p-1.0)/2),floor((n-p)/2.0)));
    else
        return(min(ceil((p-1.0)/2),ceil((n-p)/2.0)));
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
