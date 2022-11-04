#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(nullptr));
    
//    int value1 = rand() % 10; // >= 0 && <= 10
//    int value2 = rand() % 10 + 1; // >= 1 && <= 11
//
//    cout << "Value 1: " << value1 << "\tValue 2: " << value2 << endl;
    
    int die;
    
    for(int i = 0; i < 10; i++)
    {
        die = rand() % 6 + 1;
        cout << die << endl;
    }
    
    
    return 0;
}
