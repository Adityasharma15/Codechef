#include<bits/stdc++.h>
#define ll long long
using namespace std;

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

    ll temp1 , temp2, x;

    for(ll i = 1; i<=n; i++)
    {
        x = 2*i - 1;

        x%=1000000007;


        pi = (ll)(pow(elements, x) + 0.5);
        pi%=1000000007;

        ans+= pi;
        elements*=pi;
        // cout << elements << " "<< pi << "\n";

    }



    ans%=1000000007;

    cout << ans <<"\n";

	}

  return 0;

}
