#include <iostream>
using namespace std;
int main()
{
	int A, B, C;
	cout << "������� ����� A.B.C\n";

	if (A <= 0 or B<= 0 or C<= 0)
		cout << "������� �������� �����\n";
	else if (A > B and B > �)
	{
		int answer = A - B - C;
		cout << "�� A>B � B>C => A-B-C => �����: " << answer;
	}
	else if (B > A and B % C = 0)
	{
		int answer = B/C +B- A;
		cout << "�� B>A � B ������ C => B/C+B-A => �����: " << answer;
	}
	else
	{
		int answer = A + B + C;
		cout << "� ��������� ������� �����: " << answer;
	}
	return 0;

}	
