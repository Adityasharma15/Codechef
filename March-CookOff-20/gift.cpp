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

    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll a = 0, b = 0;

    if(s[0] == 'L')
      a--;

    else if(s[0] == 'R')
      a++;

    else if(s[0] == 'U')
      b++;

    else if(s[0] == 'D')
      b--;


    for(ll i = 1; i<s.length(); i++)
    {
      if(s[i] == 'R' || s[i] == 'L')
      {
        if(s[i-1]!= 'R' && s[i-1]!= 'L')
        {
          if(s[i] == 'L')
          a--;

        else if(s[i] == 'R')
          a++;

        else if(s[i] == 'U')
          b++;

        else if(s[i] == 'D')
          b--;
        }
      }


      if(s[i] == 'U' || s[i] == 'D')
      {
        if(s[i-1]!= 'U' && s[i-1]!= 'D')
        {
          if(s[i] == 'L')
          a--;

        else if(s[i] == 'R')
          a++;

        else if(s[i] == 'U')
          b++;

        else if(s[i] == 'D')
          b--;
        }
      }






    }

    cout << a << " " << b << "\n";

	}

}
