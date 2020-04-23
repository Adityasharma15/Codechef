#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll p(ll a, ll b)
{
    ll value = 1; // Initialize valueult
    a%=1000000007;

    while (b > 0)
     {
        if (b & 1)
            {
              value = value * a;
              value = value%1000000007;
            }
        b = b >> 1; // b = y/2
        b%=1000000007;

        a = a * a; // Change x to x^2
        a%=1000000007;
    }

    value = value%1000000007;
    return value;
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

    ll n , elements;
    cin >> n >> elements;

    ll pi, ans = 0;

    ll x;

    for(ll i = 1; i<=n; i++)
    {
        x = (2*i - 1);
        x%=1000000007;

        pi = p(elements, x);
        pi = pi%1000000007;

        ans+= pi;
        ans = ans%1000000007;

        elements*=pi;
        elements%=1000000007;
        // cout << elements << " "<< pi << "\n";
    }

    ans = ans%1000000007;
    cout << ans <<"\n";
	}

  return 0;
}
