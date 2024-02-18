#include <iostream>
using namespace std;
int main()
{
	int A, B, C;
	cout << "введите числа A.B.C\n";

	if (A <= 0 or B<= 0 or C<= 0)
		cout << "введены неверные числа\n";
	else if (A > B and B > С)
	{
		int answer = A - B - C;
		cout << "тк A>B И B>C => A-B-C => ответ: " << answer;
	}
	else if (B > A and B % C = 0)
	{
		int answer = B/C +B- A;
		cout << "тк B>A И B кратно C => B/C+B-A => ответ: " << answer;
	}
	else
	{
		int answer = A + B + C;
		cout << "в остальных случаях ответ: " << answer;
	}
	return 0;

}	
