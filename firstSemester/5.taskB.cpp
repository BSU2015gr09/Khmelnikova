#include <iostream>
#include <clocale>
using std:: cout;
using std:: cin;
/*В программе объявлен массив целых чисел фиксированной "емкости" N. Пользователь вводит массив, затем пользователь вводит число, 
если такое число есть - то печатается его индекс, если такого числа нет об этом сообщается пользова- телю.
При выполнении задания надо написать функцию, осуществляющую поиск в массиве. Она возвращает первый индекс, если таких чисел несколько, 
и -1 если такого числа нет.*/
void mas(const int N, int A[]) {
	for (int i=0; i<N; i++) {
	cout << "Введите элемент массива под номером " << i << "\n";
	cin >> A[i];
	}
} 
void output (const int N, int A[]) {
	mas(N, A);
	for (int i=0; i<N; i++) {
		cout << A[i] << "\n";
	}
}
void index(const int N, int A[]) {
	int num, a=-1;
	cout << "Введите число" << "\n";
	cin >> num;
	for (int i=0; i<N; i++) {
		if (num == A[i]) {
		a=i;
		break;}
	}
	cout << a << "\n";
}
int main() {
	setlocale(LC_ALL, "Russian");
	const int N=10;
	int A[N];
	output(N, A);
	index(N, A);
}