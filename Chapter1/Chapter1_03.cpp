#include <stdio.h> //c ǥ�������
#include <iostream> //c++
#include <iomanip> 
#include <conio.h>
#include <sstream> //Ŭ������ ��ü�� ����
#include <string> //���ڿ�
//using namespace std;
//void main()
//{
//	char name[] = "choi kuy ri";
//	int kor, eng, mat, tot;
//	double avg;
//	kor = 90;
//	eng = 85;
//	mat = 70;
//	tot = kor + eng + mat;
//	avg = tot / 3.0;
//	//c ���
//	printf("**********************c��� ��� �Լ�************************\n");
//	printf("   name       kor eng mat tot avg\n ");
//	printf("%8s%4d%4d%4d%4d%6.1f\n", name,kor,eng,mat,tot,avg);
//	cout <<endl<<"-----------------c��� ��� �Լ�--------------"<< std::endl;
//	cout << "   name       kor eng mat tot avg" << endl;
//	cout << setw(10) << name << setw(5) << kor << setw(4) << eng << setw(5) << mat
//		<< setw(4) << tot << setw(5) << setprecision(3) << avg << endl;
//}
	/*std::cout << "heloow c++"<<std::endl;
	/*���̺귯�� ���⿡�� �� �׷��� �ϴ� ��Ʈ�� �ܿ��� c out �̰� �� ���� �� ����  using namespace std �� ������
	c ������ ���Ͱ� \n  �������� �������� c++������ endl (end line) �ȴ�.*/
	/*C++ ���*/
using namespace std;
//void main()
//{
//	int number;
//	cout << "���� �Է¹ޱ� : ";
//	cin >> number;
//	cout << "��� : " << number << endl;
//
//	char dan[15];
//	cout << "���� �Է¹ޱ� : ";
//	cin >> dan;
//	cout << "��� : " << dan << endl;
//	cout << "���߷��� 0�� ��������!";
//	_getch();  /*�̰��� �뵵�� 0�� ������ 0�� ǥ�ø� �����ش� _getch()�� ������
//			   ���̺귯�� #include <conio.h> �̰��� ��� �Ѵ�.*/
//	cout << endl;
//	
//}

//int main() {
//int n;
//stringstream ss;  /*ss�� ��ü*/
//ss.str("12 345 6789 0 -12");
//for (int i = 0; i<5;i++) {
//	ss >> n;
//	cout << n << endl;
//	
//}
//return 0;
//}
//void main()
//{
//	cout << setw(10) << "753-9510" << "|" <<endl;
//	cout << setiosflags(ios::left); //���� ���� ����
//	cout << setw(10) << "753-9510" << "|" << endl;  //���� ����
//	cout << 3.14 << endl;
//	cout << setprecision(6);  //setprecision �� �Ҽ���
//	cout << setw(10) << resetiosflags(ios::showpoint) /*showpoint ���� ä����*/
//			<< 3.14 << endl;						//������� ���� ����
//	cout << resetiosflags(ios::left); //������������
//	cout << setw(10) << "World" << "l" << endl;
//	cout << resetiosflags(ios::left) << setw(10)
//			<< "World" << "l" << endl;
//
//}

//void main() {
//
//	char Name[15];
//	char address[20];
//
//	cout << "�̸��� �Է��ϼ��� : ";
//	cin.get(Name,15);
//
//	cin.ignore();   /*�ּ�ó���� ���� enter�� ���� �ϴ� ��ɾ� */
//	
//	cout << "address : ";
//	cin.get(address, 20);
//
//	cout << "\nName : " << Name << endl;
//	cout << "address : " << address << endl;
//	
//}

//void main()
//{
//	char name[15];
//	char address[20];
//	cout << "What`s your name ? ";
//	cin.getline(name, 15);
//	cout << "address ? ";
//	cin.getline(address, 20);
//	cout << "\nName : " << name << endl;
//	cout << "address : " << address << endl;
//}



//a=5
// ��������:++a/--a   �̳��� ÷���� 6���� �����Ѵ�.
// ��������:�а� �� ���ְ� 5���¿��� ������ �Ѵ�

//void main()
//{
//	int a = 10, b = 5, c, d, e;
//	printf("a=%d b=%d\n",a++,--b); //10,4
//	printf("a=%d b=%d\n", a++, b); //11,4
//	printf("a=%d b=%d\n", ++a, b); //12,4
//	c = a;
//	printf("c= %d\n", c);
//}

//void main()
//{
//	int a, b, c, h, s;
//	a = b = h = 5;
//	c = ++a + b--;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//	s = ++h + ++h;
//	printf()
//}

//void main()
//{
	/*int h, s;
	s = h > 2;
	cout << s << endl;
	s = h < 2;
	cout << s << endl;
	s = 2 == 3;
	cout << s << endl;*/

	/*int h, s;
	h = 2 != 4 && 5 > 3;
	s = !1 || !0;
	cout << h << endl;
	cout << s << endl;*/

	/*int a, b, c;
	printf("�� ���� �Է��ϼ��� : ");
	scanf_s("%d %d", &a, &b);
	c = a > b;
	printf("C ��� : %d\n", c);
	printf("a>b ��� : %d\n", a > b);
	a++;
	printf("a�� b�� ���� : %d\n", a == b);
	printf("a�� b�� ���� �ʴ� : %d\n", a != b);*/


	// ��� ���� ���ذ� �Ǿ�� ��.
//void main()
//{
//	int a = 3, b = 2, c;
//	c = a == ++b;
//	printf("��� : %d\n", (a == b) && (--b == c));
//	printf("��� : %d\n", (a != b) || (b == c));
//	printf("��� : %d\n", !((a != b) || (b == c)));
//
//}








































