/* Author: Ajay Jadhav */

#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > get_original(vector<vector<int> >& b, int n, int m)
{
    vector<vector<int> > ret(n, vector<int>(m, 1));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(b[i][j] == 0)
            {
                // set all elements in row i and column j as 0 i.e ith row and jth column all contain 0.
                for(int k = 0; k < m; k++)
                    ret[i][k] = 0;
                for(int k = 0; k < n; k++)
                    ret[k][j] = 0;
            }
        }
    }
    return ret;
}

vector<vector<int> > convert(vector<vector<int> >& b, int n, int m)
{
    vector<vector<int> > ret(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(b[i][j] == 1)
            {
                // set all elements in row i and column j as 1.
                for(int k = 0; k < m; k++)
                    ret[i][k] = 1;
                for(int k = 0; k < n; k++)
                    ret[k][j] = 1;
            }
        }
    }
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    vector<vector<int> > b(n, vector<int>(m));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>b[i][j];
        }
    }

    vector<vector<int> > a = get_original(b, n, m);
    vector<vector<int> > bb = convert(a, n, m);
    
    if(bb == b)
    {
        cout<<"YES"<<endl;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}