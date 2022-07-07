#include<iostream>
using namespace std;
    int setbit(int n){
         int cnt=1;
    if(n&1){
        cnt++;
    }
    n=n>>1;
    return cnt; 
    }
int main(){
   int a,b;
   cin>>a>>b;
   int s1=setbit(a);
   int s2=setbit(b);
   int ans=s1+s2;
   cout<<"Total Number of Setbit is "<<ans<<endl;



}