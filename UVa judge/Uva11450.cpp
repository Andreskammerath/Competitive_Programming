#include <bits/stdc++.h>
#include <iostream>


using namespace std;

int minimo(int a,int b)
{
    int min = a;
    if(b < a) min = b;
    return min;
}

int shop(int money, int C, map<pair<int,int>,int> &my_map, vector<vector<int> > &v, int i, int j)
{
	int min = 0;//numer to return
	map<pair<int,int>,int>:: iterator it = my_map.find(make_pair(money-v[i][j],i));
    if( it != my_map.end() )
    {
        min = it->second;
    }
    else if(money - v[i][j] < 0)
    {
        min = 10000;
        my_map[make_pair(money,i)] = min;
    }
    else if(i == C)
    {
        min = money;
        my_map[make_pair(money,i)] = money;
    }
    else if(j == 19)
    {
        min = shop(money,C,my_map,v,i+1,0);
    }    
    else
    {
        min = minimo(shop(money - v[i][j],C,my_map,v,i+1,0),shop(money,C,my_map,v,i,j+1));
    }
    return min;
}

void reset_table(vector<vector<int> > &v)
{
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 20; ++j)
		{
			v[i][j] = 100;
		}
	}
}

int main()
{
	int N = 0; //number of testcases
	cin >> N;
	int money = 0;
	vector<int> v(20);
	vector<vector<int> > table(20,v);
	map< pair<int,int>, int> my_map;
	int C = 0; // number of garment must buy
	int K = 0;
	int M = 0;
	for (int i = 0; i < N; ++i)
	{
		reset_table(table);
		cin >> money >> C;
		M = money;
		for (int i = 0; i < C; ++i)
		{
			cin >> K;
			for (int j = 0; j < K; ++j)
			{
				cin >> table[i][j];
			}			
		}
		cout << M - shop(money,C,my_map,table,0,0) << endl;
	}
}