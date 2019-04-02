#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
	int aux = 1000000000;
	int aux2 = 0;
	while(aux != 0)
	{
		aux = aux / 3;
		aux2++;
	}
	cout << aux2;
}
