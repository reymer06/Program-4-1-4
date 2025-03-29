#include<iostream>
#include<string>
using namespace std;

int main(){

string name;
int user1, user2;

cout<<"HELLO USER!!!!!"<<endl;
cout<<"kindly enter your name, please? "<<endl;
getline(cin,name);
cout<<"Good day! Mr, "<<name<<endl;
cout<<"Now enter 2 number you want to add, substract, multiply, divide and also to get the modulus"<<endl;
cout<<"Enter a number(1) :";
cin>>user1;
cout<<"Enter a number(2) :";
cin>>user2;


int numbers1 = user1 + user2;
int numbers2 = user1 - user2;
int numbers3 = user1 * user2;
int numbers4 = user1 / user2;
int numbers5 = user1 % user2;


cout<<"The sum of two numbers is "<<numbers1<<endl;
cout<<"The difference of two numbers is "<<numbers2<<endl;
cout<<"The product of two numbers is "<<numbers3<<endl;
cout<<"The qoutient of two numbers is "<<numbers4<<endl;
cout<<"The modulus of first numbers is "<<numbers5<<endl;


return 0;


}
