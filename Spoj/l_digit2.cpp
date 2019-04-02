#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int last_dig(int num)
{
	return (num % 10);
}

int pot1(int a, int b)
{
	
	if(b == 0) return 1;
	if(a == 0) return 0;
	int res = 1;
	int b1 = b;
	while(true)
	{
		if(b1 != 1)
		{
			res *= last_dig(a*a);
			b1 /= 2;
		}
		else res *= a;
		res = last_dig(res);
		if(b == 0) break;
		if(res == 0) break; 
	}
	return res;
}

int main()
{
	int t; //number of testcases
	vector<int> a; // base
	vector<int> b; // index
	int aux1,aux2;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> aux1 >> aux2;
		a.push_back(aux1);
		b.push_back(aux2);
	}
	for (int i = 0; i < t; ++i)
	{
		cout << pot1(last_dig(a[i]),b[i]) << endl;
	}
}