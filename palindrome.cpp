#include <iostream>
using namespace std;

class Palindrome
{
    int num;

    public:
    void input() {
        cout << "Enter a number to check: ";
        cin >> num;
    }

    void check() {
        if(num < 0) {
            cout << num << " is not a palindrome number\n";
        }
        
        int temp = num;  // Preserve original number
        int rev = 0, rem;

        while (temp != 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }

        if (num == rev) {
            cout << num << " is a palindrome number\n";
        } else {
            cout << num << " is not a palindrome number\n";
        }
    }
};

int main() {
    Palindrome pal;
    char choice;

    do {
        pal.input();
        pal.check();
        cout << "Do you want to check another number? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}
