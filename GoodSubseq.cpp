#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll int nCrModpDP(ll int n,ll int r,ll int p) 
{ 
    // The array C is going to store last row of 
    // pascal triangle at the end. And last entry 
    // of last row is nCr 
    ll int C[r+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1; // Top row of Pascal Triangle 
  
    // One by constructs remaining rows of Pascal 
    // Triangle from top to bottom 
    for (ll int i = 1; i <= n; i++) 
    { 
        // Fill entries of current row using previous 
        // row values 
        for (ll int j = min(i, r); j > 0; j--) 
  
            // nCj = (n-1)Cj + (n-1)C(j-1); 
            C[j] = (C[j] + C[j-1])%p; 
    } 
    return C[r]; 
} 

ll int nCrModpLucas(ll int n,ll int r,ll int p) 
{ 
   // Base case 
   if (r==0) 
      return 1; 
  
   // Compute last digits of n and r in base p 
   ll int ni = n%p, ri = r%p; 
  
   // Compute result for last digits computed above, and 
   // for remaining digits.  Multiply the two results and 
   // compute the result of multiplication in modulo p. 
   return (nCrModpLucas(n/p, r/p, p) * // Last digits of n and r 
           nCrModpDP(ni, ri, p)) % p;  // Remaining digits 
}  

int main()
{
	ll int n, k, count = 0;
	cin >> n >> k;
	
	ll int mod = 1000000007;
	
	for(ll int x =0;x<=k;x++)
		count+=nCrModpLucas(n,x,mod);
	
	cout << count << endl;
}
