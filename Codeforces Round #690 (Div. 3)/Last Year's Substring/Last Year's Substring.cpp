#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   for(int i=0;i<=4;i++)
   {
       if(s.substr(0,i)+s.substr(n-4+i,4-i)=="2020")
       {
         cout<<"YES"<<endl;
         return;
       }
    }
    cout<<"NO"<<endl;
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
Test: #1, time: 31 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6
8
20192020
8
22019020
4
2020
5
20002
6
729040
6
200200
Output
YES
YES
YES
NO
NO
NO
Answer
YES
YES
YES
NO
NO
NO
Checker Log
ok 6 token(s): yes count is 3, no count is 3
*/