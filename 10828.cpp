#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

using namespace std;

int main()
{
    int N; // 명령의 수
    cin >> N;
    string str;
    stack<int> st;
    for (int i = 0; i < N; i++)
    {
        cin >> str;

        if (str == "push")
        {
            int number;
            cin >> number;

            st.push(number);
        }

        else if (str == "pop")
        {
            if (!st.empty())
            {
                cout << st.top() << endl;
                st.pop();
            }
            else cout << "-1" << endl;
        }
        else if (str == "size")
        {
            cout << st.size() << endl;
        }
        else if (str == "empty")
        {
            if (st.empty())
            {
                cout << 1 << endl;
            }
            else cout << 0 << endl;
        }
        else if (str == "top")
        {
            if (st.empty())
            {
                cout << -1 << endl;
            }
            else cout << st.top() << endl;
        }
    }
}
