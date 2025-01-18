
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define sp " "
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
ll  mod = 1e9+7;
#include <cmath>
//''
void solve()
{
   string s;
   cin>>s;
   
   int size = s.size();
   int pos = 0;
   while(pos < size && s[pos]=='1')
   {
      pos++;
   }

   if(pos == size)
   {
    cout<<1<<sp<<size<<sp<<1<<sp<<1<<nn;
    return;
   }

   int sub_len = size - pos ;
   vector<pair<string , pair<int,int>>>v;
   for(int i=0 ; i<pos ; i++)
   {
      string sub_s ="";
      for(int j=0;j<sub_len;j++)
      {
        if(s[j+pos]==s[j+i])
             sub_s+='0';
        else
            sub_s+='1';
      }
      v.push_back(make_pair(sub_s , make_pair(i , i+sub_len-1)));
   }
   sort(v.begin(), v.end());
   auto it = *max_element(v.begin() , v.end());
   cout<<1<<sp<<size<<sp<<it.second.first+1<<sp<<it.second.second+1<<nn;
}



 
 
int main()
 
{

 ios_base::sync_with_stdio(0);
 cin.tie(0), cout.tie(0);
 int t;
 cin>>t;
 //t=1;
 while(t--)
 {
    solve();
 }

return 0;
 
}
