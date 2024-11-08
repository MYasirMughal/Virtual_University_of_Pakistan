#include <iostream>
#include <string>
using namespace std;

class Part {
public:
    int partID;
    string partName;
    int quantity;
    Part* next;

    Part(int partID, string partName, int quantity) : partID(partID), partName(partName), quantity(quantity), next(nullptr) {}
};

class Inventory {
public:
    Part* head;

    Inventory() : head(nullptr) {}

    // TODO: Implement the addPart function
    void addPart(int partID, string partName, int quantity) {
        // Write your code here
    }

    // TODO: Implement the deletePart function
    void deletePart(int partID) {
        // Write your code here
    }

    // TODO: Implement the updateQuantity function
    void updateQuantity(int partID, int newQuantity) {
        // Write your code here
    }

    // TODO: Implement the findPart function
    void findPart(int partID) {
        // Write your code here
    }

    void printInventory() {
        cout << "Part ID    Part Name         Quantity" << endl;
        cout << "-------------------------------------" << endl;
        Part* current = head;
        while (current != nullptr) {
            cout << current->partID << "         " << current->partName;
            cout << "                " << current->quantity << endl;
            current = current->next;
        }
        cout << endl; // For better spacing after the list
    }
};

int main() {
    cout << "----------------------------------------------" << endl;
    cout << "Computer Parts Management System [BCxxxxxxxxx]" << endl; // Just Change your ID here in brackets.
    cout << "----------------------------------------------" << endl;
    
    Inventory storeInventory;

    // Pre-populated data for demonstration
    storeInventory.addPart(101, "SSD", 25);
    storeInventory.addPart(102, "RAM", 40);
    storeInventory.addPart(103, "HDD", 15);

    cout << endl <<"Inventory Added." << endl;
    storeInventory.printInventory();  // Print initial inventory

    cout << "Finding Part ID 101:" << endl;
    storeInventory.findPart(101);     // Test finding part with ID 101
    cout << endl;

    cout << "After deleting SSD and Updating RAM Quantity..." << endl <<endl;

    storeInventory.deletePart(101);  // Delete part with ID 101
    storeInventory.updateQuantity(102, 50); // Update quantity for RAM

    storeInventory.printInventory();  // Print updated inventory

    return 0;
}

