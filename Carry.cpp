#include<iostream>
using namespace std;
int main()
{   int t;
    cin >> t;
    while(t--)
    {
	int i,j;
	cin >> i >> j;
	if((i+j)<10)
	cout << i+j << endl;
	else
	cout <<( (i+j)-10)<< endl;
}
} 
