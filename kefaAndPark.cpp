#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > nodos(100000);
vector<int> cats(100000,0);
vector<int> visited(100000,0);
int result = 0;

void create_edge(int i, int j)
{
    nodos[i].push_back(j);
    nodos[j].push_back(i);
}

void DFS(int i, int acum, int m)
{
    visited[i] = 1;
    if(cats[i]) acum++;
    if(cats[i]) acum = 0;
    for(int v: nodos[i]){ //nodos adyacentes
        if(!visited[v]){
            DFS(v,acum,m);
        }
    }
    if(nodos[i].size() < 3  && i != 1 && acum < m) result++;
}
 

int main()
{
    int n, m, r, j = 0;
    cin >> n >> m;
    for(int i = 0; i < n-1; ++i)
    {
        cin >> cats[i];
    }
    for(int i = 0; i < n-1; ++i)
    {
        cin >> r >> j;
        create_edge(r,j);
    } 
    DFS(1,0,m);
}