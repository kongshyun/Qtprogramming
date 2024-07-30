/*
#include <iostream>

using namespace std;

class Calculator{
public:
	virtual int add(int a, int b) = 0;
	virtual int subtract(int a, int b) = 0;
	virtual double average(int a[], int size) = 0;

};

class GoodCalc : public Calculator {
public:
	int add(int a, int b) { return a + b; }
	int subtract(int a, int b) { return a - b; }
	double average(int a[], int size) {
		double sum = 0;
		for (int i = 0; i < size; i++)
			sum += a[i];
		return sum / size;
	}
};

int main() {
	int a[] = { 1,2,3,4,5 };
	Calculator* p = new GoodCalc();
	cout << ;
}*/


//	
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main()
{
	Circle circleArea[3] = { Circle(10), Circle(20), Circle(30) };
	
	Circle* p = circleArea;
	for (int i = 0; i < 3; i++) {
		cout << "원 면적은 " << (*p++).getArea() << endl;
		//p++;
	}
}