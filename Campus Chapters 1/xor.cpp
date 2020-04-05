#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
#define SIZE_INT sizeof(ll) * 8

ll rightShift(ll b, ll i, ll maxsize)
{

  
  return ( b >> i | b << ( (maxsize) - i));
}

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;

	while(t--)
  {

    ll a, b;
    cin >> a >> b;

    ll sizea, sizeb;

    sizea = (ll)log2(a) + 1;
    sizeb = (ll)log2(b)+1;

    ll maxsize = max(sizea, sizeb);

    ll maxi = 0, temp1;
    ll count = 0, temp2;

    for(ll i = 0; i<maxsize; i++)
    {
        temp1 = rightShift(b, i, maxsize);

        cout << temp1 << "\n";

        temp2 = temp1^a;

        if(temp2 > maxi)
        {
          maxi = temp2;
          count = i;
        }

    }

    cout << count << " " << maxi << "\n";

	}

}
