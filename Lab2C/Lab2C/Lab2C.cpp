﻿/* Задано дійсні позитивні числа a, b, c. 
   Якщо існує трикутник зі сторонами a, b, c, то:
   визначити його вид (прямокутний, гострокутний або тупокутний)
   і особливості (рівносторонній, рівнобедрений, різносторонній)
*/
#include <math.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a;  // сторона a
    float b;  // сторона b
    float c;  // сторона с
    cout << "Введите a (действительное положительное число): "; cin >> a;
    cout << "Введите b (действительное положительное число): "; cin >> b;
    cout << "Введите с (действительное положительное число): "; cin >> c;

    if (a > 0 && b > 0 && c > 0)
    {
        if (a + b <= c || a + c <= b || b + c <= a)
        {
            cout << "Треугольник никакой" << endl;
        }
        else
        {
            if (a == b && b == c)
            {
                cout << "Треугольник равносторонний остроугольный" << endl;
            }
            else
            {
                if (a == b || a == c || c == b)
                {
                    if (pow (a, 2) + pow (b, 2) == pow (c, 2)  ||  pow (a, 2) + pow (c, 2) == pow (b, 2)  ||  pow (c, 2) + pow (b, 2) == pow (a, 2))
                    {
                        cout << "Треугольник равнобедренный прямоугольный" << endl;  //невозможно задать цифрой, так как гипотенуза = катет * sqrt (2)
                    }
                    else
                    {
                        if (pow (a, 2) + pow (b, 2) > pow (c, 2)  &&  pow(a, 2) + pow(c, 2) > pow(b, 2)  &&  pow(c, 2) + pow(b, 2) > pow(a, 2))
                        {
                            cout << "Треугольник равнобедренный остроугольный" << endl;
                        }
                        else
                        {
                            cout << "Треугольник равнобедренный тупоугольный" << endl;
                        }
                    }
                }
                else
                {
                    if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(c, 2) + pow(b, 2) == pow(a, 2))
                    {
                        cout << "Треугольник разносторонний прямоугольный" << endl;
                    }
                    else
                    {
                        if (pow(a, 2) + pow(b, 2) > pow(c, 2) && pow(a, 2) + pow(c, 2) > pow(b, 2) && pow(c, 2) + pow(b, 2) > pow(a, 2))
                        {
                            cout << "Треугольник разносторонний остроугольный" << endl;
                        }
                        else
                        {
                            cout << "Треугольник разносторонний тупоугольный" << endl;
                        }
                    }
                }
            }
        }
    }
    else
    {
        cout << "Ошибка введения чисел!" << endl;
    }
    
    system("pause");
}