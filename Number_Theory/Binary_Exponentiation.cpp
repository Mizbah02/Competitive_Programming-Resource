
ll  mod = 1e9+7;
int Binary_expo(int a , int p)
{
   int ans = 1;
   while(p)
   {
      if(p&1)
         ans = (ans*a)%mod;
      a=(a*a)%mod;
      p=p/2;

   }

   return ans;
}
