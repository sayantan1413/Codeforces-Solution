#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &e : v){
        cin>>e;
    }
    int left = 0, right = n-1;
    vector<int> ans(n);
 
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            ans[i] = v[left++];
        }
        else
        {
            ans[i] = v[right--];
        }
    }
    for(int i : ans)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
}
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

/*
Codeforces Judgement Protocol :
Test: #1, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6
7
3 4 5 2 9 1 1
4
9 2 7 1
11
8 4 3 1 2 7 8 7 9 4 2
1
42
2
11 7
8
1 1 1 1 1 1 1 1
Output
3 1 4 1 5 9 2 
9 1 2 7 
8 2 4 4 3 9 1 7 2 8 7 
42 
11 7 
1 1 1 1 1 1 1 1 
Answer
3 1 4 1 5 9 2 
9 1 2 7 
8 2 4 4 3 9 1 7 2 8 7 
42 
11 7 
1 1 1 1 1 1 1 1 
Checker Log
ok 33 numbers
*/