#include <iostream>

using namespace std;


int main(){
    
    int age;
    
    cout << "Welcome to the Pub and Grill" << endl;
    cout << "Please, enter your age" << endl;
    cin >> age;
    
    if(age >= 21){
        cout << "Here have a beer" << endl;
    }
    else if(age >= 16){
        cout << "At least you can drive" << endl;
    }
    else{
        cout << "Here have a coke!" << endl;
    }
    
    cout << "Thanks for coming to our pub." << endl;
    
    
    return 0;
}
