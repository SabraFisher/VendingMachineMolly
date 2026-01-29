#include <iostream>
using namespace std;

int main()
{
    int choice;
    do {
        cout << "Menu:\n1. Chips\n2. Candy\n3. Soda\n4. Gum\n5. Water\n6. Mint\n7. Cookie\n8. Exit\n\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enjoy your Chips!" << endl;
            break;
        case 2:
            cout << "Enjoy your Candy!" << endl;
            break;
        case 3:
			cout << "Enjoy your Soda!" << endl;
            break;
        }
    } while (choice != 8);
    cout << "Thank you for Choosing VendByMo!" << endl;
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
