﻿#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int* pa = &a;
    int* pb = &b;
    
    // элементы а и b меняются местами
    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    //определение максимальной переменной
    if (*pb > *pa)
        *pb = *pb + 2 + *pa; //увеличение максимальной переменной на 2 и прибавление минимальной
    else
        *pa = *pa + 2 + *pb; //увеличение максимальной переменной на 2 и прибавление минимальной

    cout << "a = " << a << " b = " << b;
}