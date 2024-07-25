
//C++ ���� ,Ŭ���� ������\
 ���� ����

/*
#include <iostream>
using namespace std;

//Ŭ���� �����
class Rectangle {
public:
	int radius;
	Rectangle(); //���ӻ�����
	Rectangle(int r); //Ÿ�ٻ�����
	double getArea();
};


Rectangle::Rectangle() {
	radius = 1;
	cout << "������ " << radius << " ������" << endl;
}


//Rectangle::Rectangle() :Rectangle(1) {} //ȣ��, r�� 1 ����

Rectangle::Rectangle(int r) {
	radius= r;
	cout << "������ " << radius << " ������" << endl;
}

//Ŭ���� ������( ����Լ�����)
double Rectangle::getArea() {
	return 3.14* radius * radius;
}

int main() {
	Rectangle donut;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Rectangle pizza(30);
	area = pizza.getArea();
	cout << "�簢���� ������ " << pizza.getArea()  << endl;
}
*/

/*
//C++ ���� 3-6\
Ŭ���� ������ 
#include <iostream>

using namespace std;

class Rectangle {
public:
	int width;
	int height;
	Rectangle();
	Rectangle(int a, int b);
	Rectangle(int length);
	bool isSqure();
};

Rectangle::Rectangle() {
	width = height = 1;
}

Rectangle::Rectangle(int a, int b) {
	width = a;
	height = b;
}

Rectangle::Rectangle(int length) {
	width = height = length;
}

bool Rectangle :: isSqure() {
	if (width == height) return true; // ���׿����ڷ� �����ϰ� ǥ���Ҽ� ����.
	else return false;
}

int main()
{
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSqure()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSqure()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSqure()) cout << "rect3�� ���簢���̴�." << endl;

}
*/

/*

//�Ҹ��� ����
#include <iostream>

using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle(); //�Ҹ��� ����
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::Circle(int r) {
	radius= r;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle:: ~Circle() {
	cout << "������ " << radius << " �� �Ҹ�" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}


int main()
{
	Circle donut;
	Circle pizza(3);
	return 0;


}

*/

 

/*
//������ ����
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(30);

	cout << donut.getArea() << endl;
	Circle* p;
	p = &donut;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;

	p = &pizza;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;

}
*/


#include <iostream>

using namespace std;
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle circleArray[3] = { Circle(10),Circle(20),Circle()};

	for (int i = 0; i < 3; i++)
		cout << "Circle" << i << "�� ������ " << circleArray[i].getArea() << endl;
}
