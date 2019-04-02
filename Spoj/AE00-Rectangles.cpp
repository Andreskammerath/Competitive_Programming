#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> inputs;
	int aux, j = 0;
	while(scanf("%d", &aux) != EOF)
	{
		inputs.push_back(aux);
	}
	for (int i = 0; i < inputs.size(); ++i)
	{
		aux = inputs[i];
		j = 2;
		if(aux < 4)cout << aux;
		else
		{
			while(inputs[i] >= (j*j))
			{
				aux += floor((inputs[i] -j*j)/j) +1 ; 
				++j;
			}
			cout << aux;
		}  
	}
}