#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<pair<int, int>> point;

	for (int i = 0; i < N; i++)
	{
		int xPoint, yPoint;

		cin >> xPoint >> yPoint;

		point.push_back(make_pair(xPoint, yPoint));
	}

	sort(point.begin(), point.end());

	for (int i = 0; i < point.size(); i++)
	{
		cout << point[i].first << " " << point[i].second << "\n";
	}

	return 0;
}