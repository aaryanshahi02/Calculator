#include<iostream>
using namespace std;
int main()
{
    char op;
    float num1,num2;
    cout<<"enter num1 : ";
    cin>>num1;
    cout<<"enter the operator : ";
    cin>>op;
    cout<<"enter num2 : ";
    cin>>num2;
    switch (op) {
        case '+':
        cout<<"num1+num2="<<num1+num2<<endl;
        break;
        case '-' :
        cout<<"num1-num2="<<num1-num2<<endl;
        break;
        case '*' :
        cout<<"num1*num2="<<num1*num2<<endl;
        break;
        case '/' :
        cout<<"num1/num2="<<num1/num2<<endl;
        break;

        default:
        cout<<"wrong operator entered";
        break;
    }

       
    
    
    
    
    return 0;

}