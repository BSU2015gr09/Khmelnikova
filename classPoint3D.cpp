//Точка в пространстве
#include <iostream>
#include <fstream>
#include <clocale>
using namespace std;
class point
{
private:
	float x;
	float y;
	float z;
public:
	point();
	point(float, float, float);
	point(const point&);
	point(float);
	point operator+(const point&);
	point operator+(float);
	point operator*(const point&);
	point operator=(const point&);
	friend ostream& operator<<(ostream&, const point&);
	friend istream& operator>>(istream&, point&);
	~point();
};
int main() {
	setlocale(LC_ALL, "Russian");
	point A(5, 10, 7);
	point B;
	point C = A;
	C = { 1, 2, 3 };
	cout << "Введите координаты точки A\n";	
	cin >> A;
	cout << "A" << A;
	cout << "Введите координаты точки B\n";
	cin >> B;
	cout << "B" << B;
	C = A + B;
	cout << "A + B = C\n";
	cout << "С" << C << "\n";
	C = C + 5;
	cout << "C = C + 5\n";
	cout << "С" << C << "\n";
	cout << "A" << A;
	cout << "B" << B;
	C = A * B;
	cout << "A * B = C\n";
	cout << "С" << C << "\n";
	
}
point::point() : x(0), y(0), z(0)
{
}
point::point(float a, float b, float c)
{
	this->x = a;
	this->y = b;
	this->z = c;
}

point::point(const point & A)
{
	this->x = A.x;
	this->y = A.y;
	this->z = A.z;

}

point point::operator+(const point & A)
{
	point tmp;
	tmp.x = this->x + A.x;
	tmp.y = this->y + A.y;
	tmp.z = this->z + A.z;

	return tmp;
}

point point::operator+(float a)
{
	this->x += a;
	this->y += a;
	this->z += a;
	return *this;
}
point point::operator*(const point & A)
{
	point tmp;
	tmp.x = this->x * A.x;
	tmp.y = this->y * A.y;
	tmp.z = this->z * A.z;

	return tmp;
}

point point::operator=(const point & A)
{
	this->x = A.x;
	this->y = A.y;
	this->z = A.z;
	return *this;
}

ostream & operator << (ostream &out, const point &A)
{
	out << "(" << A.x << "," << A.y << "," << A.z  << ")" << endl;
	return out;
}

istream & operator >> (istream &in, point &A)
{
	cout << "Введите координату X\n";
	cin >> A.x;
	cout << "Введите координату Y\n";
	cin >> A.y;
	cout << "Введите координату Z\n";
	cin >> A.z;
	return in;
}

point::point(float a)
{
	this->x = a;
	this->y = a;
	this->z = a;
}

point::~point()
{
}
