/*Линейный конгруэнтный генератор псевдослучайных чисел*/
#include <iostream>
#include <clocale>
#include <iomanip>
using std:: cout;
using std:: cin;
int main(){
	setlocale(LC_ALL,"Russian");
int a=4096, c=150889, m=714025, i=0;
int mas[21];
mas[0]=1;
for (i; i<22; i++){
	mas[i+1]=(a*mas[i] + c)%m;
cout << i << " = " << mas[i] << "\n";}

}
