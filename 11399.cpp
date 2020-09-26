#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, iTime, result = 0, hap = 0;
	vector<int> time;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> iTime;

		time.push_back(iTime);
	}

	sort(time.begin(), time.end());

	for (int i = 0; i < time.size(); i++)
	{
		hap = hap + time.at(i);
		result = result + hap;
	}

	cout << result;

	return 0;
}