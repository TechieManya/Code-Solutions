#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    // converts into lowercase to ignore case sensitivity
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); // Convert uppercase to lowercase
        }
    }

    int start = 0, end = str.length() - 1;
    while (start < end) {
        // Skip spaces
        if (str[start] == ' ') {
            start++;
        } else if (str[end] == ' ') {
            end--;
        } else {
            // Compare characters
            if (str[start] != str[end]) {
                cout << "This string is not a palindrome!" << endl;
                return 0;
            }
            start++;
            end--;
        }
    }

    cout << "This string is a palindrome!" << endl;
    return 0;
}
