#include <iostream>
using namespace std;

void main()
{
	/*int kor, eng, tot, mok;
	double avg;

	cout << "�������� : ";
	cin >> kor;
	cout << "�������� : ";
	cin >> eng;

	tot = kor + eng;
	avg = tot / 2.0;
	mok = avg / 10;

	switch (mok)
	{
		case 10
			cout << ("������ A�Դϴ�.") << endl;
			break;
			case 9
				cout << ("������ B�Դϴ�.") << endl;
				break;
				case 8
					cout << ("������ C�Դϴ�.") << endl;
					break;
					case 7
						cout << ("������ D�Դϴ�.") << endl;
						break;

					default:
						cout << "������: F�Դϴ�." << endl;
						break;
	}*/


//void main() {
//	int main() {
//		int kor, eng, tot;
//		double avg;
//		cout << "���� ���� : ";
//		cin >> kor;
//		cout << "���� ���� :";
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
		cout << "�μ��� �Է��ϼ���. ";
		cin >> a >> b;
		cout << "�����ڸ� �Է��ϼ���(+,-,*,/,%) " << endl;
		cin >> op;
		switch (op)
		{
		case '+':
			cout << "�� ���� ����" << a + b << "�Դϴ�.";
			break;
		case '-':
			cout << "�� ���� ����" << a - b << "�Դϴ�.";
			break;
		
		case '*':
		cout << "�� ���� ����" << a * b << "�Դϴ�.";
			break;
		
		case '/':
			cout << "�� ���� �������" << a / b << "�Դϴ�.";
		    break;			
		
		default:
			cout << "�� ���� ����" << a % b << "�Դϴ�.";
			break;
		}

}