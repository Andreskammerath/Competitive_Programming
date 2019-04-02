#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

typedef pair<vector<int> ,vector<int> > ii;

int main()
{
	vector<ii> cases; //vector with values
	ii aux1;
	int n; // numb of test cases
	cin >> n;
	int t; //num of model per test case
	int aux2;
	for (int i = 0; i < n; ++i)
	{
		cin >> t;
		vector<int> m,w;
		for (int i = 0; i < t; ++i)
		{
			cin >> aux2;
			m.push_back(aux2);

		}
		for (int i = 0; i < t; ++i)
		{
			cin >> aux2;
			w.push_back(aux2);
		}
		sort(m.begin(),m.end());
		sort(w.begin(),w.end());
		aux1 = make_pair(m,w);
		cases.push_back(aux1);
	}

	for (int j = 0; j < n; ++j)
	{
		aux2 = 0;
		for (int i = 0; i < cases[j].first.size(); ++i)
		{
			aux2 += cases[j].first[i] * cases[j].second[i];
		}
		cout << aux2 << '\n';
	}
}