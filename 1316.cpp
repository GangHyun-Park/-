#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	int n;
	int count = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		char sen[100];
		cin >> sen;

		if (strlen(sen) <= 2)
		{
			count++;
		}
		else
		{
			int over = 0;
			for (int j = 2; j < strlen(sen); j++)
			{
				for (int k = 0; k < j - 1; k++)
				{
					if (sen[k] == sen[j] && sen[k + 1] == sen[j])
					{
						continue;
					}
					else if (sen[k] == sen[j])
					{
						over++;
					}
				}
			}

			if (over == 0)
			{
				count++;
			}
		}
	}

	cout << count << "\n";
}