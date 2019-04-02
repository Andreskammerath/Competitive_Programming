#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <cmath>
#include <map>
#include <cstdlib>
//tried to make it just with dp, but didn't work
//now trying to make it work using maps & dp
using namespace std;	
typedef unsigned int uint;

uint maximo(uint a, uint b)
{
	uint may = a;
	if(b > may) {may = b;}
	return may;
}

uint max_value_byte(uint num, map<uint, uint> &temp_map)
{
	uint r = num; //variable to return
	map<uint,uint>:: iterator it = temp_map.find(num);
	if(it != temp_map.end())
	{
		r = it->second;
	}
	else
	{
		r = maximo(num, max_value_byte(floor(r/2), temp_map) + max_value_byte(floor(r/3), temp_map) + max_value_byte(floor(r/4), temp_map));
		temp_map[num] = r; 
	}
	return r;
}

int main()
{
	vector<uint> inputs;
	uint aux;
	while(scanf("%d", &aux) != EOF)
	{
		inputs.push_back(aux);
	}
	map<uint,uint> my_map;
	my_map[0] =0;
	my_map[1] =1;
	my_map[2] =2;
	for (int i = 0; i < inputs.size(); ++i)
	{
		cout << max_value_byte(inputs[i],my_map) << '\n';
	}
}


