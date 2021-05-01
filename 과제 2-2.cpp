#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, i, a;

	cout << "N값을 입력하세요. : ";
	cin >> n;
	if (n == 1)// n이 1일 때 *은 한 개만 출력 
	{
		cout << "*";
	}
	else
	{
		for (int i = 1; i <= n * 2; i++)//전체 행의 수는 2*n이다
		{
			for (int a = 1; a <= n; a++)
			{
				if (i % 2 == 0) // 짝수일 경우
				{
					if (a % 2 == 0)
						cout << "*";
					else cout << " ";
				}
				else // 홀수일 경우
				{
					if (a % 2 == 0)
						cout << " ";
					else cout << "*";
				}
			}
			cout << endl;
		}
	}
}
