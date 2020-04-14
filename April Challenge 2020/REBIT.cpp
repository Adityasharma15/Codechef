#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct node
{
    ll a;
    ll b;
    ll c;
    ll d;

    node(ll x, ll y, ll z, ll q)
    {
      x =a ;
      y = b;
      z = c;
      q = d;
    }
};

int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

ll t;
cin >> t;

  // unordered_map<char, ll > andd;
  // unordered_map<char, ll > orr;
  // unordered_map<char, ll > xor;
  // unordered_map<char,  ll > hash;
  //
  // hash['0'] = 1;
  // hash['1'] = 1;
  // hash['a'] = 1;
  // hash['A'] = 1;
  //
  // andd['0'] = 9;
  // andd['1'] = 1;
  // andd['a'] = 3;
  // andd['A'] = 3;
  //
  // orr['0'] = 1;
  // orr['1'] = 9;
  // orr['a'] = 4;
  // orr['A'] = 2;
  //
  // xor['0'] = 4;
  // xor['1'] = 4;
  // xor['a'] = 4;
  // xor['A'] = 4;


while(t--)
{

  unordered_map<char, ll> ans;
  ans['0'] = 1;
  ans['1'] = 1;
  ans['a'] = 1;
  ans['A'] = 1;

  string s;
  cin >> s;

  bool expr = false;
  bool caught = false;

  for(ll i = 0;i<s.length(); i++)
  {

    if(s[i]== '#' && !expr)
    {
          expr = true;
          continue;
    }

    if(expr)
    {
        if(s[i]== '^')
        {

          ans['0'] = 4*ans['0'];
          ans['1'] = 4*ans['1'];
          ans['a'] = 4*ans['a'];
          ans['A'] = 4*ans['A'];
        }

        if(s[i]=='&')
        {
          ans['0'] = 9*ans['0'];
          ans['1'] = 1*ans['1'];
          ans['a'] = 3*ans['a'];
          ans['A'] = 3*ans['A'];

        }

        if(s[i]== '|')
        {
          ans['0'] = 1*ans['0'];
          ans['1'] = 9*ans['1'];
          ans['a'] = 4*ans['a'];
          ans['A'] = 2*ans['A'];
        }
    }

    if(s[i]== '#' && expr)
        expr = false;


    if(s[i] == ')')
      expr = true;


  }

  ll total = 0;

  total = ans['0'] + ans['1'] + ans['a'] + ans['A'];

  cout << ans['0'] << ans['1'] << ans['a'] << ans['A'];

  cout << "\n" << "total " << total <<"\n";
}

return 0;

}
