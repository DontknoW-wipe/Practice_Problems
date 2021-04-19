#include<bits/stdc++.h>
using namespace std;
vector<int> longestStrictlyIncreasingSubstring(string S) {
  vector<int> answer(S.size(), 0);
  answer[0] = 1;
  for(int i = 1; i < S.size(); i++) {
      if(S[i - 1] < S[i]) {
        answer[i] = answer[i - 1] + 1;
      }
      else {
        answer[i] = 1;
      }
  }
  return answer;
}
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> f=longestStrictlyIncreasingSubstring(s);
    for(int i=0;i<f.size();i++)
    {
        cout<<f[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}
