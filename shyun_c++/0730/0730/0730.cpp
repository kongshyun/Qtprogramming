/*
//C++ 8장 상속  예제 8-1 ( p.380 )

#include <iostream>
#include <string>

using namespace std;

class Point {
	int x, y;
public:
	void set(int x, int y) {
		this->x = x; this->y = y;
	}
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point {
	string color;
public: 
	void setColor(string color) { this->color = color; }
	void showColorPoint();
	
};

void ColorPoint::showColorPoint() {
	cout << color << ':';
	showPoint();
}

int main()
{
	Point p; // 기본클래스 객체생성
	ColorPoint cp; // 파생 클래스의 객체생성
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
}*/

/*
//C++, p.383(업캐스팅)
#include<iostream>
#include <string>

using namespace std;

class Point {
	int x, y;
public:
	void set(int x, int y) {
		this->x = x; this->y = y;
	}
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point {
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();

};

void ColorPoint::showColorPoint() {
	cout << color << ':';
	showPoint();
}

int main()
{
	//Point p; // 기본클래스 객체생성
	ColorPoint cp;
	ColorPoint *pDer=&cp; // 파생 클래스의 객체생성
	Point* pBase = pDer;
	pDer->set(3, 4);
	pBase->showPoint();
	pDer->setColor("Red");
	pDer->showColorPoint();
}

*/


/*

//C++, p.385(다운캐스팅)
#include<iostream>
#include <string>

using namespace std;

class Point {
	int x, y;
public:
	void set(int x, int y) {
		this->x = x; this->y = y;
	}
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point {
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();

};

void ColorPoint::showColorPoint() {
	cout << color << ':';
	showPoint();
}

int main()
{
	//Point p; // 기본클래스 객체생성
	ColorPoint cp;
	ColorPoint* pDer;
	Point* pBase =&cp; // 파생 클래스의 객체생성
	pBase->set(3, 4);

	pDer = (ColorPoint*)pBase; // 다운캐스팅. 강제 타입변환 필요
	pDer->setColor("Red");
	pDer->showColorPoint();
}

*/


/*

//예제 8-2, Protected
#include<iostream>
#include <string>

using namespace std;

class Point {
protected:
	int x, y;
public:
	void set(int x, int y) {
		this->x = x; this->y = y;
	}
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point {
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
	bool equals(ColorPoint p);

};

void ColorPoint::showColorPoint() {
	cout << color << ':';
	showPoint();
}

bool ColorPoint::equals(ColorPoint p) {
	if (x == p.x && y = p.y & color == p.color)
		return true;

}

int main()
{
	Point p;
	//Point p; // 기본클래스 객체생성
	ColorPoint cp;
	ColorPoint* pDer;
	Point* pBase = &cp; // 파생 클래스의 객체생성
	pBase->set(3, 4);

	pDer = (ColorPoint*)pBase; // 다운캐스팅. 강제 타입변환 필요
	pDer->setColor("Red");
	pDer->showColorPoint();
}

*/
/*


//예제 8-3 , TV, WideTV, SmartTV 의 상속관계와 생성자 매개변수 전달
#include <iostream>
#include <string>

using namespace std;

class TV {
	int size;
public:
	TV() { size = 20; }
	TV(int size) { this->size = size; }
	int getSize() { return size; }
};

class WideTV : public TV { // TV를 상속받는 WideTV
	bool videoIn;
public:
	WideTV(int size, bool videoIn) : TV(size) {
		this->videoIn = videoIn;
	}
	bool getVideoIn() { return videoIn; }
};

class SmartTV : public WideTV { // WideTY를 상속받는 SmartTV
	string ipAddr; //인터넷 주소
public:
	SmartTV(string ipAddr, int size) : WideTV(size, true) {
		this->ipAddr = ipAddr;
	}
	string getIpAddr() { return ipAddr; }
};

int main() {
	//32인치 크기에 "192.0.0.1"의 인터넷 주소를 가지는 스마트 TV 객체 생성
	SmartTV htv("192.0.0.1", 32);
	cout << "size=" << htv.getSize() << endl;
	cout << "videoIn=" << boolalpha << htv.getVideoIn() << endl;
	cout << "IP=" << htv.getIpAddr() << endl;
}

*/


/*
//C++, 8.8 가상상속\
멤버 중복 생성 문제를 해결하기위해 virtual키워드 붙여 가상상속 선언.

#include <iostream>

using namespace std;

class BaseIO {
public: 
	int mode;
};

class In : virtual public BaseIO {
public:
	int readPos;
};

class Out : virtual public BaseIO {
public:
	int writePos;
};

class InOut : public In, public Out {
public:
	bool safe;
};

int main()
{
	InOut io0bj;

	io0bj.readPos = 10;
	io0bj.writePos = 20;
	io0bj.safe = true;
	io0bj.mode = 5;
}
*/

//----------------------------------09장------------------------


/*
//예제 9-1

#include <iostream>

using namespace std;
class Base {
public:
	void f() { cout << "Base::f() called" << endl; }
};


class Derived : public Base {
public:
	void f() { cout << "Derived::f() called" << endl; }
};



int main()
{
	Derived d, * pDer;
	pDer = &d;
	pDer->f(); // "Derived:: f()~

	Base* pBase;
	pBase = pDer;
	pBase->f(); // "Base::f()~

}
*/

/*

//예제 9-2
#include<iostream>
using namespace std;

class Base {
public:
	virtual void f() { cout << "Base::f() called" << endl; }
};


class Derived : public Base {
public:
	virtual void f() { cout << "Derived::f() called" << endl; }
};



int main()
{
	Derived d, * pDer;
	pDer = &d;
	pDer->f(); // "Derived:: f()~

	Base* pBase;
	pBase = pDer;
	pBase->f(); // "Base::f()~

}*/


/*
//범위지정연산자 , 예제9-4
#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() {
		cout << "--Shape--";
	}
};

class Circle : public Shape {
public:
	int x;
	virtual void draw() {
		Shape::draw();
		cout << "Circle" << endl;
	}
};

int main() {
	Circle circle;
	Shape* pShape = &circle;

	pShape->draw();
	pShape->Shape::draw();
}
*/
/*


//예제 page 442
//범위지정 연산자(전역, 로컬)
#include <iostream>
using namespace std;

void sendMessage(const char* msg) { cout << msg << endl; }

class Window {
public:
	void sendMessage(const char* msg) { cout << "Window msg : " << msg << endl; }
	void run() {
		::sendMessage("Global Hello"); //전역함수호출
		sendMessage("Local Hello"); //멤버함수 호출
	}
};

int main()
{
	Window window;
	window.run();
}
*/


//예제 9-5
//virtual 있고없고차이

#include <iostream>
using namespace std;

class Base
{
public:
	virtual ~Base() { cout << "~Base()" << endl; }
};
class Derived : public Base {
public:
	virtual ~Derived() { cout << "~Derived()" << endl; }
};

int main()
{
	Derived* dp = new Derived();
	Base* bp = new Derived();

	delete dp; // Derived의 포인터로 소멸
	delete bp;
}
