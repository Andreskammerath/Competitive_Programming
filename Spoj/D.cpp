#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <cmath>

using namespace std;

int f(int r, vector<int>& n, vector<int>& box){

	int count = 0;
	vector<int> obj1;
	obj1 = n;
	for (int j = 0; j < box.size(); ++j)
	{
		for (int i = r; i < n.size(); ++i)
		{
			if(obj1[i] > box[j])break;
			else if(!obj1[i]);
			else
			{
				box[j] -= obj1[i];
				count ++;
				obj1[i] = 0;
			}
		}
	}
	return count;
}
int main()
{
	int n,m,k;
	cin >> n >> m >> k;
	vector<int> obj(n); 
	vector<int> box(m,k); // vector of m elements initializated in k value.
	int count = 0;
	int aux = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> obj[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if(count > n-i)break;
		fill(box.begin(), box.end(), k);
		aux = f(i,obj,box);
		if(aux > count) count = aux;
	}
	
	cout << count << endl;
}