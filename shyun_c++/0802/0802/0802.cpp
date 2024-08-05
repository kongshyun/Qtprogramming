
//08�� 02�� 3���� DAY5
// 
/*
//���� 12-7

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	const char* srcFile = "c:\\temp\\desert.jpg";
	const char* destFile = "c:\\temp\\copydesert.jpg";

	ifstream fsrc(srcFile, ios::in | ios::binary);
	if (!fsrc) {
		cout << srcFile << "�������" << endl;
		return 0;
	}

	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) {
		cout << destFile << "�������" << endl;
		return 0;
	}
	int c;
	while ((c = fsrc.get()) != EOF)
	{
		fdest.put(c);
	}
	cout << srcFile << "�� " << destFile << "�� ����Ϸ�" << endl;
	fsrc.close();
	fdest.close();
}*/

/*
//���� 12-8
#include <iostream>
#include <fstream>
using namespace std;

int main() {

	const char* file = "c:\\windows\\system.ini";
	ifstream fin;
	fin.open(file, ios::in | ios::binary);
	if (!fin) {
		cout << "���Ͽ������";
		return 0;
	}

	int count = 0;
	char s[32];
	while(!fin.eof()) {
		fin.read(s, 32);
		int n = fin.gcount();
		cout.write(s, n);
		count += n;
	}
	cout << "���� ����Ʈ ���� " << count << endl;
	fin.close();
}*/


/*
//����12-10
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	const char* file = "c:\\temp\\data.dat";

	ofstream fout;
	fout.open(file, ios::out | ios::binary);
	if (!fout) {
		cout << "���� ���� ����";
		return 0;
	}
	int n[] = { 0,1,2,3,4,5,6,7,8,9 };
	double d = 3.15;
	fout.write((char*)n, sizeof(n));
	fout.write((char*)(&d), sizeof(d));
	fout.close();

	for (int i = 0; i < 10; i++) n[i] = 99;
	d = 8.15;

	ifstream fin(file, ios::in);
	if (!fin) {
		cout << "���� ���� ����";                                        
		return 0;
	}

	fin.read((char*)n, sizeof(n));
	fin.read((char*)(&d), sizeof(d));

	for (int i = 0; i < 10; i++)
		cout << n[i] << ' ';
	cout << endl << d << endl;
	fin.close();

}*/

/*#include <iostream>
#include <fstream>
using namespace std;

long getFileSize(ifstream& fin) {
	fin.seekg(0, ios::end);
	long length = fin.tellg();
	return length;
}
int main() {
	const char* file = "c:\\windows\\system.ini";
	ifstream fin(file);
	if (!fin) {
		cout << file << "�������" << endl;
		return 0;
	}
	cout << file << "�� ũ��� " << getFileSize(fin);
	fin.close();
}

*/

/*
//���� 13-4
#include <iostream>
using namespace std;
int main()
{
	int n, sum, average;
	while (true) {
		cout << "���� �Է��ϼ���>>";
		cin >> sum;
		cout << "�ο����� �Է��ϼ���>>";
		cin >> n;
		try {
			if (n <= 0)
				throw n;
			else
				average = sum / n;
		}
		catch (int x)
		{
			cout << "���� �߻�!! " << x << "���� ������ ����" << endl;
			average = 0;
			cout << endl;
			continue;
		}
		cout << "���=" << average << endl << endl;
	}
}*/

/*
//���� 13-5
#include <iostream>
using namespace std;
int getExp(int base, int exp) {
	if (base <= 0 || exp <= 0) {
		throw " ���� ��� �Ұ�";
	}
	int value = 1;
	for (int n = 0; n < exp; n++)
		value = value * base;
	return value;
}

int main() {
	int v = 0;
	try {
		v = getExp(2, 3);
		cout << "2�� 3���� " << v << "�Դϴ�. " << endl;

		v = getExp(2, -3);
		cout << "2�� -3���� " << v << "�Դϴ�. " << endl;
	}
	catch (const char* s) {
		cout << "���ܹ߻� !! " << s << endl;
	}
}*/

/*
//���� 13-6
#include <iostream>
#include <cstring>

using namespace std;

int stringToInt(const char x[]) {
	int sum = 0;
	int len = strlen(x);
	for (int i = 0; i < len; i++) {
		if (x[i] >= '0' && x[i] <= '9')
			sum = sum * 10 + x[i] - '0';
		else
			throw x;
	}
	return sum;

}

int main()
{
	int n;
	try {
		n = stringToInt("123");
		cout << "\"123\"�� ���� " << n << "�� ��ȯ��" << endl;
		n = stringToInt("1A3");
		cout << "\"1A3\" �� ����" << n << "�� ��ȯ��" << endl;
	}
	catch (const char* s) {
		cout << s << "ó������ ���� �߻�!!" << endl;
		return 0;
	}
}*/

/*
#include<iostream>
using namespace std;

#include "MyStack.h"
int main() {
	MyStack intStack;
	try {
		intStack.push(100);
		intStack.push(200);
		cout << intStack.pop() << endl;
		cout << intStack.pop() << endl;
		cout << intStack.pop() << endl;
	}
	catch (const char* s) {
		cout << "���� �߻� : " << s << endl;
	}
}

*/

#include <iostream>
#include <string>

using namespace std;

class MyException {
	int lineNo;
	string func, msg;
public:
	MyException(int n, string f, string m) {

	}
};