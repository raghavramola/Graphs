#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
//#define int   long long int
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ll long long
void Raghav()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

}
void addedge(vector<int>adj[], int u, int v)
{
	adj[u].pb(v);
	adj[v].pb(u);
}
void BFS(vector<int>adj[], int v, int s)
{
	bool visited[v];
	memset(visited, false, sizeof(visited));
	visited[s] = true;
	queue<int>q;
	q.push(s);
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		cout << u << " ";
		for (auto x : adj[u])
		{
			if (visited[x] == false)
			{
				visited[x] = true;
				q.push(x);
			}
		}
	}
	cout << "\n";
}
void printgraph(vector<int>adj[], int v)
{
	for (int i = 0; i < v; i++)
	{
		cout << i << "->";
		for (auto j : adj[i])
		{
			cout << j << " ";
		}
		cout << "\n";
	}
}
signed main()
{
	Raghav();
	int v = 5;
	cout << v << endl;
	vector<int>adj[v];
	addedge(adj, 0, 1);
	addedge(adj, 0, 2);
	addedge(adj, 1, 2);
	addedge(adj, 1, 3);
	addedge(adj, 2, 3);
	addedge(adj, 2, 4);
	addedge(adj, 3, 4);
	printgraph(adj, v);
	//BFS(adj,v,0);
	return 0;

}