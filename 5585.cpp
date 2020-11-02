#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n,result;
	int count = 0;
	vector<int> v = { 500, 100, 50, 10, 5, 1 };
	cin >> n;

	result = 1000 - n;

	for (int i = 0; i < v.size(); i++)
	{
		while (result > 0)
		{
			if (result - v[i] >= 0)
			{
				result -= v[i];
				count++;
			}
			else
				break;
		}
	}
	
	cout << count << "\n";

	return 0;
}