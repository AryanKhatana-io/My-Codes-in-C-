#include<iostream>
using namespace std;
int main(){
    char ch='2';
    cout<<endl;
    switch (ch)
    {
     case '1':
        cout<<"First char"<<endl;
        //    break;
     case '2': 
        cout<<"Second char"<<endl;
        //    break;
     default:
        cout<<"It is a default case"<<endl;            
    }
}


// 2) WHY WE CAN'T USE CONTINUE STATEMENT IN CASE OF SWITCH CASE?

// ANS: CONTINUE CAN'T BE USED IN CASE OF SWITCH CASE BECAUSE AS THE CASE CONSTANT MATCHES WITH THE USERS INPUT THE FLOW WILL COME DOWN AND TRY TO EXECUTE BUT BECAUSE OF CONTINUE IT WILL SKIP THAT PART AND ITERATION WILL GO ON AND ON. THAT'S WHY WE USE BREAK , TO STOP  AT THE POINT ONCE WE EXUCUTE OUR PART.