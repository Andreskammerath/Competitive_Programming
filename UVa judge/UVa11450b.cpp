#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int M,C,precio[20][20];
int memo[210][20];
int shop(int money, int g)
{
	if(money < 0) return -1000;
	if(g == C) return M-money;
	if(memo[money][g] != -1) return memo[money][g];
	int ans = -1;
	for (int model = 0; model < 20; ++model)
	{
		ans = max(ans,shop(money-precio[g][model],g+1));
	}
	return memo[money][g] = ans;
}

int main()
{
	int 
}