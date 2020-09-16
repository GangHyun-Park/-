#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
	int N;
	cin >> N;
	queue<int> qe;
	string check;
	int wantNum = 0;
	int popNum = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> check;

		if (check == "push")
		{
			cin >> wantNum;
			qe.push(wantNum);
		}
		else if (check == "pop")
		{
			if (qe.empty() == 1)
			{
				cout << "-1" << endl;
			}
			else
			{
				popNum = qe.front();
				qe.pop();
				cout << popNum << endl;
			}
		}
		else if (check == "size")
		{
			cout << qe.size() << endl;
		}
		else if (check == "empty")
		{
			if (qe.empty() == 1)
			{
				cout << "1" << endl;
			}
			else
			{
				cout << "0" << endl;
			}
		}
		else if (check == "front")
		{
			if (qe.empty() == 1)
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << qe.front() << endl;
			}
		}
		else if (check == "back")
		{
			if (qe.empty() == 1)
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << qe.back() << endl;
			}
		}
	}

	return 0;
}