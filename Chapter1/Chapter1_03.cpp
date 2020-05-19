#include <stdio.h> //c 표준입출력
#include <iostream> //c++
#include <iomanip> 
#include <conio.h>
#include <sstream> //클래스형 객체를 만듬
#include <string> //문자열
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
//	//c 출력
//	printf("**********************c언어 출력 함수************************\n");
//	printf("   name       kor eng mat tot avg\n ");
//	printf("%8s%4d%4d%4d%4d%6.1f\n", name,kor,eng,mat,tot,avg);
//	cout <<endl<<"-----------------c언어 출력 함수--------------"<< std::endl;
//	cout << "   name       kor eng mat tot avg" << endl;
//	cout << setw(10) << name << setw(5) << kor << setw(4) << eng << setw(5) << mat
//		<< setw(4) << tot << setw(5) << setprecision(3) << avg << endl;
//}
	/*std::cout << "heloow c++"<<std::endl;
	/*라이브러리 적기에는 좀 그렇고 하니 세트로 외우자 c out 이걸 쓸 때는 저 위에  using namespace std 를 써주자
	c 에서는 엔터가 \n  역슬래쉬 엔이지만 c++에서는 endl (end line) 된다.*/
	/*C++ 출력*/
using namespace std;
//void main()
//{
//	int number;
//	cout << "숫자 입력받기 : ";
//	cin >> number;
//	cout << "출력 : " << number << endl;
//
//	char dan[15];
//	cout << "문자 입력받기 : ";
//	cin >> dan;
//	cout << "출력 : " << dan << endl;
//	cout << "멈추려면 0을 누르세요!";
//	_getch();  /*이것의 용도는 0을 누르면 0을 표시를 안해준다 _getch()를 쓰려면
//			   라이브러리 #include <conio.h> 이것을 써야 한다.*/
//	cout << endl;
//	
//}

//int main() {
//int n;
//stringstream ss;  /*ss는 객체*/
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
//	cout << setiosflags(ios::left); //왼쪽 정렬 해제
//	cout << setw(10) << "753-9510" << "|" << endl;  //왼쪽 정렬
//	cout << 3.14 << endl;
//	cout << setprecision(6);  //setprecision 는 소수점
//	cout << setw(10) << resetiosflags(ios::showpoint) /*showpoint 공백 채워줌*/
//			<< 3.14 << endl;						//여기까지 왼쪽 정렬
//	cout << resetiosflags(ios::left); //왼쪽정렬해제
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
//	cout << "이름을 입력하세요 : ";
//	cin.get(Name,15);
//
//	cin.ignore();   /*주석처리시 오류 enter를 무시 하는 명령어 */
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
// 전위연산:++a/--a   이놈은 첨부터 6으로 연산한다.
// 후위연산:읽고 더 해주고 5상태에서 연산을 한다

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
	printf("두 값을 입력하세요 : ");
	scanf_s("%d %d", &a, &b);
	c = a > b;
	printf("C 결과 : %d\n", c);
	printf("a>b 결과 : %d\n", a > b);
	a++;
	printf("a와 b가 같다 : %d\n", a == b);
	printf("a와 b가 같지 않다 : %d\n", a != b);*/


	// 결과 값이 이해가 되어야 됨.
//void main()
//{
//	int a = 3, b = 2, c;
//	c = a == ++b;
//	printf("결과 : %d\n", (a == b) && (--b == c));
//	printf("결과 : %d\n", (a != b) || (b == c));
//	printf("결과 : %d\n", !((a != b) || (b == c)));
//
//}








































