/*Ввести число, вывести его наибольшую цифру и её позицию*/
#include <iostream>
#include <clocale>
using std:: cout;
using std:: cin;
int main(){
	setlocale(LC_ALL, "Russian");
	int a=0,max=0,number=0,ost=0,i=0,pos=0;
    cout << "Введите число ";
    cin>>a;
	number=a; 
		while(number>0){
			ost=number%10;
			if (ost>max){
				max=ost;}
		number=number/10;}
			while (i!=max){
				i=a%10; 
				pos++;
				a=a/10;
				}
            cout << "Наибольшая цифра " << max << "\n";
            cout << "Её позиция, считая справа " << pos << "\n";  
    return 0;
}