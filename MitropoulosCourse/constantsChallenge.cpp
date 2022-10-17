#include <iostream>
using namespace std;

int main(){
    int numSmallRooms = 0;
    int numLargeRooms = 0;
    
    cout << "Enter thow many small rooms would you like to clean: " << endl;
    cin >> numSmallRooms;
    cout << "Enter how many large rooms would you like to clean:  " << endl;
    cin >> numLargeRooms;
    
    const int costPerSmallRoom {25};
    const int costPerLargeRoom {35};
    const double salesTax {0.06};
    const int validityPeriod {30}; //days
    
    int pricePerSmallRoom = numSmallRooms * costPerSmallRoom;
    int pricePerLargeRoom = numLargeRooms * costPerLargeRoom;
    int subtotal = pricePerLargeRoom + pricePerSmallRoom;
    double tax = subtotal * salesTax;
    double total = subtotal + tax;
    
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << numSmallRooms << endl;
    cout << "Number of large rooms: " << numLargeRooms << endl;
    cout << "Price per small room: $" << costPerSmallRoom << endl;
    cout << "Price per large room: $" << costPerLargeRoom << endl;
    cout << "Cost: $" << subtotal << endl;
    cout << "Tax: $" << tax << endl;
    cout << "==============================================" << endl;
    cout << "Total estimate: $" << total << endl;
    cout << "This estimate is valid for " << validityPeriod << " days" << endl;
    
    
    
    return 0;
}
