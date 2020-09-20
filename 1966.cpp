#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		queue<int> value;
		queue<int> index;

		int n_value,check = 0;

		cin >> n_value >> check;

		for (int j = 0; j < n_value; j++)
		{
			int var;
			cin >> var;
			index.push(j);
			value.push(var);
		}
	}

	return 0;
}