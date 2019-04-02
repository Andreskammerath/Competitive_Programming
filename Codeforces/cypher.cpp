#include <stdio.h>
#include <bits/stdc++.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int n;
	string input;
	cin >> n;
	cin >> input;
	// for (int i = 0; i < input.length(); ++i)
	// {
	// 	cout << input[i] << endl;
	// }
	vector<int> v;
	for (int i = 2; i < 56; ++i)
	{
		v.push_back(i);
	}
	int j = 0;
	int i = 0;
	while(i < n)
	{
		cout << input[i];
		i += v[j];
		++j;
	}
	cout << endl;
}