#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	char b;
	int a = 0;
	int sum = 0;
	int count = 0;
	vector<int> v(n,0);
	for (int i = 0; i < n; ++i)
	{
		count = 0;
		sum = 0;
		while(getline(cin,b) != '\n')
		{
			sum += a;
			count++;
		}
		v[i] = (sum % count);
	}
	return 0;
}