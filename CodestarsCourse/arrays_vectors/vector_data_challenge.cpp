#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> nums;
    int user_num = 0;
    
    while(user_num >= 0)
    {
        cout << "Enter a number you want to save ";
        cout << "or enter a negative number to quit: ";
        cin >> user_num;
        if(user_num >= 0) nums.push_back(user_num);
    }
    
    
    cout << "Your numbers multiplied by 2 are: " << endl;
    for(int num : nums)
    {
        cout << num * 2 << " ";
    }
    cout << endl;
    
    return 0;
}
