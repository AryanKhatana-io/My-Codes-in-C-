#include<iostream>
using namespace std;
int main(){
    string str="I love my Country";
    int cnt=1;
    for(int i=0;i<=str.size();i++){
        if(str[i]==' '){
            cnt++;
        }
    }
    cout<<"No. of Words "<<cnt<<endl;
}