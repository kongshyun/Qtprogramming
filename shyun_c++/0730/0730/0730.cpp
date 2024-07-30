/*
//C++ 8�� ���  ���� 8-1 ( p.380 )

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
	Point p; // �⺻Ŭ���� ��ü����
	ColorPoint cp; // �Ļ� Ŭ������ ��ü����
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
}*/

/*
//C++, p.383(��ĳ����)
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
	//Point p; // �⺻Ŭ���� ��ü����
	ColorPoint cp;
	ColorPoint *pDer=&cp; // �Ļ� Ŭ������ ��ü����
	Point* pBase = pDer;
	pDer->set(3, 4);
	pBase->showPoint();
	pDer->setColor("Red");
	pDer->showColorPoint();
}

*/


/*

//C++, p.385(�ٿ�ĳ����)
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
	//Point p; // �⺻Ŭ���� ��ü����
	ColorPoint cp;
	ColorPoint* pDer;
	Point* pBase =&cp; // �Ļ� Ŭ������ ��ü����
	pBase->set(3, 4);

	pDer = (ColorPoint*)pBase; // �ٿ�ĳ����. ���� Ÿ�Ժ�ȯ �ʿ�
	pDer->setColor("Red");
	pDer->showColorPoint();
}

*/


/*

//���� 8-2, Protected
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
	//Point p; // �⺻Ŭ���� ��ü����
	ColorPoint cp;
	ColorPoint* pDer;
	Point* pBase = &cp; // �Ļ� Ŭ������ ��ü����
	pBase->set(3, 4);

	pDer = (ColorPoint*)pBase; // �ٿ�ĳ����. ���� Ÿ�Ժ�ȯ �ʿ�
	pDer->setColor("Red");
	pDer->showColorPoint();
}

*/
/*


//���� 8-3 , TV, WideTV, SmartTV �� ��Ӱ���� ������ �Ű����� ����
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

class WideTV : public TV { // TV�� ��ӹ޴� WideTV
	bool videoIn;
public:
	WideTV(int size, bool videoIn) : TV(size) {
		this->videoIn = videoIn;
	}
	bool getVideoIn() { return videoIn; }
};

class SmartTV : public WideTV { // WideTY�� ��ӹ޴� SmartTV
	string ipAddr; //���ͳ� �ּ�
public:
	SmartTV(string ipAddr, int size) : WideTV(size, true) {
		this->ipAddr = ipAddr;
	}
	string getIpAddr() { return ipAddr; }
};

int main() {
	//32��ġ ũ�⿡ "192.0.0.1"�� ���ͳ� �ּҸ� ������ ����Ʈ TV ��ü ����
	SmartTV htv("192.0.0.1", 32);
	cout << "size=" << htv.getSize() << endl;
	cout << "videoIn=" << boolalpha << htv.getVideoIn() << endl;
	cout << "IP=" << htv.getIpAddr() << endl;
}

*/


/*
//C++, 8.8 ������\
��� �ߺ� ���� ������ �ذ��ϱ����� virtualŰ���� �ٿ� ������ ����.

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

//----------------------------------09��------------------------


/*
//���� 9-1

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

//���� 9-2
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
//�������������� , ����9-4
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


//���� page 442
//�������� ������(����, ����)
#include <iostream>
using namespace std;

void sendMessage(const char* msg) { cout << msg << endl; }

class Window {
public:
	void sendMessage(const char* msg) { cout << "Window msg : " << msg << endl; }
	void run() {
		::sendMessage("Global Hello"); //�����Լ�ȣ��
		sendMessage("Local Hello"); //����Լ� ȣ��
	}
};

int main()
{
	Window window;
	window.run();
}
*/


//���� 9-5
//virtual �ְ��������

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

	delete dp; // Derived�� �����ͷ� �Ҹ�
	delete bp;
}
