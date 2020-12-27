#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
   int x;
   cin>>x;
   vector<int> ans;
   int sum=0,last=9;
   while(sum<x && last>0)
   {
       ans.push_back(min(x-sum,last));
       sum += last;
       last--;
   }
   if(sum<x)
   {
       cout<<"-1"<<endl;
 
   }
   else
   {
       reverse(ans.begin(), ans.end());
       for(int i : ans)
   {
       cout<<i;
   }
   cout<<endl;
   }
 
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
Codeforces Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
1
5
15
50
Output
1
5
69
-1
Answer
1
5
69
-1
Checker Log
ok 4 number(s): "1 5 69 -1"
*/