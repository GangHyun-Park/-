#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

bool compare(string a, string b)
{
	if (a.size() == b.size())
	{
		return a < b;
	}
	else
	{
		return a.size() < b.size();
	}
}

int main()
{
	int N;
	vector<string> word;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string wd;
		cin >> wd;

		word.push_back(wd);
	}
	sort(word.begin(), word.end(),compare);
	word.erase(unique(word.begin(), word.end()),word.end());
	
	for (int i = 0; i < word.size(); i++)
	{
		cout << word[i] << endl;
	}

	return 0;
}