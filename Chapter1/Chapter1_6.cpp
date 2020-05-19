#include <iostream>
using namespace std;

void main()
{
	/*int kor, eng, tot, mok;
	double avg;

	cout << "국어점수 : ";
	cin >> kor;
	cout << "영어점수 : ";
	cin >> eng;

	tot = kor + eng;
	avg = tot / 2.0;
	mok = avg / 10;

	switch (mok)
	{
		case 10
			cout << ("학점은 A입니다.") << endl;
			break;
			case 9
				cout << ("학점은 B입니다.") << endl;
				break;
				case 8
					cout << ("학점은 C입니다.") << endl;
					break;
					case 7
						cout << ("학점은 D입니다.") << endl;
						break;

					default:
						cout << "학점은: F입니다." << endl;
						break;
	}*/


//void main() {
//	int main() {
//		int kor, eng, tot;
//		double avg;
//		cout << "국어 점수 : ";
//		cin >> kor;
//		cout << "영어 점수 :";
//		cin >> eng;
//		tot = kor + eng;
//		avg = tot / 2.0;
//		if (avg >= 90)
//			cout << "A" << endl;
//		else if (avg >= 80)
//			cout << "B" << endl;
//	}
//}

		int a, b;
		char op;
		cout << "두수를 입력하세요. ";
		cin >> a >> b;
		cout << "연산자를 입력하세요(+,-,*,/,%) " << endl;
		cin >> op;
		switch (op)
		{
		case '+':
			cout << "두 수의 합은" << a + b << "입니다.";
			break;
		case '-':
			cout << "두 수의 차는" << a - b << "입니다.";
			break;
		
		case '*':
		cout << "두 수의 차는" << a * b << "입니다.";
			break;
		
		case '/':
			cout << "두 수의 나누기는" << a / b << "입니다.";
		    break;			
		
		default:
			cout << "두 수의 차는" << a % b << "입니다.";
			break;
		}

}