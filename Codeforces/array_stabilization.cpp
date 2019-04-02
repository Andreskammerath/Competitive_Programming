#include <stdio.h>
#include <bits/stdc++.h>
#include <string>
#include <iostream>

using namespace std;

int rem_ins(vector<int> &v)
{
	int n = v.size();
	int b = v[n-1] - v[1];
	int c = v[n-2] - v[0];
	if(b < c)return b;
	else{return c;}
}

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	if(n == 2)
	{
		cout << 0 << endl;
		return 0;	
	} 
	sort(v.begin(), v.end());
	cout << rem_ins(v) << endl;
}