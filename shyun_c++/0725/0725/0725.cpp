
//C++ 강의 ,클래스 생성자\
 예제 연습

/*
#include <iostream>
using namespace std;

//클래스 선언부
class Rectangle {
public:
	int radius;
	Rectangle(); //위임생성자
	Rectangle(int r); //타겟생성자
	double getArea();
};


Rectangle::Rectangle() {
	radius = 1;
	cout << "반지름 " << radius << " 원생성" << endl;
}


//Rectangle::Rectangle() :Rectangle(1) {} //호출, r에 1 전달

Rectangle::Rectangle(int r) {
	radius= r;
	cout << "반지름 " << radius << " 원생성" << endl;
}

//클래스 구현부( 멤버함수구현)
double Rectangle::getArea() {
	return 3.14* radius * radius;
}

int main() {
	Rectangle donut;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Rectangle pizza(30);
	area = pizza.getArea();
	cout << "사각형의 면적은 " << pizza.getArea()  << endl;
}
*/

/*
//C++ 예제 3-6\
클래스 생성자 
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
	if (width == height) return true; // 삼항연산자로 간편하게 표현할수 있음.
	else return false;
}

int main()
{
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSqure()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSqure()) cout << "rect2은 정사각형이다." << endl;
	if (rect3.isSqure()) cout << "rect3은 정사각형이다." << endl;

}
*/

/*

//소멸자 예제
#include <iostream>

using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle(); //소멸자 선언
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius= r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle:: ~Circle() {
	cout << "반지름 " << radius << " 원 소멸" << endl;
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
//포인터 예제
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
		cout << "Circle" << i << "의 면적은 " << circleArray[i].getArea() << endl;
}
