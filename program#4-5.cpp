#include<iostream>
using namespace std;

int main(){
int grades[4];
int sum = 0;
double average;

for(int i = 0; i<4; i++){
    cout<<"Enter your grades in Prelims to Final "<< i + 1<<": ";
    cin>>grades[i];


while (grades[i]<0 || grades [i]>100){
    cout<<"Please enter between 0 to 100: ";
    cin>>grades[i];


}

sum += grades [1];

}
average = sum/4.0;

cout<<"Your average is: "<<average;

return 0;
}
