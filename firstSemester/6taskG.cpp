/*В программе объявлен массив А элементов типа char (размер массива 20). 
Пользователь вводит массив c клавиатуры. 
Затем заменяем последнюю встреченную в массиве букву Z на букву F.*/
#include <iostream>
#include <clocale>
using namespace std;
void mas (int const N, char A[]) {
	for (int i=0; i<N; i++) {
		cout << "Введите элемент массива " << "\n";
		cin >> A[i];
	}
}
void output (int const N, char A[]) {
	for (int i=0; i<N; i++) {
		cout << A[i] << "  ";
	}
}
void exch (int const N, char A[]) {
	int k=0;
	for (int i=N-1; i>0; i--) {
		if (A[i] == 'Z') {
			A[i] = 'F';
			k++;
			break;
		}
	}
	cout << "\n\n";
	if (!k) {
	cout << "В массиве нет символа 'Z' " << "\n";}
	else
	output(N, A);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int const N = 20;
	char A[N];
	mas(N, A); // Заполнение массива с клавиатуры
	cout << "Массив:  " << "\n";
	output(N, A); // Вывод массива

	exch(N, A); // Замена последней встреченной в массиве буквы Z на букву F
}