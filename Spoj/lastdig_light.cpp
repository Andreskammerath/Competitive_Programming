#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef unsigned int uint;

uint ult_dig(uint a)
{
	uint ult_dig = a % 10; 
	return ult_dig;
}


int main()
{
	uint n,a,b;
	cin >> n;
	vector<uint> v;
	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;
		a = ult_dig(a);
		if(!b) a = 1;
		else if(b == 1);
		else if(a == 1 || a == 5 || a == 6 || a == 0);
		else if (a == 9 || a == 4)
		{
			b = b % 2 + 2;
			a = pow(a,b);
			a = ult_dig(a);
		}
		else
		{
			b = b % 4;
			a = pow(a,b);
			a = ult_dig(a);	
		}
		v.push_back(a);
	}
	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << '\n';
	}
}