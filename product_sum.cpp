#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll ncr(ll n, ll r)
{
    ll c[n+1][r+1];

    memset(c, 0, sizeof(c));

    for(ll i = 0; i <= n; i++)
    {
        for(ll j = 0; j<= min(i, r); j++)
        {   
            if(j==0 || i==j)
                c[i][j] = 1;

            else
                c[i][j] = c[i-1][j-1] + c[i-1][j];

        }

    }

    return c[n][r];

}


int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll zero = 0, two = 0;

        ll temp;

        for(ll i = 0 ; i<n; i++)
        {
            cin >> temp;

            if(temp==0)
                zero++;

            else if(temp==2)
                two++;
        }

        ll pairs = 0;

        pairs += ncr(zero, 2);

        pairs += ncr(two,2); 

        cout << pairs << "\n";

    }

}