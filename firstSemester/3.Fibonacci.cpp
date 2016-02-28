/*Отношение последующего к предыдущему и предыдущего к последующему для первых 40 чисел Фибоначчи.*/
#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float m[39], pred, posl; // зачем массив????
	cout << "Последующего к предыдущему       Предыдущего к последующему" << "\n";
	cout << "                   1                   1                  " << "\n";
	m[0] = 1;
	m[1] = 1;
	for (int i = 2; i < 39; i++){
		m[i] = m[i - 1] + m[i - 2];
		posl = m[i] / m[i - 1];
		pred = m[i - 1] / m[i];
		cout << setw(20) << setprecision(8) << posl << setw(19) << fixed << setprecision(8) << " " << pred << "\n";}
	return 0;
}



