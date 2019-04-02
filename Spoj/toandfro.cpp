#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<pair<int,string> > inputs;
	pair<int, string> aux;
	string str;
	int n,n2; //number of columns and number of rows.
	while(true)
	{
		cin >> n;
		if(!n){break;}
		cin >> str;
		aux = make_pair(n,str);
		inputs.push_back(aux);

	}
	int var;
	int numb_lett = 0; //iterator for string
	for (int j = 0; j < inputs.size(); ++j) //travel all the t_cases
	{
		n = inputs[j].first;
		var = n-1;
		n2 = inputs[j].second.size() / n;
		char a[n2][n];
		int numb_lett = 0;
		for (int i2 = 0; i2 < n2; ++i2)
		{
			if(i2 % 2 == 0)
			{
				for (int ir = 0; ir < n; ++ir)
				{
					a[i2][ir] = inputs[j].second[numb_lett];
					++ numb_lett;
				}
			}
			else
			{
				for (int ir = 0; ir < n; ++ir)
				{
					a[i2][var-ir] = inputs[j].second[numb_lett];
					++ numb_lett;	
				}
			}
		}
		for (int ir2 = 0; ir2 < n; ++ir2)
		{
			for (int ir3 = 0; ir3 < n2; ++ir3)
			{
				cout << a[ir3][ir2];
			}
		}
		cout << '\n';
	}

}