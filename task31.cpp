#include <iostream>
#include <clocale>
#include <ctime>
using namespace std;
int *p = nullptr;
int N = 0;
// задание
void printTask() 
{
	cout << "31.(7-8)В массиве А(N) встречаются лишь числа от 1 до 20." << "\n";
	cout << " Упорядочить элементы массива в порядке частоты встречаемости чисел." << "\n";
}
// рандомная инициализация массива
void randArr() 
{
	for (int i = 0; i < N; i++) {
		*(p + i) = rand()%20 + 1; 
	}
}
// инициализация массива ручным вводом
void vvodArr() 
{

	cout << "Заполните массив числами" << "\n";
	for (int i = 0; i < N; i++) {
		cout << "Введите элемент массива № " << i + 1 << "\n";
		cin >> *(p + i);
		if ( *(p+i) < 1 || *(p+i) > 20){
			cout << "Числа должны быть от 1 до 20!" << "\n";
			break;
		}
	}
}
// вывод массива
void output()
{
	for (int i = 0; i < N; i++) {
		cout << *(p + i) << "  ";
	}
	cout << "\n";
}
void search() 
{
	int max = 0, max_count = 1, count = 0, n = 0, last_pos = 0, num = 1;
	do {
		max_count = 1;
	for (int i = last_pos; i < N; i++){
		for (int j = i; j < N; j++) {
			if(*(p+i) == *(p+j) && i!=j) {
				count++;
			}
		}
		if (max_count < count){
				max = *(p+i);
				max_count = count;
				}
		
				count = 1;
	}
	for (int i = last_pos; i < N; i++) {
		if(*(p+i) == max) {
				int tmp = *(p+i);
				*(p+i) = *(p+n);
				*(p+n) = tmp;
				n++;
		}
	}
	last_pos = last_pos + max_count;
	num++;
	}
	while( num <= N);
	cout << "Упорядоченный массив: " << "\n";
	output();
}
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	cout << "Введите размер массива " << "\n";
	cin >> N;
	p = new int [N];
	int k = 0;
	while (1){
		cout << "Выберети действие: " << "\n";
		cout << "1 - респечатать задание" << "\n";
		cout << "2 - рандомная инициализация массива " << "\n";
		cout << "3 - инициализация массива вручную " << "\n";
		cout << "4 - вывод массива " << "\n";
		cout << "5 - упорядочить элементы массива в порядке частоты встречаемости чисел" << "\n";
		cout << "0 - выход" << "\n";
		cin >> k;
	switch(k) {
	case 1: printTask(); break;
	case 2: randArr(); break;
	case 3: vvodArr(); break;
	case 4: output(); break;
	case 5: search(); break;
	case 0: return 1;
	default: cout << "Неверный ввод!" << "\n";	
	}
	}
}