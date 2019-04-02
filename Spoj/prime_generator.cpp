#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <vector>
#include <math.h>


using namespace std;

bool primo(int i, vector<int>& vector) //aux. funct. to calculate primes
{
	bool b = true;
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it)
	{
		if(i == *it){break;}
		else if(!(i % *it) || (i == 1))
		{ 
			b = false;
			break;
		}	
	}
	return b;
}


int main()
{
	vector<int> a;
	vector<int> b;
	vector<int> primes;
	primes.push_back(2);
	int ai,bi,n; // n number of test cases
	int count = 0; //ai, bi: auxiliars, count: max number for calculate primes
	cin >> n;
	while(n--) // recive all the inputs
	{
		scanf("%d %d",&ai,&bi);
		a.push_back(ai);
		b.push_back(bi);
		if(count < bi)count = bi; //calculate the max bi :)
	}

	count = sqrt(count) + 1; 
	
	for (int i = 3; i <= count; ++i) //make my array with all primes <= count
	{
		if(primo(i,primes)){primes.push_back(i);}
	}

	for (int j = 0; j < b.size() ; ++j)
	{
		for (int i = a[j]; i <= b[j]; ++i)
		{
			if(primo(i,primes)){cout << i << '\n';}
		}
		cout << '\n';
	}
	return 0;
}