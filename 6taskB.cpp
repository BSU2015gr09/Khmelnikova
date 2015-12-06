/*В программе объявлен массив А целых элементов (размер массива 10). 
Пользователь вводит массив c клавиатуры. Потом распечатываем массив. Вводим число N < 10. 
Затем удаляем N-ый элемент массива (сдвигая остальные элементы).*/
#include <iostream>
#include <clocale>
using namespace std;
void mas (int const N, int A[]) {
	for (int i=0; i<N; i++) {
		cout << "Введите элемент массива " << "\n";
		cin >> A[i];
	}
}
void output (int const N, int A[]) {
	for (int i=0; i<N; i++) {
		cout << A[i] << "  ";
	}
}
void del(int const N, int A[], int num) {
	for (int i=num; i<N; i++) {
		A[i]=A[i+1];
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	int const N = 10;
	int A[N];
	int num;
	mas(N, A);// Заполнение массива с клавиатуры
	cout << "Массив:  " << "\n";
	output(N, A); // Вывод массива
	cout << "\n" << "Введите число (<10)" << "\n";
	cin >> num; // Вводим число N < 10.
	if (num < 10) {
		del(N, A, num);//Удаляем N-ый элемент массива (сдвигая остальные элементы).
		output(N, A);// Вывод массива
		cout << "\n";
	}
	else cout << "Введите другое число!" << "\n";
}