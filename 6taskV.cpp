/*В программе объявлен массив А элементов типа char (размер массива 20). Пользователь вводит массив c клавиатуры. 
Затем ищем в массиве какая буква встречается чаще всего. Ее выводим на экран.*/
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
void element(int const N, char A[]) {
	int  maxcount=1, num=0;
	int count = 0;
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			if (A[i] == A[j] && i!=j) {
				count++;
			}
			if (count > maxcount) {
				maxcount = count;
				count = 0;
				num = i;
			}
		}
	}
	if (num > 0) {
		cout << "\n" << "Чаще всего встречается буква " << A[num] << "\n" ;//можно было напечатать и сколько раз она встретилась )))
	}
	else 
		cout << "\n" << "В массиве нет повторяющихся элементов " << "\n";
}
int main() {
	setlocale(LC_ALL, "Russian");
	int const N = 20;
	char A[N];
	mas(N, A); // Заполнение массива с клавиатуры
	cout << "Массив:  " << "\n";
	output(N, A); // Вывод массива
	element(N, A);// Ищем в массиве какая буква встречается чаще всего
}
