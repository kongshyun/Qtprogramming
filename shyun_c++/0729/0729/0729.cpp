
/*
#include <iostream>
#include <string>

using namespace std;

//��������
void star(int a = 5);
void msg(int id, string text = "");

//�Լ� ����
void star(int a)
{
	for (int i = 0; i < a; i++) cout << '*';
	cout << endl;
}

void msg(int id, string text)
{
	cout << id << ' ' << text << endl;

}

int main() 
{
	star(); //*****
	star(10); //**********

	msg(10); //10
	msg(10, "Hello");//10 Hello
}

*/



/*
//C++, ���� 6-6
#include <iostream>
using namespace std;

class MyVector {
	int* p;
	int size;
public:
	MyVector(int n = 100) {
		p = new int[n];
		size = n;
	}
	~MyVector() { delete [] p; }

};
int main()
{
	MyVector* v1, * v2;
	v1 = new MyVector();
	v2 = new MyVector(1024);
	delete v1;
	delete v2;
}
*/



/*

//���� 6-7
#include <iostream>
using namespace std;

float square(float a) {
	return a * a;
}
double square(double a) {
	cout << "HI ";
	return a * a;
}

long square(long a) { // �μ��� 3�� � ��ȣ�ϴٰ���. 3L�� �־����.
	return a * a;
}

int main()
{
	cout << square(3L) << ' ';
	cout << square(3.0f); //float(3) �� ����.
}
*/



/*
// PAGE 300 ���� 
#include<iostream>
using namespace std;

class Person {
public:
	int money;
	void addMoney(int money) {
		this->money += money;
	}
	static int sharedMoney;
	static void addShared(int n) {
		sharedMoney += n;
	}
};


int Person::sharedMoney = 10;   //static������ class�� ������.
//-------------------------shardMoney=10

int main() 
{
	Person han;
	han.money = 100;
	han.sharedMoney = 200;
	//---------------------[han] shardMoney=200, money=100

	Person lee;
	lee.money = 150;
	lee.addMoney(200); //350
	lee.addShared(200); //shardMoney 200 + �Ű����� 200 = 400
	//---------------------[lee] money=350, shardMoney=400

	cout << han.money << ' '   //100
		<< lee.money << endl;  //350
	cout << han.sharedMoney << ' ' //400 (���������Ƿ�,,,)
		<< lee.sharedMoney << endl; //400.

}

*/

/*
//PAGE 302 ,, PAGE 300 ���� ü����
#include <iostream>
using namespace std;

class Person {
public:
	int money;
	void addMoney(int money) {
		this->money += money;
	}
	static int sharedMoney;
	static void addShared(int n) {
		sharedMoney += n;
	}
};


int Person::sharedMoney = 10;   //static������ class�� ������.
//-------------------------shardMoney=10

int main()
{
	Person::addShared(50); //static���� ����, �߰���!  shardMoney=60
	cout << Person::sharedMoney << endl; //60

	Person han;
	han.money = 100;
	han.sharedMoney = 200; //static ��� ����, 200
	Person::sharedMoney = 300; //static��� ����, 300
	Person::addShared(100); //static ��� ����, 400

	cout << han.money << ' ' //100
		<< Person::sharedMoney << endl; //400
}
*/

/*
// C++, page 303
//Ŭ������ �̸� �ٿ��� ����
#include<iostream>

using namespace std;
class Math {
public:
	static int abs(int a) { return a > 0 ? a : -a; }
	static int max(int a, int b) { return (a > b) ? a : b; }
	static int min(int a, int b) { return (a > b) ? b : a; }

};
int main()
{
	cout << Math::abs(-5) << endl;
	cout << Math::max(10,5) << endl;
	cout << Math::min(-5,-8) << endl;
}
*/

/*
#include <iostream>
using namespace std;

class Circle {
private:
	static int numOfCircles;
	int radius;
public:
	Circle(int r = 1); 
	~Circle() { numOfCircles--; }
	double getArea() { return 3.14 * radius * radius; }
	static int getNumOfCircles() {return numOfCircles;}
};

Circle::Circle(int r) {
	radius = r;
	numOfCircles++;
}

int main()
{
	Circle *p = new Circle[10];
	cout << "�����ϰ� �ִ� �� ���� = " << Circle::getNumOfCircles() << endl;

	delete[] p;
	cout << "�����ϰ� �ִ� �� ���� = " << Circle::getNumOfCircles() << endl;

	Circle a;
	cout << "�����ϰ� �ִ� �� ���� = " << Circle::getNumOfCircles() << endl;

	Circle b;
	cout << "�����ϰ� �ִ� �� ���� = " << Circle::getNumOfCircles() << endl;

}*/


/*
* 
* p.309 Ǯ��� ,,�����

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

class UpAndDownGame {
private:
	static int start;
	static int end;
public:

	int ans;
	int makeLanNum(){
		srand((unsigned)time(0));
		int n = rand();
		n = n % 100;

};

UpAndDownGame :: makeLanNum(){

}

int main()
{
	start = 0;
	end = 99;
	cout << "Up & Down ������ �����մϴ�." << endl;
	int num = srand

	cout << "���� "<<   start<< "�� "<<  end<< "���̿� �ֽ��ϴ�."<<endl;
	cout<<

}*/


/*
//friend�Լ�\
���� 7-2, 7-3

#include<iostream>

using namespace std;

class Rect;

class RectManager {
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);
};

class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend RectManager; //������ �Լ� ����
};


bool RectManager::equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}

void RectManager::copy(Rect& dest, Rect& src) {
	dest.width = src.width; dest.height = src.hieght;
}

int main()
{
	Rect a(3, 4), b(5, 6);
	RectManager man;
	man.copy(b, a); //a�� b�� �����Ѵ�.
	if (man.equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}
*/

/*
//C++ ���� 7.6

#include <iostream>

using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power& operator+ (Power op2); //(Power& op2)�� �ص���.
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch= " << punch << endl;
}

Power& Power::operator+(Power op2) {
	Power tmp;
	tmp.kick = this->kick + op2.kick;
	tmp.punch = this->punch + op2.punch;
	return tmp;
}

int main() {
	Power a(3, 5), b(4, 6), c;
	
	//c=a.operator + (b);
	a.show();
	b.show();c = a + b;
	a.show();
	c.show();
}
*/


/*
#include <iostream>

using namespace std;
class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power operator++ (int x);
};

void Power::show()
{
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator++(int x) {
	Power tmp = *this;
	kick++;
	punch++;
	return tmp;
}

int main()
{
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a++;
	a.show();
	b.show();
}

*/
/*
//���� 7-12
#include <iostream>

using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	friend Power operator+(Power op1, Power op2);
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}
Power operator+(Power op1, Power op2) {
	Power tmp;
	tmp.kick = op1.kick + op2.kick;
	tmp.punch = op1.punch + op2.punch;
	return tmp;
}

int main()
{
	Power a(3, 5), b(4, 6), c;
	c = a + b;
	a.show();
	b.show();
	c.show();
}
*/
/*
#include <iostream>

using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0)
	{
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power& operator<< (int n);//���� �� Power��ü�� ���� ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}
Power& Power::operator << (int n) {
	kick += n;
	punch += n;
	return *this;
}

int main() {
	Power a(1, 2);
	a << 3 << 5 << 6;
	a.show();
}

*/



#include <iostream>

using namespace std;

class Circle {
	int radius;
public:
	Circle(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle waffle(3);
	cout << "������ " << waffle.getArea();
}