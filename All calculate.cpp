#include <iostream>
#include<string>
using namespace std;

void distance() {
    float s, t;
    cout << "Enter the speed (in units per time):" << endl;
    cin >> s;
    cout << "Enter the Time (in units of time):" << endl;
    cin >> t;
    
    if (t == 0) {
        cout << "Time cannot be zero." << endl;
        return;
    }

    float result = s * t;
    cout << "The Distance covered is: " << result << endl;
}

void speed() {
    float d, t;
    cout << "Enter the Distance (in units):" << endl;
    cin >> d;
    cout << "Enter the Time (in units of time):" << endl;
    cin >> t;
    
    if (t == 0) {
        cout << "Time cannot be zero." << endl;
        return;
    }

    float result = d / t;
    cout << "The Speed is: " << result << endl;
}

void time() {
    float d, s;
    cout << "Enter the Distance (in units):" << endl;
    cin >> d;
    cout << "Enter the speed (in units per time):" << endl;
    cin >> s;
    
    if (s == 0) {
        cout << "Speed cannot be zero." << endl;
        return;
    }

    float result = d / s;
    cout << "The Time taken is: " << result << endl;
}

int main() {
    int choice = -1; 
    while (choice != 0) {
        cout << "\n1. Calculate Distance\n2. Calculate Speed\n3. Calculate Time\n0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
        case 1:
            distance();
            break;
        case 2:
            speed();
            break;
        case 3:
            time();
            break;
        case 0:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please choose a valid option from the list." << endl;
            break;
        }
    }
    return 0;
}
