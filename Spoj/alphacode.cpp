#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>

using namespace std;

long dp[5000];
int decodificar(string palabra)
{
	memset(dp,-1,sizeof(dp));
	int largo = palabra.length();
	dp[0] = 1;
	int i = 1;
	while(i < largo)
	{
		if((int)palabra[i-1] < 3 && (int)palabra[i-1] > 0 && (int)palabra[i] != 0 && (int)palabra[i] < 7)
		{
			dp[i] = dp[i-1]*2;
			if(i-1 > 0) dp[i] = dp[i] - 2;
		}	
		else
		{
			dp[i] = dp[i-1] + 1;
		}
		++i;
	}
	return dp[largo-1];

}

int main()
{
	ios:: sync_with_stdio(false);
	string input;
	vector<string> inputs;
	while(true)
	{
		getline(cin,input);
		if(input == "0")break;
		inputs.push_back(input);
	}
	for (int i = 0; i < inputs.size(); ++i)
	{
		cout << decodificar(inputs[i]) << endl;
	}

}