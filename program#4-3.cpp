#include<iostream>
using namespace std;

int main(){

int user1, user2, user3;

cout<<"Enter a number: ";
cin>>user1;
cout<<"Enter a number: ";
cin>>user2;
cout<<"Enter a number: ";
cin>>user3;

if((user1 > user2) && (user1 > user3)){
    cout<<"First number is the largest number: "<<user1;
} else if ((user2 > user1) && (user2 > user3)){
    cout<<"Second number is the largest number: "<<user2;
} else {
    cout<<"Third number is the largest number: "<<user3;
}

return 0;

}
