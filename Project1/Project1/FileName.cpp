#include <stdio.h>
#include <string.h>
#include <iostream>
#include <Windows.h>
#include <ctime>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main() {
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char str[50];
    char str1[10];

    cout << "������ �����: ";
    cin.getline(str, 50);
    cout << "������ ������� �� ������ ���������: ";
    cin.getline(str1, 10);
}