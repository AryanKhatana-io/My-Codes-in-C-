#include<iostream>
using namespace std;
void cnt(string str){
    int n=str.size();
    int vo=0,co=0;
    for(int i=0;i<n;i++){
      if(str[i]=='a'||str[i]=='e'||str[i]=='i'|| str[i]=='o'||str[i]=='u'){
        vo++;
      }
      else{
        co++;
      }
    }
    cout<<"vowel is "<<vo<<" conosonant is"<<co<<endl;
}



void rev(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++,e--;
    }
}


void sumAvg(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int avg=sum/n;
    cout<<"Sum is "<<sum<< " Avg is "<<avg<<endl;
}


int main(){
    // string str;
    // cout<<"Enter the string "<<endl;
    // cin>>str;
    // cnt(str);



    // int arr[10]={2,4,5,3,1,3,4,6,9,11};
    // rev(arr,10);
    // // cout<<"Reverse of array is "<<arr[10]<<endl;
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<" ";
    // }

    
     
    int arr[5]={1,2,3,4,5};
    int n=5;
    sumAvg(arr,n);
    





    return 0;
     

}
