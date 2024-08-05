
//08월 02일 3주차 DAY5
// 
/*
//예제 12-7

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	const char* srcFile = "c:\\temp\\desert.jpg";
	const char* destFile = "c:\\temp\\copydesert.jpg";

	ifstream fsrc(srcFile, ios::in | ios::binary);
	if (!fsrc) {
		cout << srcFile << "열기오류" << endl;
		return 0;
	}

	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) {
		cout << destFile << "열기오류" << endl;
		return 0;
	}
	int c;
	while ((c = fsrc.get()) != EOF)
	{
		fdest.put(c);
	}
	cout << srcFile << "을 " << destFile << "로 복사완료" << endl;
	fsrc.close();
	fdest.close();
}*/

/*
//예제 12-8
#include <iostream>
#include <fstream>
using namespace std;

int main() {

	const char* file = "c:\\windows\\system.ini";
	ifstream fin;
	fin.open(file, ios::in | ios::binary);
	if (!fin) {
		cout << "파일열기오류";
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
	cout << "읽은 바이트 수는 " << count << endl;
	fin.close();
}*/


/*
//예제12-10
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	const char* file = "c:\\temp\\data.dat";

	ofstream fout;
	fout.open(file, ios::out | ios::binary);
	if (!fout) {
		cout << "파일 열기 오류";
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
		cout << "파일 열기 오류";                                        
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
		cout << file << "열기오류" << endl;
		return 0;
	}
	cout << file << "의 크기는 " << getFileSize(fin);
	fin.close();
}

*/

/*
//예제 13-4
#include <iostream>
using namespace std;
int main()
{
	int n, sum, average;
	while (true) {
		cout << "합을 입력하세요>>";
		cin >> sum;
		cout << "인원수를 입력하세요>>";
		cin >> n;
		try {
			if (n <= 0)
				throw n;
			else
				average = sum / n;
		}
		catch (int x)
		{
			cout << "예외 발생!! " << x << "으로 나눌수 없음" << endl;
			average = 0;
			cout << endl;
			continue;
		}
		cout << "평균=" << average << endl << endl;
	}
}*/

/*
//예제 13-5
#include <iostream>
using namespace std;
int getExp(int base, int exp) {
	if (base <= 0 || exp <= 0) {
		throw " 음수 사용 불가";
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
		cout << "2의 3승은 " << v << "입니다. " << endl;

		v = getExp(2, -3);
		cout << "2의 -3승은 " << v << "입니다. " << endl;
	}
	catch (const char* s) {
		cout << "예외발생 !! " << s << endl;
	}
}*/

/*
//예제 13-6
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
		cout << "\"123\"은 정수 " << n << "로 변환됨" << endl;
		n = stringToInt("1A3");
		cout << "\"1A3\" 은 정수" << n << "로 변환됨" << endl;
	}
	catch (const char* s) {
		cout << s << "처리에서 예외 발생!!" << endl;
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
		cout << "예외 발생 : " << s << endl;
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