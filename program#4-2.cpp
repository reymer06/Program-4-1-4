#include<iostream>
using namespace std;

int main(){
int year;
cout<<"Enter year: ";
cin>>year;

if((year % 4 == 0) && (year % 100 != 0)){
    cout<<"is a leap year";
} else if (year % 400 == 0){
    cout<<"is a leap year";
} else {
    cout<<"its not leap year";
}



return 0;

}
