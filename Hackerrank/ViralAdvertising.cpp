#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
    int recipients=5,liked=0;
    for(int i=1;i<=n;i++)
    {
        liked = liked + floor(recipients/2);
        recipients = floor(recipients/2)*3;
        
        cout<<recipients<<"\t";
        cout<<liked<<"\n";
    }
    return liked;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
