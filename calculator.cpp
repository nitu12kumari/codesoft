#include<iostream>
using namespace std;
int main(){
float x;
cout<<"enter 1st number : ";
cin>>x;
char op;
cout<<"enter (+,-,*,/) ";
cin>> op;
float y;
cout<< "enter 2nd number: ";
cin>>y;
if(op=='+'){
        cout<<"the sum is: ";
    cout<<x+y;
}
if(op=='-'){
    cout<<"the difference is: ";
    cout<<x-y;
}
if(op=='*'){
    cout<<"the product is : ";
    cout<<x*y;
}
if(op=='/'){
    cout<< "the quotient is : ";
    cout<<x/y;
}
else{
     cout<<"operator is invalid : ";
     }
