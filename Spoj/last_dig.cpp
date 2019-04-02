#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int last_dig(int a)
{
	return (a%10);
}
int f(int a, long long b1)
{
	int a1 = last_dig(a);
	int puchitos = 1;
	if (b1 == 0)return 1;
	else if(a1 == 0 || a1 == 1) return a1;
	else
	{
		while(true)
		{
			if(b1 == 1)break;
			if(b1 % 2 == 1)
			{
				b1 -= 1;
				puchitos *= a1;
				puchitos = last_dig(puchitos);
			}
			b1 /= 2;
			a1 *= a1;
			a1 =  last_dig(a1);
		}
			a1 *= puchitos;
			return last_dig(a1);
	}
}
int main()
{
	int n = 0;
	cin >> n;
	vector<int> a(n);
	vector<long long> b(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < n; ++i)cout << f(a[i],b[i]) << endl;
	return 0;
}