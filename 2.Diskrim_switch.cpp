/*������ ���������� ���������. ������������ ����������� switch-case*/
#include <iostream>
#include <clocale>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double  a=0, b=0, c=0, dis=0, a1=0, a2=0;

	cout << "������� a ";
		cin >> a;
	cout << "������� b ";
	    cin >> b;
	cout << "������� c ";
	    cin >> c;
	dis=(b*b)-(4*a*c);
	switch ((int)a){
	case 0: 
		switch ((int)b){
		case 0: cout << "�������� ����� ��������� �������� ����� �����" << "\n"; break;
		default: a1=(-c)/b; cout << "������ ���������: " << a1 << "\n"; break; }; break;
	default: 
		switch ((int)dis){
		case 0: a1=(-b)/(2*a); cout << "���������� ������������ ������: "<< a1 << "\n"; break;
		default: if (dis>0){
			dis=sqrt(dis);
		a1=((-b)-dis)/(2*a);
		a2=((-b)+dis)/(2*a);
		cout << "������ ������ ���������: "<< a1 << "\n" << "������ ������ ���������: " << a2 << "\n";}
				 if (dis<0){
		cout << "������ ������ ���������: " << (-b)/2 << "+" << (sqrt(-dis))/2 << "*i"  << "\n"; 
		cout << "������ ������ ���������:  " << (-b)/2 << "-" << (sqrt(-dis))/2 << "*i" << "\n";} ; break;  }; break;
	}
		return 0;
		}