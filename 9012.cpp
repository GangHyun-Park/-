#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	int T = 0;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string str;
		stack <char> input;
		int flag = 0;

		cin >> str;

		for (int j = 0; j < str.length(); j++)
		{
			if (str.at(j) == '(')
			{
				input.push('(');
			}
			else
			{
				if (input.empty() == 1)
				{
					flag = 1;
					continue;
				}
				else
				{
					if (input.top() == '(')
					{
						input.pop();
						continue;
					}
				}
			}
		}

		if (flag == 1 || input.empty() == 0)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}

	return 0;
}