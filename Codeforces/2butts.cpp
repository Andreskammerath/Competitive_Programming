#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int shortest_path(int num, map<int,int> &temp_map)
{
	int i = num; // i variable tu return
	map<int,int> :: iterator it = temp_map.find(num);
	if(it != temp_map.end()) i = it->second;
	else
	{
		i = min(shortest_path(i-1,temp_map)+1,shortest_path(2*i,temp_map)+1);
		temp_map[num] = i;
	}
	return i;
}


int main()
{
	int n,m;
	cin >> n >> m;
	if(n >= m)
	{
		cout << n-m << endl;
		return 0;
	}
	map<int,int> mymap; //number of clicks  from i to m
	mymap[m] = 0;
	mymap[m+1] = 1;
	mymap[m+2] = 2;
	mymap
	for (int i = m+1; i < 2*m; ++i)
	{
		mymap[i] = i - m;
	}
	cout << shortest_path(n,mymap) << endl;
}