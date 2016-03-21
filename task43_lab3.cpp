#include <iostream>
#include <cstring>
#include <clocale>
#include <fstream>
using namespace std;
const int N = 1000;
char* str = nullptr;
char* tmp = nullptr;
//напечатать задание
void printTask() 
{
	cout << "Определить, сколько слов в строке содержат хотя бы одну букву a(английскую). " << "\n";
	cout << " Вывести такие слова на экран." << "\n";
}
//ввести строку
void enterString()
{
	cout << "Введите строку" << "\n";
	cin.get();
	cin.getline(str, N);
}
//произвольная строка с разделительными знаками 
void randomString()
{
	str = "January,February;March,April,May!June,July,August:September,October,November,December.";
}
//добавляется строка из файла 
void fileString()
{
	ifstream myfile("file.txt");
	myfile.getline(str, N);
}
// вывод строки
void output() 
{
	cout << "Ваша строка: " << "\n";
	cout << str << "\n";
}
//поиск буквы 'а'(английской) и подсчет слов с этой буквой
void searchA(int len, int tmplen, int &count) {
	char* slovo = nullptr;
	slovo = new char [N];// строка, в которой будут храниться слова по отдельности 
	strncpy(slovo, str+tmplen, len);// заполнение строки словом 
	slovo[len]='\0';
	char *symbol = nullptr;
	symbol = strchr(slovo, 'a');// поиск буквы а (английской)
	if (symbol!=NULL) {
		cout << slovo << "\n";
		count++;
	}
}
// разделение строки на слова
void slova() 
{
	char razdel[]=". ?,!:;";
	int count = 0, tmplen = 0, len = 0;
	tmp = str;
	do {
		len = strcspn(tmp, razdel);
		searchA(len, tmplen, count);
		tmplen=tmplen + len + 1; // начало нового слова
		tmp = tmp + len + 1;// конец слова
	} while(*tmp);
	cout << "Количество слов с буквой 'а' : " << count << "\n";
}

int main() 
{
	setlocale(LC_ALL, "Russian");
	str = new char [N];
	while(1) {
	int k = 0;
		cout << "Выберети действие: " << "\n";
		cout << "1 - респечатать задание" << "\n";
		cout << "2 - ввести строку " << "\n";
		cout << "3 - взять стандартную строку " << "\n";
		cout << "4 - строка из файла " << "\n";
		cout << "5 - вывести строку " << "\n";
		cout << "6 - выполнить задание" << "\n";
		cout << "0 - выход" << "\n";
		cin >> k;
	switch(k) {
	case 1: printTask(); break;
	case 2: enterString(); break;
	case 3: randomString(); break;
	case 4: fileString(); break;
	case 5: output(); break;
	case 6: slova(); break;
	case 0: return 1;
	default: cout << "Неверный ввод!" << "\n";	
	}
	}
}