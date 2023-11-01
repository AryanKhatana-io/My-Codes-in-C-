#include<iostream>
#include<unordered_map>
using namespace std;
// int fac(int n){
//   if(n<1){
//     return 1;
//   }
//   return n*fac(n-1);
// }
// int main(){
//  int n;
//  cin>>n;
//  int ans=fac(n);
//  cout<<ans<<endl;
// }

int main(){
    string str="Cpp is Programming  Language";
    int f=0;
    // cout<<"No. of words is "<<<<endl;
    
    for(int i=0;i<str.size();i++){
      if(str[i]==' '){
        f++;
      }
    }
    cout<<"Number of cnt is "<<f<<endl;
    
}

