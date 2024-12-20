

# **Password Cipher**

## **Description**
The Password Cipher project is a C++ implementation of the **Caesar Cipher**, an encryption algorithm that secures plain text by shifting characters in the alphabet. This project demonstrates the use of object-oriented programming principles to create a class that can **encrypt** and **decrypt** messages efficiently. It provides an introduction to the fundamental concepts of encryption, a critical aspect of computer security.


## **Features**
- **Encrypt Messages**: Converts plain text into unreadable ciphertext by shifting characters in the alphabet.  
- **Decrypt Messages**: Converts ciphertext back into the original plain text using the reverse shift.  
- **Customizable Shift Value**: Allows users to specify the number of positions to shift in the encryption process.  
- **Input Validation**: Ensures only valid inputs are processed, preventing errors during encryption and decryption.


## **Technologies Used**
- **Programming Language**: C++  
- **Paradigm**: Object-Oriented Programming (OOP)  


## **How It Works**
1. **Encryption**:
   - Each character in the plain text is shifted by a specified number of positions in the alphabet.
   - For example, with a shift of 3:
     - Plain text: "HELLO"
     - Ciphertext: "KHOOR"
   - The algorithm wraps around the alphabet, so 'Z' followed by a shift of 1 becomes 'A'.
   
2. **Decryption**:
   - The process is reversed to recover the original plain text from the ciphertext.

---

## **Getting Started**
### **Prerequisites**
- A C++ compiler (e.g., GCC, Clang, or MSVC)
- A development environment (e.g., Visual Studio, VS Code, or CLion)


## **Usage**
1. Run the program and input a message you wish to encrypt.
2. Specify the shift value for the Caesar Cipher.
3. View the encrypted ciphertext.
4. Use the decryption functionality to recover the original plain text.


## **Example**
**Input**:  
Message: `HELLO`  
Shift: `3`  

**Output**:  
Encrypted Message: `KHOOR`  
Decrypted Message: `HELLO`


## **Project Structure**
- **main.cpp**: Contains the main logic to interact with the Password Cipher class.
- **Cipher.h**: Header file defining the Cipher class and its methods.
- **Cipher.cpp**: Implementation of the Cipher class.


## **Learning Outcomes**
- Understand the basics of encryption and decryption using the Caesar Cipher.
- Gain experience with object-oriented programming concepts in C++.
- Explore the importance of ciphers in real-world cybersecurity applications.


## **Future Improvements**
- Add support for non-alphabetic characters to increase the cipher's versatility.
- Implement additional encryption algorithms (e.g., Vigenère Cipher, RSA).
- Create a graphical user interface (GUI) for easier user interaction.

