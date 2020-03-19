#include<bits/stdc++.h>
#include<iostream>
#define ll long long

using namespace std;

bool times[4]={false,false,false, false};

int count_=0;
long long  profit=0;
long long  maxProfit=INT_MIN;

ll allComb(vector<ll> chart, bool times[],ll row, vector<ll> temp, queue<ll> amounts)
{
if(row==4)
{		vector<ll>temp2;

    for(ll i=0;i<4;i++)
     temp2.push_back(temp[i]);

	 sort(temp2.begin(),temp2.end());

    for(ll i=0;i<4;i++)
    {  
         if(temp2[i]!=0)
         { 
		 profit+=temp2[i]*amounts.front();
         amounts.pop();
         }
          else{
              profit-=100;
              amounts.pop();
          }
    }

    if(profit>maxProfit)
   	 maxProfit= profit;

    profit=0;
    return 0;
}

if(count_==24)
    return maxProfit;

    for(int j=0;j<4;j++)
    {
        if(!times[j])
        {
            times[j]=true;
             count_++;
            temp[j]=(chart[row*4+j]);
            allComb(chart,times,row+1, temp,amounts);
               times[j]=false;
              count_--;
        }
    }
return maxProfit;
}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	
    ll t;
    ll sumOfProfits=0;
    cin >> t;
    while(t--)
     {
		ll n;
		cin >> n;
		struct util {
    		char movie;
    		int time;
			}obj[n];

queue <int> amounts;
amounts.push(25);
amounts.push(50);
amounts.push(75);
amounts.push(100);

		ll Profits;

	for(ll i=0;i<n;i++)
      cin>>obj[i].movie>>obj[i].time;


		vector<int>chart(16,0);

		ll r=0;
		ll c=0;
		for(int i=0;i<n;i++)
		{		  
    		switch(obj[i].movie)
    	{
        case 'A': r=0;
                 break;
        case 'B': r=1;
                 break;
        case 'C': r=2;
                  break;
        case 'D': r=3;
                  break;
    	}


    switch(obj[i].time)
    {
        case 12:c=0;
        break;
        case 3:c=1;
        break;
        case 6: c=2;
        break;
        case 9: c=3;
        break;
    }
    chart[r*4+c]+=1;

	}

	vector<ll> temp(4);

    Profits= allComb(chart,times,0,temp,amounts);
    cout<<Profits<<endl;
    sumOfProfits+=Profits;
    maxProfit=INT_MIN;

     }

 		cout<<sumOfProfits<<endl;
     }
