/* Ajay Jadhav */

#include <bits/stdc++.h>

#define ll          long long
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define endl        '\n'
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;

class bnode
{
public:
    int val;
    bnode* left;
    bnode* right;
};
void inorder(bnode* root)
{
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bnode* root = new bnode;
    map<int, bnode*> node;
    root->val = 0;
    node[0] = root;
    root->left = nullptr;
    root->right = nullptr;
    for (int i = 0; i < n; i++)
    {
        int cur = i + 1;
        if (s[i] == 'L')
        {
            bnode* new_node = new bnode;
            new_node->val = cur;
            new_node->left = nullptr;
            new_node->right = nullptr;
            node[cur] = new_node;
            node[cur - 1]->left = new_node;
        }
        else
        {
            bnode* new_node = new bnode;
            new_node->val = cur;
            new_node->left = nullptr;
            new_node->right = nullptr;
            node[cur] = new_node;
            node[cur - 1]->right = new_node;
        }
    }
    inorder(root);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}