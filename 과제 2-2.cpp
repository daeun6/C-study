#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, i, a;

	cout << "N���� �Է��ϼ���. : ";
	cin >> n;
	if (n == 1)
	{
		cout << "*";
	}
	for (int i = 1; i <= n * 2; i++)//��ü ���� ���� 2*n�̴�
	{
		for (int a = 1; a <= n; a++)
		{
			if (i % 2 == 0) // ¦���� ���
			{
				if (a % 2 == 0)
					cout << "*";
				else cout << " ";
			}
			else // Ȧ���� ���
			{
				if (a % 2 == 0)
					cout << " ";
				else cout << "*";
			}
		}
		cout << endl;
	}
}