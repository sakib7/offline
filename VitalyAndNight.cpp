#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans=0,x,y,n,i;
    cin >> a >> b;
    n = a*b;
    for(i=0; i< n; i++)
    {
        cin >> x >> y;
        if(x==1 || y==1)
            ans++;
    }
    cout << ans <<endl;
    return 0;
}
