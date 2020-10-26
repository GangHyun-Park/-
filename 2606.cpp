#include <iostream>
#include <vector>
using namespace std;

const int MAX = 101;
int map[MAX][MAX];
int visit[MAX];
int n, cnt;

void DFS(int no)
{
	visit[no] = 1;

	for (int i = 1; i <= n; i++)
	{
		if (!visit[i] && map[no][i] == 1)
		{
			cnt++;
			DFS(i);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio;
	cin.tie();

	int con, u, v;

	cin >> n;
	cin >> con;

	for (int i = 0; i < con; i++)
	{
		cin >> u >> v;
		map[u][v] = map[v][u] = 1;
	}

	DFS(1);
	cout << cnt << endl;
	return 0;
}