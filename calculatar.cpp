#include<iostream>
using namespace std;
int main(){
    int a,b;

    cout<<"Enter First Number "<<endl;
    cin>>a;


    cout<<"Enter second Number "<<endl;
    cin>>b;
     
    char op;
    cout<<"Enter the operation "<<endl; 
    cin>>op;
     
    switch(op){
        case '+':
                cout<<"Sum is "<<a+b<<endl;
                break;
        case '-':
               cout<<"Difference is "<<a-b<<endl;
                break;
        case '*':
                cout<<"Multiply is "<<a*b<<endl;
                break;
        case '/':
                cout<<"Division is "<<a/b<<endl;
                break;
        case '%':
                cout<<"Modulo is "<<a%b<<endl;
                break;

    } 

  


}