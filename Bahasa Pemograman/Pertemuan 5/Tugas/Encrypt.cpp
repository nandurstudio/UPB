#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <vector>

std::string base64_encode(const std::string &input) {
    const std::string base64_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    std::string encoded;
    int val = 0, valb = -6;
    for (char c : input) {
        val = (val << 8) + c;
        valb += 8;
        while (valb >= 0) {
            encoded.push_back(base64_chars[(val >> valb) & 0x3F]);
            valb -= 6;
        }
    }
    if (valb > -6) {
        encoded.push_back(base64_chars[((val << 8) >> (valb + 8)) & 0x3F]);
    }
    while (encoded.size() % 4) {
        encoded.push_back('=');
    }
    return encoded;
}

int main() {
    std::string input_text="";
    std::string text = "Hello, this is a secret message!";
    std::cout << "Teks to encrypt: ";
    std::cin >> input_text;
    std::string encrypted = base64_encode(input_text);
    std::cout << "Encrypted: " << encrypted << std::endl;
    return 0;
}
