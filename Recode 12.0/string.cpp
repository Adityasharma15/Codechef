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

      bool flag = true;

      set<char> sett;

      for(ll i = 0; i<s.length() && flag; i++)
      {
        sett.insert(s[i]);

        if(i%2==0)
        {
          if(s[i]!=s[0])
            flag = false;
        }

        else
        {
          if(s[i]!=s[1])
            flag = false;
        }

      }

    if(sett.size()==1)
    {
      cout << "YES\n";

    }

    else
    {
      if(flag && (s.length()%2)==0)
        cout << "YES\n";

      else
        cout << "NO\n";
      }
	}

  return 0;

}
