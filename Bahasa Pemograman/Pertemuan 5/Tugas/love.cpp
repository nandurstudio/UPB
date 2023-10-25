#include <iostream>
int main() {
    int n = 100;
    for (int i = n / 2; i <= n; i += 2) {
        for (int j = 1; j < n - i; j += 2) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= (i * 2) - 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
