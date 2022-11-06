#include <iostream>

using namespace std;

int main(){
    int my_array[5];
    
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter integer number " << i + 1 << ": ";
        cin >> my_array[i];
    }
    
    for(int i = 0; i < 5; i++)
    {
        cout << my_array[i] * 2 << " ";
    }
    cout << endl;
    
    return 0;
}
