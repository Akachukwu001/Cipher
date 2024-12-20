/*

Name: Nicholas Akachukwu

NetID: 10166799

Program Description: This program implements a Caesar Cipher that allows users to encode and decode text by shifting letters based on a specified key

*/

#pragma once
#include <string>
#include <iostream>
#include <cctype>

class Cipher {
private:
    std::string plaintext;
    std::string ciphertext;
    int key;

    int FindChar(char c) {
        if (isupper(c)) return c - 'A';
        if (islower(c)) return c - 'a';
        return -1;
    }

    char EncodeChar(char c) {
        int index = FindChar(c);
        if (index == -1) return c;
        return isupper(c) ? 'A' + (index + key + 26) % 26 : 'a' + (index + key + 26) % 26;
    }

    void Encode() {
        ciphertext.clear();
        for (char c : plaintext) {
            ciphertext += EncodeChar(c);
        }
    }

    char DecodeChar(char c) {
        int index = FindChar(c);
        if (index == -1) return c;
        return isupper(c) ? 'A' + (index - key + 26) % 26 : 'a' + (index - key + 26) % 26;
    }

    void Decode() {
        plaintext.clear();
        for (char c : ciphertext) {
            plaintext += DecodeChar(c);
        }
    }

public:
    Cipher(const std::string& text, int k, bool isEncrypted) : key(k) {
        if (key == 0) {
            std::cerr << "Key cannot be zero!" << std::endl;
            return;
        }
        if (isEncrypted) {
            ciphertext = text;
            Decode();
        }
        else {
            plaintext = text;
            Encode();
        }
    }

    std::string GetPlainText() {
        return plaintext;
    }

    std::string GetCipherText() {
        return ciphertext;
    }

    int GetKey() {
        return key;
    }

    void SetKey(int newKey) {
        if (newKey == 0) {
            std::cerr << "Key cannot be zero!" << std::endl;
            return;
        }
        key = newKey;
        Encode();
    }

    void ChangeText(const std::string& text, int newKey, bool isEncrypted) {
        if (newKey == 0) {
            std::cerr << "Key cannot be zero!" << std::endl;
            return;
        }
        key = newKey;
        if (isEncrypted) {
            ciphertext = text;
            Decode();
        }
        else {
            plaintext = text;
            Encode();
        }
    }
};
#pragma once
