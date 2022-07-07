#include<iostream>
using namespace std;
int main(){
    int n=1340;
    
    switch(n){
        case 1340:
           cout<<"Number of 100 Notes"<<n/100<<endl;
           n=n%100;
        case 2:
           cout<<"Number of 50 Notes"<<n/50<<endl;
           n=n%50;
        case 3:
           cout<<"Number of 20 Notes"<<n/20<<endl;    
           n=n%20; 
        case 4:
           cout<<"Number of 1 Notes "<<n/1<<endl;
           n=n%1;
    }
}