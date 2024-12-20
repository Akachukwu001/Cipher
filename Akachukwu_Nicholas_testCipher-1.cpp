/*

Name: Nicholas Akachukwu

NetID: 10166799

Program Description: This program implements a Caesar Cipher that allows users to encode and decode text by shifting letters based on a specified key

*/

#include "Akachukwu_Nicholas_Cipher.h"
#include <iostream>

int main() {
    std::string plainText;
    int shiftKey;

    std::cout << "Let's encode a message!" << std::endl;
    std::cout << "--->Shift Key: ";
    std::cin >> shiftKey;
    std::cin.ignore();

    std::cout << "--->Plain Text: ";
    std::getline(std::cin, plainText);

    Cipher cipher(plainText, shiftKey, false);
    std::cout << "--->Cipher Text: " << cipher.GetCipherText() << std::endl;

    std::cout << "\nNow I am going to take the Cipher Text Above and convert it back to Plain!" << std::endl;
    Cipher decipher(cipher.GetCipherText(), shiftKey, true);
    std::cout << "--->Result: " << decipher.GetPlainText() << std::endl;

    return 0;
}
