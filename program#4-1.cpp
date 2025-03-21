#include<iostream>
#include<string>
using namespace std;


int main(){
int birthyear;
int currentYear = 2025;
string name;

cout<<"Please enter your name: ";
getline(cin,name);

cout<<"Now enter your birthyear: ";
cin>>birthyear;

int age = currentYear - birthyear;

cout<<"So your name is "<<name<<" and your age is "<<age<<" am i right?";

return 0;




}
