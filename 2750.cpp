#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, wantNum;
	vector<int> var;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> wantNum;

		if (var.empty() == 1)
		{
			var.push_back(wantNum);
		}
		else
		{
			for (int j = 0; j < var.size(); j++)
			{
				if (var.at(j) == wantNum)
					break;
				else
				{
					var.push_back(wantNum);
					break;
				}
			}
		}
	}

	sort(var.begin(), var.end());

	for (int i = 0; i < var.size(); i++)
	{
		cout << var.at(i) << endl;
	}
	return 0;
}