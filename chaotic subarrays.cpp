#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int f(vector<int> arr)
{
	vector<int> mp(2, 0);
	int n = arr.size();
	int c = 0;
	int sum = 0;
	mp[0]++;
	for (int i = 0; i < n; i++)
	{
		sum = (sum % mod + arr[i] % mod) % mod;
		int t = sum % 2;
		c = (c % mod + mp[1 - t] % mod) % mod;
		mp[t]++;
	}
	return c % mod;
}

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	vector<int> divisors;
	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		for (int j = 1; j * j <= a[i]; j++)
		{
			if (j * j == a[i])
			{
				cnt++;
			}
			else if (a[i] % j == 0)
			{
				cnt += 2;
			}
		}
		divisors.push_back(cnt);
	}
	cout << f(divisors) << endl;
}