#include <iostream>
#include <array>

using namespace std;


int main()
{
    array<int, 10> myIntArray { };
    for(int i = 0; i < myIntArray.size(); i++)
    {
        myIntArray[i] = i * 2;
    }
    
    for(int num: myIntArray)
    {
        cout << num << " ";
    }
    
    cout << endl;
    cout << "Size of array: " << myIntArray.size() << endl;
    return 0;
}
