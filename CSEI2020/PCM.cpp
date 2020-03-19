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
    string s;
		cin >> s;

		bool p = false, c = false, m = false;

		for(ll i = 0; i<s.length(); i++)
				{
						if(s[i] == 'P')
							p = true;

						else if(s[i] == 'C')
							c = true;

						else if(s[i] == 'M')
							m = true;
				}

				if(p && c && m)
					cout << "YES" << "\n";

				else
					cout << "NO" << "\n";

	}

}
