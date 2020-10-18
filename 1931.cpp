#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<pair<int, int>> time;
	int N;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int start, end;

		cin >> start >> end;

		time.push_back(make_pair(end, start));
	}

	sort(time.begin(), time.end());

	int times = time[0].first;
	int count = 1;
	for (int i = 1; i < N; i++)
	{
		if (times <= time[i].second)
		{
			count++;
			times = time[i].first;
		}
	}

	cout << count;
	return 0;
}