#include<iostream>
#include<string>
using namespace std;

int main()
{
	int apple, banana, orange;//������ ������ ���� ����
	int a=0, b=0, o=0;//������ ������ ���� ����
	int cost;//�� �ݾ��� ���� ����
	cout << "����� �̸��� �����Դϱ�?";
	string name;//���ڿ��� ũ�� ���� ����
	getline(cin, name);//name�� �̸� �Է�
	cout << "�ݰ����ϴ�." << name << "��" << endl;//name�� �־� ���� ���, endl�� �� �ٲ�
	cout << "apple�� ������ ���Դϱ�?";//����ϱ� ���� ������ 
	cin >> apple;//apple �� ���� �Է�
	cout << "banana�� ������ ���Դϱ�?";
	cin >> banana;
	cout << "orange�� ������ ���Դϱ�?";
	cin >> orange;
	cout << "apple�� �� �� �ֽ��ϱ�?";
	cin >> a;
	cout << "banana�� �� �� �ֽ��ϱ�?";
	cin >> b;
	cout << "orange�� �� �� �ֽ��ϱ�?";
	cin >> o;
	cost = (apple * a) + (banana * b) + (orange * o) - 500;
	cout << "��" << cost << "�� �Դϴ�.";

}