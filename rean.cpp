/*#include <iostream>
using namespace std;
int main(){
    int score;
    cout <<"Enter your score";
    cin >> score ;
    cout <<"My score is " << score << "."<< endl;
    if(score > 50){
        cout <<"pass" << endl;
    }
    else cout <<"faile" << endl; 
    
}*/
/*#include <iostream>
using namespace std;
int main(){
    string name;
    int total;
    int score;

    cout << "Pleace Enter your Name"  << endl;
    getline(cin,name);
    cout <<"MY name is"<<name;
    cout<<"Pleace Enter your score" << endl;
    for (int i=0;i>5;i++){
    cin >> i;
    total+=score;
    }
    
}*/
#include <iostream>
using namespace std;

/*int main() {
    // 1. Basic variable and its memory address
    int number = 42;
    cout << "1. BASIC VARIABLE:" << endl;
    cout << "  Variable 'number' contains: " << number << endl;
    cout << "  Memory address of 'number': " << &number << endl << endl;

    // 2. Creating a pointer
    int* ptr = &number;
    cout << "2. CREATING A POINTER:" << endl;
    cout << "  Pointer 'ptr' stores address: " << ptr << endl;
    cout << "  Value at the address (dereferencing): " << *ptr << endl << endl;

    // 3. Modifying value through pointer
    *ptr = 100;
    cout << "3. MODIFYING THROUGH POINTER:" << endl;
    cout << "  Modified 'number' through pointer to: " << number << endl;
    cout << "  Verifying through pointer: " << *ptr << endl << endl;

    // 4. Pointer to another variable
    int another = 999;
    ptr = &another;
    cout << "4. POINTING TO ANOTHER VARIABLE:" << endl;
    cout << "  Pointer now points to 'another' with value: " << *ptr << endl;

    return 0;
}*/
#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        if(i%2==0){
            cout << i << " is even number" << endl;
        }
        else{
            cout << i << " is odd number" << endl;
        }
    }
}
