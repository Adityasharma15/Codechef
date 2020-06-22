#include<bits/stdc++.h>
#define ll long long
using namespace std;

void BFS(ll start, vector<ll> graph[], vector<bool> &visited, unordered_set<ll> &maxi , ll curr, vector<ll> &dsu)
{
  visited[start] = true;
  queue<ll> qu;
  qu.push(start);

  while(!qu.empty())
  {
    ll temp = qu.front();
    visited[temp] = true;
    qu.pop();

    for(auto i: graph[temp])
    {
      if(!visited[i] && maxi.count(i)>0)
      {
        qu.push(i);
        dsu[i] = curr;
        visited[i]=true;
      }
    }
  }
  return;
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
    ll n, m;
    cin >> n >> m;

    vector<ll> graph[n+1];
    vector<ll> A(n);
    vector<ll> B(n);

    for(ll i = 0; i<n; i++)
          cin >> A[i];

    ll maxx = 0;
    for(ll i = 0; i<n; i++)
    {
          cin >> B[i];

          ll temp = (A[i]/B[i]);

          if(temp>maxx)
            maxx = temp;
    }

    // vector<ll> graph[n+1];
    for(ll i = 0; i<m; i++)
    {
      ll a, b;
      cin >> a >> b;
      graph[a].push_back(b);
      graph[b].push_back(a);
    }

    unordered_set<ll> maxi;
    vector<ll> vmaxi;

    for(ll i = 0; i<n; i++)
    {
        ll temp = (A[i]/B[i]);

        if(temp==maxx)
        {
            maxi.insert((i+1));
            vmaxi.push_back((i+1));
        }
    }

    vector<ll> dsu((n+1), -1);
    vector<bool> visited((n+1), false);

    // for(auto i:vmaxi)
    // {
    //   cout << i << " ";
    // }
    // cout << "vmaxiend\n";


    // for(auto i:dsu)
    // {
    //   cout << i << " ";
    // }
    // cout << "Dsuend\n";



    // for(auto j:graph)
    // {
    //   for(auto i:j)
    //     cout << i << " ";
    // }
    // cout << "graphend\n";


    ll curr = 0;
    for(ll i = 0; i<vmaxi.size(); i++)
    {
      ll temp = vmaxi[i];
      if(dsu[temp]==(-1))
      {
        dsu[temp] = curr;
        BFS(vmaxi[i], graph, visited, maxi ,curr, dsu);
        curr++;
      }
    }

    // for(auto i:dsu)
    // {
    //   cout << i << " ";
    // }
    // cout << "Dsuend\n";

    vector<ll> dsucount((n+1),0);
    ll maxii = 0;
    ll tempmaxii;

    for(ll i = 0; i<dsu.size(); i++)
    {
      if(dsu[i]==(-1)) continue;

       dsucount[dsu[i]]++;
       if(dsucount[dsu[i]]>maxii)
       {
         maxii = dsucount[dsu[i]];
         tempmaxii = dsu[i];
       }
    }

    vector<ll> ans;
    for(ll i = 0; i<dsu.size(); i++)
    {
      if(dsu[i]==tempmaxii)
        ans.push_back(i);
    }

    cout << ans.size() << "\n";
    for(auto i:ans)
      cout << i << " ";

    // cout << "*";
    cout << "\n";
	}
  return 0;
}
