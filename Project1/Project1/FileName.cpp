#include <stdio.h>
#include <string.h>
#include <iostream>
#include <Windows.h>
#include <ctime>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
void removeSymbols(char* str, const char* str1) {
    int a = 0;
    int b = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        b = 0;
        for (int j = 0; str1[j] != '\0'; ++j) {
            if (str[i] == str1[j]) {
                b = 1;
                break;

            }
        }
        if (b == 0) {
            str[a] = str[i];
            a++;
        }
    }
    str[a] = '\0';
}

int main() {
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char str[50];
    char str1[10];

    cout << "¬вед≥ть р€док: ";
    cin.getline(str, 50);
    cout << "¬вед≥ть символи €к≥ хочете видаленн€: ";
    cin.getline(str1, 10);
}