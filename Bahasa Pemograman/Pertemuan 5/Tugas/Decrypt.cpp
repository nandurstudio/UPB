#include <iostream>
#include <string>
#include <vector>

std::string base64_decode(const std::string &input) {
    const std::string base64_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    std::string decoded;
    int val = 0, valb = -8;
    for (char c : input) {
        if (c == '=') {
            break;
        }
        val = (val << 6) + base64_chars.find(c);
        valb += 6;
        if (valb >= 0) {
            decoded.push_back(char((val >> valb) & 0xFF));
            valb -= 8;
        }
    }
    return decoded;
}

int main() {
    std::string input_teks="";
    std::cout << "Masukkan encrypted teks: ";
    std::cin >> input_teks;
    std::string encrypted = input_teks;
    std::string decrypted = base64_decode(encrypted);
    std::cout << "Decrypted: " << decrypted << std::endl;
    return 0;
}
