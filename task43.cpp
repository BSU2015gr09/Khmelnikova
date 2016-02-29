#include <iostream>
#include <clocale>
#include <ctime>
using namespace std;
int *p = nullptr, *p1 = nullptr;
int N = 0;
// задание 
void printTask() 
{
	cout << "Дан массив А(N). Получить массив В(M), включив в него все элементы, в значениях которых есть повторяющиеся цифры." << "\n";
	cout << "Вывести сообщение 'Нет', если требуемых элементов нет." << "\n";
}// рандомная инициализация массива
// инициализация массива рандомно
void randArr() 
{
	for (int i = 0; i < N; i++) {
		*(p + i) = rand(); 
	}
}
// инициализация массива ручным вводом
void vvodArr() 
{

	cout << "Заполните массив числами" << "\n";
	for (int i = 0; i < N; i++) {
		cout << "Введите элемент массива № " << i + 1 << "\n";
		cin >> *(p + i);
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
void search(int &j) 
{
	int a = 0, b = 0, t = 0, num = 0, NUM = 0;
	for (int i = 0; i < N; i++ ) {
	num = *(p + i);
	NUM = *(p + i);
    while(NUM != 0){
        a = NUM % 10;
		num = NUM / 10;
        while(num != 0){ 
            b = num%10;
            if(a == b){
				if(p[i] != p1[j - 1]){
				p1[j] = p[i];
				j++;
				}
			}
			num/=10;
		}
        NUM/=10;
    }
	}
}
void outputP1()
{
	int j = 0;
	search(j);
	if (j) {
		cout << "Числа, у которых есть повторяющиеся цифры: " << "\n";
		for (int i = 0; i < j; i++) {
			cout << *(p1 + i) << "\n";
		}
	}
	else cout << "Таких чисел нет!" << "\n";
}

int main() 
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int k = 0, j = 0;
	cout << "Введите размер массива: " << "\n";
	cin >> N;
	p = new int [N];
	p1 = new int [N];
	while (1){
		cout << "Выберети действие: " << "\n";
		cout << "1 - респечатать задание" << "\n";
		cout << "2 - рандомная инициализация массива " << "\n";
		cout << "3 - инициализация массива вручную " << "\n";
		cout << "4 - вывод массива " << "\n";
		cout << "5 - вывод массива чисел с повторяющимися цифрами " << "\n";
		cout << "0 - выход" << "\n";
		cin >> k;
	switch(k) {
	case 1: printTask(); break;
	case 2: randArr(); break;
	case 3: vvodArr(); break;
	case 4: output(); break;
	case 5: outputP1();break;
	case 0: return 1;
	default: cout << "Неверный ввод!" << "\n";
	}
	}
}