/*48. В массиве А(N,M) переставить строки в порядке возрастания элементов последнего столбца.*/
#include <iostream>
#include <cstring>
#include <clocale>
#include <ctime>
#include <iomanip>
using namespace std;
int N = 0;
int M = 0;
//напечатать задание
void printTask() 
{
	cout << "48. В массиве А(N,M) переставить строки в порядке возрастания элементов последнего столбца. " << "\n"; 
}
//Выделение памяти
int** getmem() {
	
    int **A = nullptr;
	try {
		A = new int *[N]; }
	catch (...) {
		cout << "No memory" << "\n";
	}
	for (int i = 0; i < N; i++) {
		try {
			*(A+i) = new int [M];
		}
		catch(...) { 
			cout << "No memory" << "\n";
		}
	}
	return A;

}
//Инициализация массива рандомным способом
void randomArray(int **A) 
{
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++) {
			A[i][j] = rand()%100;
		}
	}
}
//Инициализация массива вручную
void enterArray(int **A) 
{
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++) {
			cin >> A[i][j];
		}
	}
}
//Вывод массива 
void output(int** A) 
{
	for (int i = 0; i < N ; i++){
		for (int j = 0; j < M; j++) {
			cout << setw(3)<< A[i][j] ;
		}
		cout << "\n";
	}
}
//Меняет строки местами
void swapStrings(int j, int** A) {
			int* tmp; 
			tmp = A[j];
			A[j] = A[j + 1];
			A[j + 1] = tmp;

}
//Расставляет по возрастанию
void elementsIncrease(int** A) 
{
	int *p  = new int [N];
	for (int i = 0; i < N; i++) {// массив из элементов последнего столбца
			*(p+i) = A[i][M - 1];
	}
	for (int i = 0; i < N; i++){// сортировка по возрастанию
		for (int j = 0; j < N - i - 1; j++) {
			if (*(p + j) > *(p + j + 1)) {
			int tmp1 = *(p + j);
			*(p + j) = *(p + j + 1);
			*(p + j + 1) = tmp1;
			swapStrings(j, A);
			}
		}
	}
	delete []p;

}
//Освобождения памяти 
void freemem(int** A) {
	for (int i = 0; i < N; i++) {
		delete []*(A+i);
		
	}
	delete []A;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int **A = nullptr;
	int k = 0;
		cout << "Выберети действие: " << "\n";
		cout << "1 - респечатать задание" << "\n";
		cout << "2 - ввести размерность массива" << "\n";
		cout << "0 - выход" << "\n";
		cin >> k;
	switch(k) {
	case 1: printTask(); break;
	case 2: 
		cout << "Введите размерность массива " << "\n";
		cout << "Введите N " << "\n";
		cin >> N;
		cout << "Введите M " << "\n";
		cin >> M;
		A = getmem();
		int k1;
		while (1){
		cout << "Выберети действие: " << "\n";
		cout << "1 - ввести массив" << "\n";
		cout << "2 - рандомная инициализация массива" << "\n";
		cout << "3 - вывести массив" << "\n";
		cout << "4 - выполнить задание " << "\n";
		cout << "0 - выход" << "\n";
		cin >> k1;
		switch(k1){
			case 1: enterArray(A); break;
			case 2: randomArray(A); break;
			case 3: output(A); break;
			case 4: elementsIncrease(A);
				cout << "Массив со строками, стоящими в порядке возрастания элементов последнего столбца:" << "\n";
				output(A); break;
			case 0: freemem(A); return 1;
		}
		}

		; break;
	case 0: return 1;
	default: cout << "Неверный ввод!" << "\n";
	}
}
