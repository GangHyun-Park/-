#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio;
	cin.tie();
	
	int count = 0, input;
	cin >> input;

	while (input > 0) 
	{
		if (input % 5 == 0)
		{
			input -= 5;
			count++;
		}
		else if (input % 3 == 0)
		{
			input -= 3;
			count++;
		}
		else if (input > 5)
		{
			input -= 5;
			count++;
		}
		else
		{
			input = -1;
			count = -1;
		}
	}

	cout << count;
	return 0;
}