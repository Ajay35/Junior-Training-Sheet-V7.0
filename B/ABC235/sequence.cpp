/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> ans;
    for(int i = 2; i * i <= n; i++)
    {
        vector<int> temp;
        int x = i;
        temp.push_back(1);
        while(x <= n)
        {
            temp.push_back(x);
            x = 2 * x;
        }
        if(temp.size() > ans.size())
        {
            ans = temp;
        }
    }   
    cout<<ans.size()<<endl;
    for(int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}