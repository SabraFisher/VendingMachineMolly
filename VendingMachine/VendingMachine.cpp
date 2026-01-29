#include <iostream>
using namespace std;

int main()
{
    int choice;
    do {
        cout << "VendByMo Menu:\n  1. Chips\n  2. Candy\n  3. Soda\n  4. Gum\n  5. Water\n  6. Mint\n  7. Cookie\n  8. Exit\n\nEnter your choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nINVALID INPUT: Please enter a numeric value(1-8).\n" << endl;
            continue;
        }

        switch (choice) {
        case 1:
            cout << "\nEnjoy your Chips!\n" << endl;
            break;
        case 2:
            cout << "\nEnjoy your Candy!\n" << endl;
            break;
        case 3:
            cout << "\nEnjoy your Soda!\n" << endl;
            break;
        case 4:
            cout << "\nEnjoy your Gum!\n" << endl;
            break;
        case 5:
            cout << "\nEnjoy your Water!\n" << endl;
            break;
        case 6:
            cout << "\nEnjoy your Mint!\n" << endl;
            break;
        case 7:
            cout << "\nEnjoy your Cookie!\n" << endl;
            break;
        case 8:
            cout << "\nGoodbye!\n" << endl;
            break;
        default:
            cout << "\nINVALID CHOICE: Please choose a number (1-8).\n" << endl;
			break;
        }
    } while (choice != 8);
    cout << "\nThank you for Choosing VendByMo!" << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
