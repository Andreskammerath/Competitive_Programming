#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef unsigned int uint;

uint maximo(uint a, uint b)
{
	uint may = a;
	if(b > may) {may = b;}
	return may;
}

int main()
{
	vector<uint> inputs;
	uint aux,maxi;
	maxi = 0; 
	while(scanf("%d", &aux) != EOF)
	{
		inputs.push_back(aux);
		maxi = maximo(maxi,aux);
	}
	vector<uint> dp_div(maxi/2 + 2);
	dp_div[0] = 0;
	dp_div[1] = 1;
	dp_div[2] = 2;
	for (uint i = 3; i < maxi/2 +1; ++i)
	{

		dp_div[i] = maximo(i,dp_div[floor(i/2)] + dp_div[floor(i/3)] + dp_div[floor(i/4)]);
	}
	for (uint i = 0; i < inputs.size(); ++i)
	{
		cout << maximo(i,dp_div[floor(inputs[i]/2)] + dp_div[floor(inputs[i]/3)] + dp_div[floor(inputs[i]/4)]) << '\n';
	}
}