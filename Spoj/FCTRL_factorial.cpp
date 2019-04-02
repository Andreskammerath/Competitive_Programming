#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
	int n,aux;
	vector<int> v;
	cin >> n;
	while(n--)
	{
		cin >> aux;
		v.push_back(aux);
	}

	for (int i = 0; i < v.size(); ++i)
	{
		aux = 0;
		while(v[i] >= 5)
		{
			aux += v[i] / 5;
			v[i] /= 5;
		}
		v[i] = aux;
	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << '\n';
	}
	return 0;	
}
