#include <bits/stdc++.h>
using namespace std;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define LL long long
#define ULL unsigned long long
#define LB lower_bound
#define MOD1 1000000007
#define MOD2 1000000009

void SieveOfEratosthenes(LL N, vector<bool>& prime)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.

    for (int p = 2; p * p <= N; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for (int i = p * p; i <= N; i += p)
                prime[i] = false;
        }
    }
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    static const int _ = []() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        return 0;
    }();

    int t;
    cin >> t;
    LL N = 2 * pow(10, 7);
    // bool prime[N+1];
    vector<bool> prime(N + 1, true);

    SieveOfEratosthenes(N, prime);
    while (t--)
    {
        int n;
        cin >> n;
        vector<LL> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        LL ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if(arr[i] + arr[j] != 1 && arr[i] + arr[j] != 0)
                if (prime[arr[i] + arr[j]])
                {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
