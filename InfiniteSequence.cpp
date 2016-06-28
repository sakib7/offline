#include <bits/stdc++.h>
using namespace std;


int main()
{

        //FILE *f=freopen("output.txt","w",stdout);
        //FILE *in=freopen("input.txt","r",stdin);

        long long a,b,c,d,i=1,out=0,temp;
        cin >> a >> b >>c;
        if(c==0)
        {
            if(a==b)
                cout << "YES" <<endl;
            else
                cout << "NO" << endl;
        }
        else if(c>0)
        {
            if(b>=a)
            {
                if((b-a)%c==0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if(b<=a)
            {
                if((b-a)%c==0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }



        //fclose(in);
        //fclose(f);

        return 0;

}
