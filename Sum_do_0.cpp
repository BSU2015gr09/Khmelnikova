/*Сумма цифр числа до певого встреченного нуля*/
#include <iostream>
#include <clocale>
#include <stdlib.h>
using std::cout;
using std::cin;
int main()
{
setlocale(LC_ALL, "Russian");
long int a = 0, y=0,s=0;
cout << "Введите число:" << "\n";
cin >> a ;
while (a % 10!= 0) {
y = a % 10;	
s = s+y;
a = a / 10;
    }
    cout << "Сумма цифр до нуля равна: " << s  << "\n";
    
 return 0;
}

