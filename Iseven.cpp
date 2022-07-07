#include<iostream>
using namespace std;
bool isEven(){
    int a;
    if(a%2!=0){
        return 0;
    }
    return 1;
}
int main(){
   int n;
   cin>>n;
   if(isEven()){
      cout<<"Number is even"<<endl;
   }
   else{
    cout<<"Number is odd"<<endl;
   }
}