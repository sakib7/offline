#include <bits/stdc++.h>
//#include<stdio.h>
using namespace std;
long long labs(long long a, long long b)
{
    if(a>b)
        return a-b;
    else if(b>a)
        return b-a;
    else
        return 0;
}

int main()
{

        long long a,b,c,d,i=1,out=0,temp;

        cin >> a >> b ;

        while(a>0)
        {
            c = a%10;
            d = b%10;
            a /= 10;
            b /= 10;
            temp = labs(c,d)*i;
            out += temp;
            i *= 10;

        }

        cout<< out << endl;

        return 0;
}
