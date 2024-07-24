/*
 * 0724 Qt시작 , 프로젝트 생성, 예제

*/

/*

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string song("Falling in love with you");
    string elvis("Elvis Presley");

    string singer;

    cout << song + " Whos sing";
    cout << "(Hint : First word "<<elvis[0] << ")?";
    getline(cin, singer); //문자열 입력
    if(singer == elvis)
    {
        cout << "Correct!";

    }
    else
    {
        cout << "Wrong! " + elvis  << endl;
    }
}

*/


#include <iostream>
using namespace std;

int main()
{
    cout << "Input you address>>";

    char address[100];
    cin.getline(address,100,'\n');
    cout << " Yout address is "<<address<<'\n'; //주소출력
}
