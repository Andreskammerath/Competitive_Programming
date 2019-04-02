#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> inputs; //store the inputs
	int max = 0;
	int aux;
	bool b = 1;
	while(b)
	{
		scanf("%d",&aux);
		b = aux;
		if(b){inputs.push_back(aux);}
		if(aux > max){max = aux;}
	}	

	vector<int> cuad(max+1); //DP for calculatin the number of squares
	cuad[0] = 0;
	cuad[1] = 1;
	for (int i = 2; i < max +1; ++i)
	{
		cuad[i] = i*i + cuad[i-1];
	}

	for (int i = 0; i < inputs.size(); ++i)
	{
		cout << cuad[inputs[i]] << '\n';
	}

	return 0;
}