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
    std::string word;
    std::cout << "Podaj slowo: ";
    std::cin >> word;

    if (isPalindrome(word)) {
        std::cout << word << " jest palindromem." << std::endl;
    }
    else {
        std::cout << word << " nie jest palindromem." << std::endl;
    }

    return 0;
}
