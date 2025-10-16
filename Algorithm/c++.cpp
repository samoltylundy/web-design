/*#include <iostream>
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
}*/
/*#include<iostream>
using namespace std;
int main(){
    int nums[]={10,9,-1,8,5,3,20,5,8,1,100,200};
    //cout<<"Pleaces Enter 10 numbers";
    //for( int i=0;i<10;i++){
        //cout<<nums[i];
    //cin >> nums[i];   
    cout<<"Reverse";
    for(int i=11;i>=-1; i--){
    cout<< nums[i]<<" ";
    }
    cout<<endl;
    int even=0;
    for(int i=0;i<10;i++){

        if(nums[i]%2==0){
            even++;
        }
    }
    
    cout<<"even: "<< even ;
}*/
/*#include<iostream>
using namespace std;
int main(){
int min=0;
int max=0;
int arr[]={1, 2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10};
    for(int i=0; i<10; i++){
        max=arr[i];
}
    cout<<max<<endl;
    for(int i=10;i>-1;i--){
        min=arr[i];
    }
    cout<<min;
}*/
#include<iostream>
using namespace std;
 float compute(int n){
    float sum1=0;
    float sum2=0;
    float sum3=0;
 
     for(int i=1; i<=n;i++){
           sum1 +=i;
           sum2 += i*i;
           sum3 += 1/i;
     
     cout<<"sum1: "<<sum1<<endl;
     cout<<"sum2: "<<sum2<<endl;        
     cout<<"sum3: "<<sum3<<endl;
 }
    return sum1+sum2+sum3;
}
int main() {
    int number;
    cout << "Enter value of n: ";
    cin >> number;
    
    float result = compute(number);
    cout << "Total of all three sums: " << result << endl;
    
    return 0;
}
