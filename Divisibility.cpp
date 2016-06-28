#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,a,b,diva,divb,moda,modb;
    cin >> k >> a >> b;
    diva = a/k;
    divb = b/k;
    moda = a%k;
    modb = b%k;

    if((a>0&&b>0)||(a<0&&b<0))
    {
        if(moda==0 && modb==0)
            cout << divb-diva+1;
        else if(moda!=0 && modb!=0)
            cout << divb-diva;
        else if(a>0)
        {
            if(modb==0)
                cout << divb-diva;
            else
                cout << divb-diva+1;
        }
        else if(a<0)
        {
            if(moda==0)
                cout << divb-diva;
            else
                cout << divb-diva+1;
        }
    }
    else
        cout << divb-diva+1;


    return 0;
}
