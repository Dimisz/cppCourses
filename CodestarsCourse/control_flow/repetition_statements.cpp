#include <iostream>
using namespace std;

int main(){
    
    int count = 0;
    while(count < 10){
        cout << count << endl;
        count++;
    }
    
    cout << endl << endl;
    cout << "Do-while: " << endl;
    // do-while
    int count2 = 10;
    do{
        cout << count2 << endl;
        count2++;
    } while(count2 < 10);
    
    
    cout << endl << endl;
    cout << "for loop: " << endl;
    // for loop
    for(int i = 0; i < 10; i++){
        cout << i << endl;
    }
    
    return 0;
}


