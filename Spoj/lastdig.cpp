#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef unsigned int uint;
uint ult_dig(uint a)
{
	uint ult_dig = a % 10; 
	return ult_dig;
} 

int main()
{
	uint n,a,b; //numb of testcases
	cin >> n;
	pair<uint,uint> aux;
	vector<pair<uint,uint> > inputs;
	map<pair<uint,uint>,uint> mymap;
	//filling my map very quickly
	mymap[make_pair(2,2)]= 4; //mymap[base][exponent]
	mymap[make_pair(2,1)]= 2;
	mymap[make_pair(2,3)]= 8;
	mymap[make_pair(2,0)]= 6;
	mymap[make_pair(3,0)]= 1; 
	mymap[make_pair(3,1)]= 3;
	mymap[make_pair(3,2)]= 9;
	mymap[make_pair(3,3)]= 7;
	mymap[make_pair(4,0)]= 6;
	mymap[make_pair(4,1)]= 4;
	mymap[make_pair(7,0)]= 1;
	mymap[make_pair(7,1)]= 7;
	mymap[make_pair(7,2)]= 9;
	mymap[make_pair(7,3)]= 4;
	mymap[make_pair(8,0)]= 6;
	mymap[make_pair(8,1)]= 8;
	mymap[make_pair(8,2)]= 4;
	mymap[make_pair(8,3)]= 2;
	mymap[make_pair(9,0)]= 1;
	mymap[make_pair(9,1)]= 9;
	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;
		a = ult_dig(a);
		inputs.push_back(make_pair(a,b)); 
	}
	for (int i = 0; i < inputs.size(); ++i)
	{
		a = inputs[i].first;
		if(!(inputs[i].second)) cout << 1 << '\n';
		else if	(inputs[i].second == 1 || inputs[i].first == 5 || inputs[i].first == 6) cout << inputs[i].first << '\n';
		else if (inputs[i].first == 9 || inputs[i].first == 4)
		{
			b = (inputs[i].second % 2);
			cout << mymap[make_pair(a,b)] << '\n';
		}
		else
		{
			b = (inputs[i].second % 4);
			cout << mymap[make_pair(a,b)] << '\n';
		}
	}

}