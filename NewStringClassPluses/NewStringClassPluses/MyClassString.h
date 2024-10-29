#pragma once
#include<iostream>
#include<vector>


class String {
public:
    char input[80];

    void Input() {
        //Під час написання тексту потрібно вставити пропуск. Приклад:" Hello World!".
        std::cout << "Input the string:\n";
        std::cin.ignore();  // Clear the input buffer
        std::cin.getline(input, 80);

        std::cout << " - - - - - - - - - - - - - - - - - - - - - - - - - " << std::endl;
        std::cout << "Output:" << std::endl;
        std::cout << input << "\n";
        std::cout << " - - - - - - - - - - - - - - - - - - - - - - - - - " << std::endl;

        char findChar;
        std::cout << "Enter the character to find: ";
        std::cin >> findChar;

        int index = FindCharacter(findChar);
        if (index != -1) {
            std::cout << "Character " << findChar << " found at index " << index << std::endl;
        }
        else {
            std::cout << "Character not found." << std::endl;
        }
    }

    int FindCharacter(char c) {
        for (int i = 0; i <= strlen(input); ++i) {
            if (input[i] == c) {
                return i;
            }
        }
        return -1;
    }
};

