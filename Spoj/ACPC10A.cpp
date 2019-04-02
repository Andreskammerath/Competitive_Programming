#include <iostream>
#include <stdio.h>
#include <tuple>
#include <bits/stdc++.h>

using namespace std;
int diff(int a, int b)
{
	return (b - a);
}
int main()
{
	vector<tuple<int,int,int>> inputs;
	tuple<int,int,int> aux;
	int a,b,c;
	bool d = 1;
	while(d)
	{
		scanf("%d %d %d",&a,&b,&c);
		d = abs(a) && abs(b) && abs(c);
		if(!d) {break;} 
		aux = make_tuple(a,b,c);
		inputs.push_back(aux); 
	}	

	for (int i = 0; i < inputs.size(); ++i)
	{
		if(diff(get<0>(inputs[i]),get<1>(inputs[i])) == diff(get<1>(inputs[i]),get<2>(inputs[i])))
		{
			cout << "AP " << get<2>(inputs[i]) + diff(get<1>(inputs[i]),get<2>(inputs[i])) << '\n';
		}
		else
		{
			cout << "GP " << (get<2>(inputs[i]) / get<1>(inputs[i])) * get<2>(inputs[i]) << '\n';		
		}
	}
	return 0;
}