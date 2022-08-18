//Make a simple calculator

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    char choice;
    cout<<"Enter first operand"<<endl;
    cin>>a;
    cout<<"Enter the operator"<<endl;
    cin>>choice;
    cout<<"Enter secound operand"<<endl;
    cin>>b;
    cout<<endl;

    switch(choice){
    case '+':
        cout<<a+b<<endl;
        break;

    case '-':
        cout<<a-b<<endl;
        break;

    case '*':
        cout<<a*b<<endl;
        break;

    case '/':
        cout<<a/b<<endl;
        break;

    default:
        cout<<"invalid arguments"<<endl;
    }

}
