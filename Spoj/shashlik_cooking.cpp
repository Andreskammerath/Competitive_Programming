#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	vector<int> pos_tort(n,1);
	int num_tortillas = n / (2*k+1);
	int resto = n % (2*k+1);
	if(resto) ++num_tortillas;
	int r_num_tortillas = num_tortillas;
	int prim_vuelta = k;
	if(!resto)
	{
		while(num_tortillas)
		{
			pos_tort[prim_vuelta] = 0;
			prim_vuelta += 2*k + 1;
			num_tortillas--;
		}
	}
	else if(k+1 <= resto)
	{		
		pos_tort[prim_vuelta] = 0;
		num_tortillas--;
		while(num_tortillas){
			prim_vuelta += 2*k + 1;
			pos_tort[prim_vuelta] = 0;
			num_tortillas--;
		}
 	}
 	else
 	{
 		prim_vuelta -= k+1 - resto;
 		pos_tort[prim_vuelta] = 0;
		num_tortillas--;
		while(num_tortillas){
			prim_vuelta += 2*k + 1;
			pos_tort[prim_vuelta] = 0;
			num_tortillas--;
		} 
 	}
 	if(n == 1){
 		cout << 1 <<'\n' << 1 <<'\n';
 	}
 	else if(k >= n)
 	{
 		cout << 1 <<'\n' << 1 <<'\n';	
 	}
 	else if(!k)
 	{
 		cout << n << '\n';
 		for (int i = 0; i < n; ++i)
 		{
 			cout << i+1 << " ";
 		}
 	}
 	else
 	{	
 		cout << r_num_tortillas << '\n';
 		for (int i = 0; i < n; ++i)
 		{
 			if(!pos_tort[i]){cout << i+1 << " ";}
 		}
 		cout << '\n';
 	}
}