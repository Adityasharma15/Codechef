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

  stack< struct node * > stackk;

  struct node * temp;

  for(ll i = 0;i<s.length(); i++)
  {

    if(s[i] = '(')
        continue;

    if(s[i]== '^')
    {
      // temp = s.top();

      // temp->a = 4*(temp->a);
      // temp->b = 4*(temp->b);
      // temp->c = 4*(temp->c);
      // temp->d = 4*(temp->d);

    //   i++;
    //   s.push_back(temp);
    //   continue;
     }

    if(s[i]=='&')
    {
      // temp = s.top();
      //
      // temp->a = 9*(temp->a);
      // temp->b = 1*(temp->b);
      // temp->c = 3*(temp->c);
      // temp->d = 3*(temp->d);
      //
      // i++;
      // s.push_back(temp);
      // continue;

    }

    if(s[i]== '|')
    {
    //   temp = s.top();
    //
    // temp->a = 1*(temp->a);
    // temp->b = 9*(temp->b);
    // temp->c = 4*(temp->c);
    // temp->d = 2*(temp->d);
    //
    // i++;
    // s.push_back(temp);
    // continue;

    }

    if(s[i] == '#')
    {
      temp = new node(1, 1, 1, 1);
      stack.push(temp);
    }

  //   if(s[i]== '#' && !expr)
  //   {
  //         expr = true;
  //         continue;
  //   }
  //
  //   if(expr)
  //   {
  //
  //   }
  //
  //   if(s[i]== '#' && expr)
  //       expr = false;
  //
  //
  //   if(s[i] == ')')
  //     expr = true;
  //
  //
  // }
  //
  // ll total = 0;
  //
  // total = ans['0'] + ans['1'] + ans['a'] + ans['A'];
  //
  // cout << ans['0'] << ans['1'] << ans['a'] << ans['A'];
  //
  // cout << "\n" << "total " << total <<"\n";
}

return 0;

}
