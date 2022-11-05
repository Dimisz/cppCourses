#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector <int> intVec;
    vector <string> stringVec(3); //size of 3
    
    intVec.push_back(1);
    intVec.push_back(2);
    intVec.push_back(3);
    
    for(int num : intVec)
    {
        cout << num << " ";
    }
    cout << "\nintVec size: " << intVec.size() << endl;
    
    stringVec[0] = "John";
    stringVec[1] = "Bob";
    stringVec[2] = "Frank";
    stringVec.push_back("Mike");
    
    for(string name : stringVec)
    {
        cout << name << " ";
    }
    cout << "\nstringVec size: " << stringVec.size() << endl;
    
    // vector methods
    cout << "Front and back: " << endl;
    cout << "front: " << stringVec.front() << endl;
    cout << "back: " << stringVec.back() << endl;
    
    stringVec.pop_back();
    stringVec.insert(stringVec.begin(), "Don");
    cout << "now front is: " << stringVec.front() << endl;
    cout << "now back is: " << stringVec.back() << endl;
    
    return 0;
}
