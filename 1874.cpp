#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	stack<int> arr;
	vector<int> check;
	vector<char> giho;

	int wantNum = 0;
	int n = 0, j = 0;
	int i = 1;
	cin >> n;

	for (int k = 0; k < n; k++)
	{
		cin >> wantNum;
		check.push_back(wantNum);
	}

	for (int k = 1; k <= n; k++)
	{
		arr.push(k);
		giho.push_back('+');

		while (!arr.empty() && arr.top() == check[j])
		{
			arr.pop();
			giho.push_back('-');
			j++;
		}
	}

	if (arr.empty() == 1)
	{
		for (int k = 0; k < giho.size(); k++)
		{
			cout << giho[k] << "\n";
		}
	}
	else
	{
		cout << "NO";
	}

	return 0;
}