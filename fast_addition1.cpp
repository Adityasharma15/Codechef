#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll fast_addition(string a, string b)
{

    ll c = 0;
    const unsigned ll m = max(a.length(), b.length());

    bool f = false;

    for(unsigned ll i = 0; i< b.length(); i++)
    {
        if(b[i]!='0')
            f=true;
            break;
    }


    while(f)
    {
        auto un = bitset<700>(a) ^ bitset<700>(b);
        auto vn = bitset<700>(a) & bitset<700>(b);

        vn = vn<<1;
        c++;
        a = un.to_string();
        b = vn.to_string();

        ll result = v.c();

        if(result == 0)
            f = false;

    }

    return c;
}


int main()
{
    ll t;
    cin >> t;

	while(t--)
	{
    string A, B;

    cin >> A >> B;
    

	ll numa = binaryToDecimal(A);
	ll numb = binaryToDecimal(B);
    


    cout << fast_addition(A , B) << "\n";
    
	}

    return 0;
}
