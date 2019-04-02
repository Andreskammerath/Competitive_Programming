#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <vector>
#include <math.h>


using namespace std;

typedef unsigned long long ll;

int main()
{
	int n,max,aux;
	cin >> n; //receive de number of test cases
	int v[101];
	int fact[101];
	for (int i = 0; i < n; ++i) //get the inputs
	{
		cin >> v[i];
		if(max < v[i]){ max = v[i];}
	}
	fact[0] = 1;
	for (int i = 1; i <= max ; ++i)
	{
		fact[i] = i * fact[i-1]; 
	}

	for (int i = 0; i < n; ++i)
	{
		aux = v[i];
		cout << fact[aux] << '\n';
	}

	return 0;
}