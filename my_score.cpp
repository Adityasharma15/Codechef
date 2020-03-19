#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll arr[9];

        memset(arr, 0, sizeof(arr));

        ll n;
        cin >> n;

        while(n--)
        {
            ll p, s;

            cin >> p >> s;

            if(p<=8)
            {
                if(arr[p] < s)
                    arr[p] = s;
            }

        }

        ll total = 0;

        for(ll i = 0; i<9; i++)
            total+=arr[i];

            cout << total << "\n";

    }


}

