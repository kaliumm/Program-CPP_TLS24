#include <iostream>
#include <string>

using namespace std;

// Function to get the atomic number of the alkali metal based on its name
int getAtomicNumber(const string& metalName) {
    if (metalName == "hydrogen") return 1;
    if (metalName == "lithium") return 3;
    if (metalName == "sodium") return 11;
    if (metalName == "potassium") return 19;
    if (metalName == "rubidium") return 37;
    if (metalName == "cesium") return 55;
    if (metalName == "francium") return 87;
    return -1; // Invalid metal name
}

int main() {
    string metalName;

    cout << "Enter the name of an alkali metal (e.g., Lithium, Sodium): ";
    getline(cin, metalName); // Use getline to read the full line including spaces

    int atomicNumber = getAtomicNumber(metalName);
    
    if (atomicNumber == -1) {
        cout << "The entered name is not a valid alkali metal." << endl;
    } else {
        cout << "The atomic number of " << metalName << " is " << atomicNumber << "." << endl;
    }

    return 0;
}
