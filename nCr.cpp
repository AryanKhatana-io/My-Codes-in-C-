#include<iostream>
using namespace std;
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;

}
int nCr(int n,int r){
    int num=fact(n);
    int den=fact(n-r)*fact(r);
    return num/den;
}
int main(){
     int n,r;
     cin>>n>>r;
     cout<<"Answer is "<<nCr(n,r)<<endl;
}
