#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> names;
    vector<double> weights;
    
    string name;
    double weight;
    
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter a person's name: ";
        getline(cin, name);
        
        cout << "Enter " << name << "'s weight: ";
        cin >> weight;
        cin.get(); // consume newline char
        
        names.push_back(name);
        weights.push_back(weight);
    }
    
    for(int i = 0; i < 5; i++)
    {
        cout << names[i] << " weighs " << weights[i] << " kg." << endl;
    }
    
    return 0;
}
