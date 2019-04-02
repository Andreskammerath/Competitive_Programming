#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;


int main()
{
	int n; //number of test cases
	vector<ii> inputs;
	vector<int> line1;
	vector<int> line2;
	ii aux;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d %d",&aux.first,&aux.second);
		inputs.push_back(aux);
	}
	int j1 = 0;
	for (int i = 0; i < 10001; ++i)
	{
		if((j1 % 2) == 0)
		{
			line1.push_back(j1);
			j1++;
		}
		else
		{
			line1.push_back(j1);
			j1 += 3;
		}
	}
	int j2 = 2;
	for (int i = 2; i < 10001; ++i)
	{
		if((j2 % 2) == 0)
		{
			line2.push_back(j2);
			j2++;
		}
		else
		{
			line2.push_back(j2);
			j2 += 3;
		}
	}
	for (int i = 0; i < inputs.size(); ++i)
	{
		if(inputs[i].first == inputs[i].second){ cout << line1[inputs[i].first] << '\n';}
		else if (inputs[i].first == inputs[i].second + 2) {cout << line2[inputs[i].second] << '\n';}
		else {cout << "No Number" << '\n';}
	}	



}