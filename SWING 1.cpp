#include<iostream>
#include<string>
using namespace std;

int main()
{
	int apple, banana, orange;//과일의 가격을 넣을 변수
	int a=0, b=0, o=0;//과일의 개수를 넣을 변수
	int cost;//총 금액을 넣을 변수
	cout << "당신의 이름은 무엇입니까?";
	string name;//문자열의 크기 제약 없음
	getline(cin, name);//name에 이름 입력
	cout << "반갑습니다." << name << "님" << endl;//name을 넣어 문장 출력, endl은 줄 바꿈
	cout << "apple의 가격은 얼마입니까?";//출력하기 위한 데이터 
	cin >> apple;//apple 에 값을 입력
	cout << "banana의 가격은 얼마입니까?";
	cin >> banana;
	cout << "orange의 가격은 얼마입니까?";
	cin >> orange;
	cout << "apple은 몇 개 있습니까?";
	cin >> a;
	cout << "banana는 몇 개 있습니까?";
	cin >> b;
	cout << "orange는 몇 개 있습니까?";
	cin >> o;
	cost = (apple * a) + (banana * b) + (orange * o) - 500;
	cout << "총" << cost << "원 입니다.";

}