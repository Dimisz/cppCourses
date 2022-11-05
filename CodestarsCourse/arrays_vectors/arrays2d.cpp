#include <iostream>

using namespace std;

int main()
{
    int myArray[3][4] = {
        {1, 2, 3, 4},
        {2, 3, 4, 5},
        {3, 4, 5, 6}
    };
    
    for(int i = 2; i >= 0; i--)
    {
        for(int j = 3; j >= 0; j--)
        {
            cout << myArray[i][j] << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}
