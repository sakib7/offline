#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,a;
    string series;
    cin >> a;

    while(series.length()<1001)
        series += to_string(i++);

    cout << series[a-1] << endl;
    return 0;
}
