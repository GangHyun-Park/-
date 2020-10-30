#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cmp(int a, int b)
{
	return a > b;
}

int main()
{
	ios_base::sync_with_stdio;
	cin.tie();
	cout.tie();

	int N, cost;
	int count = 0;
	cin >> N >> cost;
	vector<int> v(N);

	
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}
	
	sort(v.begin(), v.end(), cmp);
	
	for (int i = 0; i < N; i++)
	{
		while (cost - v[i] >= 0)
		{
			count++;
			cost -= v[i];
		}
	}

	cout << count << "\n";
}