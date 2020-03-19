#include<iostream>
using namespace std;
int main()
{
 int t;
 cin >> t;
 while(t--)
 {
     string s;
     cin >> s;
     int a[26] = {0}, check =0;
     
     for (unsigned int i=0; i<s.length();i++)
     {
         a[s[i]-'a']++;
         
         if(a[s[i]-'a'] > 1)
         {
         	check=1;
         	cout << "yes" << endl;
         	break;
		 }
     }
     
     if(check==0)
     cout << "no" << endl;
 }
}
