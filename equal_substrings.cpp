#include<bits/stdc++.h>
#define ll long long

using namespace std;

int  main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        string s;
        cin >> s;

        ll arr[27][n];

        ll lastentry[27];

        memset(lastentry, 0 , sizeof(lastentry));

        memset(arr, -1 , sizeof(arr));

        ll j = 0;

        for(ll i = 0; i < n; i++)
        {   
        //     j = 0;

        //     while(arr[s[i] - 'a'][j]!=(-1))
        //     {   
        //         j++;
        //     }

        //     arr[s[i] - 'a'][j] = i;


        //     if(arr[s[i] - 'a'][0]==(-1))
            arr[s[i] - 'a'][lastentry[s[i] - 'a']] = i;
            lastentry[s[i] - 'a']++;

        //     else if(arr[s[i] - 'a'][1]==(-1))
        //    {
        //        arr[s[i] - 'a'][1] = i;
        //    }

        }

        //PRINTING ARRAY
        // for(ll i = 0 ; i<n; i++)
        // {
        //     for(ll j = 0; j<n; j++)
        //     {
        //         cout << arr[s[i]-'a'][j] << " "; 
        //     }
        //     cout << endl;
        // }

        ll minn = n, temp;

        for(ll i = 0; i < n; i++)
        {
            j = 1;

            while(arr[s[i] - 'a'][j]!=(-1)  && j<n)
            {
                temp = arr[s[i] - 'a'][j] - arr[s[i] - 'a'][j-1];
                minn = min(minn, temp); 
                j++;
            }

            // if(arr[s[i] - 'a'][1]!=(-1))
            // {
            //     temp = arr[s[i] - 'a'][1] - arr[s[i] - 'a'][0];
            //     minn = min(minn, temp);    
            // }
        }    

                cout << (n - minn) << "\n";

    }
}