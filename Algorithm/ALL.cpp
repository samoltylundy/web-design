#include <iostream>
using namespace std;
int main(){
    string name;
    int year;
    int group;
    string department;
    cout<<"Welcome to Data Structure and Programming class "<<endl;
    
    cout <<"pleace enter your name: ";
    getline(cin,name);

    cout <<"Enter your year :";
    cin>>year;

    cout<<"Enter your group: ";
    cin>>group;

    cin.ignore();

    cout<<"Enter your department: ";
    getline(cin,department);

    cout <<" My name is: " << name << " i am currently a year "<< year <<"'s student from groub" << group << "an department."<< department << endl;
    cout  <<"im so excited to start my class in this team";
    return 0;
}