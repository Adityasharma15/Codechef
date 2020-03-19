#include <bits/stdc++.h>
#define ll long 
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll arr[n]={0};
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		queue <ll> q;
		for(ll i=1;i<=k;i++){
			q.push(i);
		}
		for(ll i=0;i<n;i++){
			if(i==0){
				if(arr[i]==-1){
					ll flag=0;
					ll top = q.front();
					while(q.front()==arr[i+1]){
						q.push(q.front());
						q.pop();
						if(q.front()==top){
							flag=1;
							break;
						}
					}
					if(flag!=1){
						arr[i]=q.front();
						q.push(q.front());
						q.pop();
					}
//					cout<<arr[i] <<" ";
				}
				continue;
			}
			if(i==n-1){
				if(arr[i]==-1){
					ll flag=0;
					ll top = q.front();
					while(q.front()==arr[i-1]){
						q.push(q.front());
						q.pop();
						if(q.front()==top){
							flag=1;
							break;
						}
					}
					if(flag!=1){
						arr[i]=q.front();
					}
//					cout<<arr[i] <<" ";
				}
				continue;
			}
			if(arr[i]==-1){
				ll top=q.front();
				ll flag=0;
				while(q.front() == arr[i-1] || q.front() == arr[i+1]){
					q.push(q.front());
					q.pop();
					if(q.front()==top){
						flag=1;
						break;
					}
				}
				if(flag!=1){
					arr[i]=q.front();
				}
//				cout<<arr[i] <<" ";
			}
		}
//		cout<<endl;
		ll flag=0;
		for(ll i=0;i<n;i++){
			if(arr[i]==-1){
				flag=1;
			}
		}
		if(flag==1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
			for(ll i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
