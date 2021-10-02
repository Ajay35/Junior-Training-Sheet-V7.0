#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <iomanip>
#include <sstream>
#include <bitset>
#include <cstdlib>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    stack<int> st;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int d, h;
        cin >> d >> h;
        if (st.empty())
        {
            st.push(h);
            ans++;
        }
        else
        {
            while (st.top() > h)
            {
                st.pop();
                if (st.empty())
                    break;
            }
            if (st.empty())
            {
                ans++;
                st.push(h);
            }
            else
            {
                if (st.top() == h)
                {
                    continue;
                }
                else
                {
                    ans++;
                    st.push(h);
                }
            }
        }
    }
    cout << ans;
    return 0;
}