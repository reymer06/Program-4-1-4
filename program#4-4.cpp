#include<iostream>
using namespace std;

int main(){

    int a, b;
    char choose;

    cout << "Your basic CALCULATOR!!!!!" << endl;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter the operator you want to use: (+,-,*,/) ";
    cin >> choose;


switch(choose){
 case '+':
     cout<<a+b;
     break;
 case '-':
    cout <<a-b;
    break;
 case '*':
    cout <<a*b;
    break;
 case '/':
    cout <<a/b;
    break;
 default:
    cout<<"not a valid operator :<";
}

return 0;


}
