#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        ll len1 = s1.length();
        ll len2 = s2.length();

        ll flagb = 1;

        for(ll i = 0; i<len2; i++)
        {
            if(s2[i]=='1')
                flagb = 0;
        }

        string zero = "0";

        if(len1 > len2)
        {
            
        ll dif = len1 - len2;

        while (dif--)
            s2.insert(0,zero);
        }

        else if(len2 > len1)
        {
          ll dif = len2 - len1;

        while (dif--)
            s1.insert(0,zero);
        }
        
        ll maxx = max(len1, len2);

        ll count = 1, maxcount = 1;

        for(ll i = maxx - 1; i >= 0; i--)
        {
            count = 1;

            if(s1[i]=='1'  && s2[i] == '1')
            {
                ll flag = 0;


                while(i>=0 && flag == 0)
                {   

                count++;

                i--;

                if(s1[i]=='0' && s2[i]=='0')
                    flag = 1;
                }

                maxcount = max(count, maxcount);

            }

        }


        // if b==0 , then count = 0;
        if(flagb)
            cout << zero << "\n";

        else
            cout << maxcount << "\n";
            

    }



}