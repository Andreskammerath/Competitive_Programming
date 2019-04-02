#include <iostream>
//#include <stack>
#include <stdio.h>
//#include <string.h>
#include <bits/stdc++.h> // string & stack in STL

using namespace std;

int main()
{
	stack <char> operators; //stack to rewrite the expressions
	int n; //number of test cases
	cin >> n;
	vector <string> expressions;// save the n algebraic expressions
	string str;
	while(n--)
	{
		cin >> str;
		expressions.push_back(str);
	}
	int count;
	for (int i = 0; i < expressions.size(); ++i)
	{
		str = expressions[i];
		count = str.size();
		for (int i = 0; i < count; ++i)
		{
			if(str[i] == ')') 
			{
				cout << operators.top();
				operators.pop();
			}
			else if(str[i] > 96 && str[i] < 123) { cout << str[i];}
			else if(str[i] != '(')
			{
				operators.push(str[i]);
			}
		}
	cout << '\n';
	}


}