#include <iostream>
#include <string>

bool isPalindrome(const std::string &word) {
    int left = 0;
    int right = word.length() - 1;

    while (left < right) {
        if (word[left] != word[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    std::string slowo;
    std::cout << "Podaj slowo: ";
    std::cin >> slowo;

    if (isPalindrome(slowo)) {
        std::cout << slowo << " jest palindromem." << std::endl;
    }
    else {
        std::cout << slowo << " nie jest palindromem." << std::endl;
    }

    return 0;
}
