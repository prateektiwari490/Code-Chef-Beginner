#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   lli t;
   cin>>t;
   while(t--){
     lli l,r;
     cin>>l>>r;
     lli odd=(r-l)/2;
     if(l%2==1 || r%2==1)
        odd++;
     if(odd%2==0)
          cout<<"Even"<<endl;
     else
        cout<<"Odd"<<endl;
   }
}
