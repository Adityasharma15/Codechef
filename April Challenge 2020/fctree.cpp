#include<bits/stdc++.h>
#define ll long long
using namespace std;


class Graph
{
  int V:
  list<int> adjlist;

  Graph(int v)
  {
    V = v;
    adjlist = new list<int>;
  }

  void add(int a, int b)
  {
    adjlist[a].push_back(b);
  }

  int temp;

  void DFS(int start, bool * visited)
  {
    visited[start] = true;
    cout << start << " ";

    for(auto i: adjlist[start])
    {
      if(!visited[i])
        DFS(i);
    }

  }
};


















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

    for



	}

  return 0;

}
