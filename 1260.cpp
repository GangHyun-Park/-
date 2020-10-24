#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

const int MAX = 1000 + 1;

int N, M, V;
int adjacent[MAX][MAX];
bool visited[MAX];
queue<int> q;

void DFS(int idx) 
{
	cout << idx << " ";

	for (int i = 1; i <= N; i++)
	{
		if (adjacent[idx][i] && !visited[i])
		{
			visited[i] = true;
			DFS(i);
		}
	}
}

void BFS(int idx)
{
	q.push(idx);
	visited[idx] = true;

	while (!q.empty())
	{
		idx = q.front();
		q.pop();

		cout << idx << " ";

		for (int i = 1; i <= N; i++)
		{
			if (adjacent[idx][i] && !visited[i])
			{
				visited[i] = true;
				q.push(i);
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M >> V;

	for (int i = 0; i < M; i++)
	{
		int from, to;
		cin >> from >> to;
		adjacent[from][to] = 1;
		adjacent[to][from] = 1;
	}

	visited[V] = 1;
	DFS(V);
	cout << '\n';

	memset(visited, false, sizeof(visited));
	BFS(V);
	cout << "\n";

	return 0;
}