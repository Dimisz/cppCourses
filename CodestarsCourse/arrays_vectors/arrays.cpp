#include <iostream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 5;
    int my_array[ARRAY_SIZE];
    
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        my_array[i] = i * 5;
    }
    
//    for(int i = 0; i < ARRAY_SIZE; i++)
//    {
//        cout << "Element at index " << i << ": " << my_array[i] << endl;
//    }
    // for - each loop
    for(int num : my_array)
    {
        cout << num << endl;
    }
    
//    string names[4]{ "Bob", "Sally", "John", "Ed" };
//    for(int i = 0; i < 4; i++)
//    {
//        cout << names[i] << endl;
//    }
//
    return 0;
}
