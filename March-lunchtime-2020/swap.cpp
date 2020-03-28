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
    ll a;
        ll b;

        cin >> a >> b;

        ll ta = a, tb = b;

        ll a1, a2, b1, b2;


        a2 = ta%10;
        ta/=10;
        a1 = ta;

        b2 = tb%10;
        tb/=10;
        b1 = tb;

    if((a2 > b1) && b1!=0)
    {
        if((b2 > a1) && a1!=0)
        {
            ll t1 = a2 - b1;
            ll t2 = b2 - a1;

            if(t1>t2)
            {
                a = a1*10 + b1;

                b = a2*10 + b2;
            }

            else
            {

              a = b2*10 + a2;
              b = b1*10 + a1;
            }
        }

        else if( (a2 > b1) && b1!=0)
        {
          a = a1*10 + b1;
          b = a2*10 + b2;
        }

    }

    else if( (b2 > a1) && a1!=0)
    {
      a = b2*10 + a2;
      b = b1*10 + a1;
    }
      //
      // if(a/10==0)
      //   a*=10;
      //
      // if(b/10==0)
      // b*=10;

      cout << (a + b) << "\n";

	}

}
