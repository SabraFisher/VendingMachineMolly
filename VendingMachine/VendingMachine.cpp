#include <iostream>
using namespace std;

int main()
{
    int choice;
    do {
        cout << "VendByMo Menu:\n  1. Chips\n  2. Candy\n  3. Soda\n  4. Gum\n  5. Water\n  6. Mint\n  7. Cookie\n  8. Exit\n\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enjoy your chips!" << endl;
            break;
        case 2:
            cout << "Enjoy your Candy!" << endl;
            break;
        case 3:
            cout << "Enjoy your Soda!" << endl;
            break;
        case 4:
            cout << "Enjoy your Gum!" << endl;
            break;
        case 5:
            cout << "Enjoy your Water!" << endl;
            break;
        case 6:
            cout << "Enjoy your Mint!" << endl;
            break;
        case 7:
            cout << "Enjoy your Cookie!" << endl;
            break;
        case 8:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 8);
    cout << "Thank you for Choosing VendByMo!" << endl;
    return 0;
}
