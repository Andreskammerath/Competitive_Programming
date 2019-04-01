#include <iostream>
#include <bits/stdc++.h>
#include <string.h>

vector<int> kmppre(string& t){ // r[i]: longest border of t[0,i) devuelve vector<int>
	vector<int> r(t.size()+1);r[0]=-1;
	int j=-1;
	fore(i,0,t.size()){
		while(j>=0&&t[i]!=t[j])j=r[j];
		r[i+1]=++j;
	}
	for (int i = 0; i < r.size(); i++) {
		cout << r[i] << endl;
	}
}

int main(){
	string perro;
	cin >> perro;

}
