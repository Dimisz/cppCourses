#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vector1 {};
    vector<int> vector2 {};
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "vector2 contains: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "Size of vector2: " << vector2.size() << endl;
    
    vector<vector <int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "First element of vector_2d: " << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    
    cout << "Second element of vector_2d: " << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
    
    
    return 0;
}
