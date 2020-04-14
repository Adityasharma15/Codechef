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

      ll temp = 1;

      //what if n == 1;
      if(n!=1)
      cout << (n/2) << "\n";

      else
        cout << "1" << "\n";

      ll count = 0, temp1, temp2;

      count = 1;

      temp1 = 2;
      temp2 = 3;

      if(temp1<=n)
      count++;

      if(temp2<=n)
      count++;

      if(count == 1)
        cout << count << " 1 " << "\n" ;


      if(count == 3)
       cout << count << " 1 "<< temp1 << " " << temp2 << "\n" ;

      if(count == 2)
        cout << count << " 1 " << temp1 << " " << "\n";


      if(n>3)
      {

      for(ll i = 2; i<=(n/2) ; i++)
      {
          count = 0;

          temp1 = 2*i;
          temp2 = temp1 + 1;

          if(temp1<=n)
          count++;

          if(temp2<=n)
          count++;


          if(count >1)
           cout << count << " " << temp1 << " " << temp2 << "\n" ;

          else
            cout << count << " " << temp1 << " " << "\n";
      }
    }

	}

  return 0;

}
