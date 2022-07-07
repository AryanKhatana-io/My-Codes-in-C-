#include<iostream>
using namespace std;
void dummy(int n){
    n++;
    cout<<"Value is "<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    dummy(n);
    cout<<"Vaue is "<<n<<endl;
}