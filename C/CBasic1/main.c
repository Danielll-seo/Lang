#include <stdio.h> // stdio 는 stadard input output의 줄임말
#include <math.h>
#include <stdio.h>

/*
자료형 -
1. 정수형 %d
2. 실수형 %f
3. 문자형 %c
4. 문자열 %s
5. 16진수 %x
6. 8진수 %0
*/

void main() {
	printf("Hello world!\n");
	printf("나이는 %d살입니다.\n", 21); // 정수형
	printf("연산 결과 : %f\n", 15.5 + 23.87); // 실수형
	printf("문자형은 %c다.\n", 'K'); // 문자형
	printf("문자열은 %s다.\n", "Nice job buddy."); // 문자열
	// 문자열과 문자형은 큰따옴표와 작은따옴표로 구분한다.
	// 문자형은 하나의 문자만 입력,출력이 가능하다. 'Korea'는 문자형이기 때문에 오류남.

	// %d는 decimal의 약자로 10진수이다.
	printf("%d와 %d을 출력합니다.\n", 5, 8);
	printf("정수형 상수 : %d\n", 25);
	printf("정수형 상수 : %d\n", -17);
	printf("정수형 상수 : %d\n", 761);
	// 한줄에 다 입력하는 방식도 있지만 나중에 유지보수성을 위해선 하나의 줄에 하나의 기능(?)만 넎는 것이 더 용이하다.

	// %f는 floating point의 약자로 실수다. 보통 float이라고 많이 씀.
	printf("%f와 %d를 출력합니다.\n", 5.5, (int)0.8f); // 만약 실수형%f에\를 10진수%d자료형태로 부르게 되면 소수점 뒤에수를 제외한 숫자가 뜬다.
	printf("%.1f와 %.1f를 출력합니다.\n", 5.5, 0.8); // %와 f사이의 .n은 소수점 n번째 자릿수까지를 의미한다. .n이 없을 경우 기본적으로 6번째 자리까지 출력된다.
	printf("%.0f는 소수점 뒤에 자리를 표현하지 않습니다.\n", 2.5);

	// 자릿수를 맞추는건 정수형에도 있다. n개자리의 수만큼 맞추자는(?)의미
	printf("%5d\n", 123);
	printf("%5d\n", 12345);
	printf("%5d\n", 123456789);

	// %n.af도 있는데 이 것은 정수부분은 n번째 자리까지, 소수부분은 a번째 자리까지 출력하라는 의미.
	printf("%1.5f\n", 2.123135123235);

	// 연산 쌉가능
	printf("%d + %d = %d\n", 7, 8, 15);

	printf("%d + %d = %d\n", 9, 6, 9 + 5);
	printf("%d - %d = %d\n", 9, 5, 9 - 5);
	printf("%d * %d = %d\n", 9, 5, 9 * 5);
	printf("%d / %d = %d\n", 9, 5, 9 / 5); // 정수와 정수를 나누면 정수값으로 계산되기 때문에 소수점은 표현이 안된다.
	printf("%d / %d = %f\n", 9, 5, 9. / 5.);

	// 문자형 상수 출력
	// %c는 character의 약자로 문자형 상수를 출력한다. 보통 char라고 한다.

	// 시습문제3.7
	printf("A반과 B반의 평균은 %.1f점입니다.\n", (85 + 90) / 2.); // or
	printf("%c반과 %c반의 평균은 %.1f점입니다.\n", 'A', 'B', (85. + 90.) / 2.); // 정수 나누기 정수만 정수다.

	// 문자열 상수 출력
	// %s 는 string의 약자로 문자열을 출력한다. 보통 str이라고 한다. 큰따옴표를 붙여야함.
	/*2024.03.12 End*/

	/*// 변수 실습 문제
	int a, b, c, e;
	double d;
	a = 5;
	b = 7;
	c = a * b - 5;
	d = a / 2. + b;
	e = 2 * (a + 2*b);
	printf("수식1 : %d\n", c);
	printf("수식2 : %.2f\n", d);
	printf("수식1 : %d\n", e);
	*/

	/*double  a, b, c, d, e;
	a = 5.3;
	b = 7.6;
	c = a / (a + b);
	d = (a - b) / (a + b);
	e = 2 * a * (a - 2 * b);

	printf("수식1 : %.2f\n", c);
	printf("수식2 : %.2f\n", d);
	printf("수식3 : %.2f\n", e);
	*/

	/*int a, b, c, d, e;
	a = 3;
	b = 5;
	c = a + b;
	d = a - b;

	e = c;
	c = d;
	d = e;

	printf("c=%d\n", c);
	printf("d=%d\n", d);
	*/

	// 문자형은 ascii code로 표현되기 때문에 각각의 문자나 기호마다 번호를 가지고 있다.
	// 그렇기 때문에 문자형 값에서 수를 더하면 더한 수에 해당하는 문자가 나온다.
	/*char ch1;
	ch1 = 'A' + 1;
	printf("%c\n", ch1);*/
	/*2024.03.11인가 13인가 암튼 End*/

	// 데이터의 출력과 입력
	// 데이터 출력을 할 수 있다면 입력도 할 수 있다.
	// 단 입력을 받기 전 변수 값을 초기화 해줘야함.
	// scanf("%d".&a);

	/*
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("a+b=%d\n", a + b);
	*/

	/*float a, b;
	printf("10진 정수 A 입력 : ");
	scanf("%f", &a);
	printf("10진 정수 B 입력 : ");
	scanf("%f", &b);

	printf("%.0f + %.0f = %.0f\n", a, b, a + b);
	printf("%.0f - %.0f = %.0f\n", a, b, a - b);
	printf("%.0f * %.0f = %.0f\n", a, b, a * b);
	printf("%f / %f = %f\n", a, b, a / b);
	*/

	/*
	char ch1, ch2;
	printf("문자를 입력하고 Enter>");
	scanf("%c", &ch1);
	printf("문자를 입력하고 Enter>");
	scanf("%c", &ch2);
	printf("입려된 문자 %c, %c\n", ch1, ch2);
	*/
	// 이렇게 쓰면 첫번째 문자를 받고 엔터를 눌렀을 때 컴퓨터가 엔터도 하나의 문자로 받아들여 버퍼로 넘어가면서 두번째 입력을 건너뛴다.

	/*
	char ch1, ch2;
	printf("문자를 입력하고 Enter>");
	scanf("%c", &ch1);
	getchar();
	printf("문자를 입력하고 Enter>");
	scanf("%c", &ch2);
	printf("입려된 문자 %c, %c\n", ch1, ch2);
	*/

	/*double a, b, c;
	printf("변수 a, b, c를 입력 : ");
	scanf("%lf %lf %lf", &a, &b, &c);

	printf("3a+4b-6c=%.2lf\n", (3 * a) + (4 * b) - (6 * c));
	printf("2a^2+4bc=%.2lf\n", 2 * (a * a)  + (4 * b * c));
	printf("a+b/c=%.2lf\n", (a + b) / c);
	*/

	/*
	* 가장 이상적이고 정석적인 함수 형태
	* void main() {

		   1.[사용할 변수와 데이터 형을 선언]
		   2.[입력 부분]
		   3.[처리 부분]
		   4.[출력 부분]
	}
	*/

	/*int 동전500, 동전100, 동전50, 동전10;

	printf("500원, 100원, 50원 10원의 갯수를 각각 입력하세요.(공백 구분) : ");
	scanf("%d %d %d %d", &동전500, &동전100, &동전50, &동전10);

	printf("현재 당신이 가진 금액은 총 %d원 입니다.\n", (동전500 * 500) + (동전100 * 100) + (동전50 * 50) + (동전10 * 10));
	*/

	/*
	어느 공장에서 하루 500개의 제품을 생산한다.이 중 불량품의 개수 n을 입력받아
	정상제품의 생산율과 불량제품의 생산율을 % 단위(소수 이하 둘째자리)로 출력하는 프로그램을 작성하시오.
	%기호를 출력하려면 printf의 형식제어 부분에 %%를 사용한다.
	*/

	/*2024.03.18 End*/

	/*int 총생산량 = 500, 불량품;
	float 비율, 백분율;
	print("총생산량 500개중에서 불량제품의 갯수를 입력하세요 : ");
	scanf("%d", &불량품);

	불량품 = 총생산량-불량품;
	*/

	/*double 제품생산량 = 500;
	int 불량품개수;

	printf("불량품 개수 입력: ");
	scanf("%d", &불량품개수);

	printf("정상제품 생산율 : %.2f%%\n", (제품생산량 - 불량품개수) / 제품생산량 *100);
	printf("불량제품 생산율 : %.2f%%\n", 불량품개수 / 제품생산량 * 100);
	*/

	/*int k;
	printf("세 자리 10진 정수 입력 후 Enter>");
	scanf("%d", &k);
	printf("1의 자리수 %d\n", k % 10);
	k = k / 10;
	printf("10의 자리수 %d\n", k % 10);
	k = k / 10;
	printf("100의 자리수 %d\n", k % 10);*/

	/*
	char a, b, c;

	scanf("%c%c%c", &a, &b, &c);

	printf("%d %d %d", a - '0', b - '0', c - '0');
	*/

	/*
	int a = 5, b = 10;
	a++; --b;
	a = b % a;
	b = --a+ ++b;
	printf("%d %d\n", a, b);
	*/

	/*
	int a, b;
	printf("a에 수 입력 : ");
	scanf("%d", &a);
	printf("b에 수 입력 : ");
	scanf("%d", &b);
	(a > b) ? printf("둘 중 가장 큰 수는 : %d", a) : printf("둘 중 가장 큰 수는 : %d", b);
	2024.03.19 종료
	*/

	// 제어문 if, for, while...
	/*int grade;
	printf("성적 점수를 입력하고 Enter>");
	scanf("%d", &grade);
	if (grade > 60) {
		printf("시험 합격!");
	} // if는 조건제어문이다. if 뒤에온 조건명제가 참이면 if문에 종속되어 있는 코드를 실행한다.
	if (grade < 60) { // else if와 if의 차이점이 무엇인가
		printf("시험 불합격!");
	}*/

	/*int bornYear, age = 0;
	printf("출생년도를 입력하세요. >");
	scanf("%d", &bornYear);
	age = 2025 - bornYear;
	if (age <= 20 ) {
		printf("가서 급식이나 더 먹고 와라 애송이!");
	}
	if (age >  20) {
		printf("당신은 성인입니다.");
	}*/

	/*char Grade;

	printf("본인의 학점등급을 입력하세요. >");
	scanf("%c", &Grade);

	if (Grade <= 68) {
		printf("시험합격");
	}
	if (Grade > 68) {
		printf("시험불합격");
	}*/

	// if 제어문에서 else도 쓸 수 있는데 이것은 앞에있는 조건이 거짓일 경우 발생하는 모든 상황에 대해
	// 어떻게 동작할지 알려주는 제어문이다.

	/*int BornYear, Age = 0;

	printf("출생년도를 입력하세요. >");
	scanf("%d", &BornYear);
	Age = 2025 - BornYear;
	if (Age >= 19) {
		printf("성인입니다.");
	}
	else {
		printf("미성년입니다.");
	}*/

	/*int a = 0, b = 0;
	printf("a 와 b 에 들어갈 수를 각각 적으세요. >");
	scanf("%d %d", a, b);

	if (a > b) {
		printf("나머지 %f\n", a % b);
	}
	else if (a < b) {
		printf("나머지 : %f\n", b % a);
	}
	else {
		printf("두 수는 같은 값입니다.\n");
	}*/

	/*double Number = 0;
	printf("숫자를 입력하세요. >");
	scanf("%lf", &Number);

	if (Number != (int)Number) {
		printf("%f", Number - (int)Number);
	}
	else if ((int)Number % 2 == 0) {
		printf("짝수 입니다.");
	}
	else {
		printf("홀수 입니다.");
	}*/
	// 2024.03.26 End

	// 윤년을 구하는 알고리즘
	/*int Year;
	printf("년도를 입력하세요. >");
	scanf("%d", &Year);
	if (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0) {
		printf("입력한 연도 <%d>년은 윤년입니다.\n", Year);
	}
	else {
		printf("입력한 연도 <%d>년은 평년입니다.\n", Year);
	}*/

	// 논리연산자를 사용한 성년 알고리즘
	/*int Age;
	printf("나이 입력 >");
	scanf("%d", Age);
	if (Age >= 12 && Age <= 18) {
		printf("미성년자 입니다.");
	}
	else {
		printf("성인입니다.");
	}*/

	/*int a, b, result = 0;
	char Calc;

	printf("정수 a와 정수 b 입력 : ");
	scanf("%d %d", &a, &b);
	getchar();
	printf("연산자 (+, -, *, / 중에 하나) 입력 : ");
	scanf("%c", &Calc);*/

	// 방법1
	/*
	if (Calc == 43) {
		printf("%d + %d = %d\n", a, b, a + b);
	}
	else if (Calc == 45) {
		printf("%d - %d = %d", a, b, a - b);
	}
	else if (Calc == 42) {
		printf("%d * %d = %d", a, b, a * b);
	}
	else if (Calc == 47) {
		printf("%d / %d = %d", a, b, a / b);
	}
	else {
		printf("올바른 숫자 또는 연산자를 입력해주세요.");
	}
	*/

	// 방법 2 (Case switch)
	/*
	switch (Calc) {
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		result = a / b;
		break;
	}

	printf("%d %c %d = %d", a, Calc, b, result);
	*/

	// 도형넓이 알고리즘
	/*
	int A, Adjacent, Opposite;
	int 윗변;

	printf("1. 삼각형 넓이 구하기\n2.사각형 넓이 구하기\n3.사다리꼴 넓이 구하기\n입력 > ");
	scanf("%d", &A);

	printf("밑변의 길이 입력(단위 cm) > ");
	scanf("%d", &Adjacent);
	getchar();
	printf("높이의 길이 입력(단위 cm) > ");
	scanf("%d", &Opposite);

	switch (A) {
	case 1:
		printf("입력한 삼각형의 넓이는 : %d^2cm", (Adjacent * Opposite) / 2);
		break;
	case 2:
		printf("입력한 삼각형의 넓이는 : %d^2cm", Adjacent * Opposite);
		break;
	case 3:
		printf("사다리꼴의 윗변의 길이 입력(단위 cm) : ");
		scanf("%d", &윗변);
		printf("입력한 사다리꼴의 넓이는 : %d^2cm", (윗변 + Adjacent) / 2 * Opposite);
		break;
	}
	*/

	// 출생 띠 구하는 알고리즘
	/*int Year, result;

	printf("태어난 생년을 입력  > ");
	scanf("%d", &Year);
	result = Year % 12;

	switch (result) {
	case 4:
		printf("쥐 띠");
		break;
	case 5:
		printf("소 띠");
		break;
	case 6:
		printf("호랑이 띠");
		break;
	case 7:
		printf("토끼 띠");
		break;
	case 8:
		printf("용 띠");
		break;
	case 9:
		printf("뱀 띠");
		break;
	case 10:
		printf("말 띠");
		break;
	case 11:
		printf("양 띠");
		break;
	case 0:
		printf("원숭이 띠");
		break;
	case 1:
		printf("닭 띠");
		break;
	case 2:
		printf("개 띠");
		break;
	case 3:
		printf("돼지 띠");
		break;
	default:
		break;
	}*/

	// 두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.
	/*int a, b;
	printf("두 정수 a와 b를 입력하세요.(스페이스 구분)>");
	scanf("%d %d", &a, &b);

	if (a > b) {
		printf(">");
	}
	else if (a < b) {
		printf("<");
	}
	else {
		printf("==");
	}*/

	// 점의 좌표를 입력받아 그 점이 어느 사분면에 속하는지 알아내는 프로그램을 작성하시오. 단, x좌표와 y좌표는 모두 양수나 음수라고 가정한다.
	/*int X, Y;
	scanf("%d %d", &X, &Y);

	if (X > 0 && Y > 0)
		printf("1");
	else if (X < 0 && Y > 0)
		printf("2");
	else if (X < 0 && Y < 0)
		printf("3");
	else if (X > 0 && Y < 0)
		printf("4");

	return 0;*/

	/*
	KOI 전자에서는 건강에 좋고 맛있는 훈제오리구이 요리를 간편하게 만드는 인공지능 오븐을 개발하려고 한다.
	인공지능 오븐을 사용하는 방법은 적당한 양의 오리 훈제 재료를 인공지능 오븐에 넣으면 된다.
	그러면 인공지능 오븐은 오븐구이가 끝나는 시간을 분 단위로 자동적으로 계산한다.
	또한, KOI 전자의 인공지능 오븐 앞면에는 사용자에게 훈제오리구이 요리가 끝나는 시각을 알려 주는 디지털 시계가 있다.
	훈제오리구이를 시작하는 시각과 오븐구이를 하는 데 필요한 시간이 분단위로 주어졌을 때,
	오븐구이가 끝나는 시각을 계산하는 프로그램을 작성하시오.
	*/
	// 조진 것같은데
	/*
	int A, B;
	scanf("%d %d", &A, &B);
	int C;
	scanf("%d", &C);
	if (B + C < 60)
		printf("%d %d", A, B + C);
	else {
		int hour = (B + C) / 60;
		int min = (B + C) % 60;
		if (A + hour < 24)
			printf("%d %d", A + hour, min);
		else
			printf("%d %d", A + hour - 24, min);
	}
	*/

	// 3개 주사위의 나온 눈이 주어질 때, 상금을 계산하는 프로그램을 작성 하시오.
	/*
	예를 들어, 3개의 눈 3, 3, 6이 주어지면 상금은 1,000+3×100으로 계산되어 1,300원을 받게 된다.
	또 3개의 눈이 2, 2, 2로 주어지면 10,000+2×1,000 으로 계산되어 12,000원을 받게 된다.
	3개의 눈이 6, 2, 5로 주어지면 그중 가장 큰 값이 6이므로 6×100으로 계산되어 600원을 상금으로 받게 된다.
	*/

	/*
	int dice1, dice2, dice3;

	scanf("%d %d %d", &dice1, &dice2, &dice3);

	if (dice1 == dice2 && dice2 == dice3) {
		printf("%d", 10000 + dice1 * 1000);
	}
	else if (dice1 == dice2 && dice1 != dice3) {
		printf("%d", 100 + dice1 * 100);
	}
	else if (dice1 == dice3 && dice1 != dice2) {
		printf("%d", 100 + dice1 * 100);
	}
	else if (dice2 == dice3 && dice2 != dice1) {
		printf("%d", 100 + dice1 * 100);
	}
	else {
		dice1 = (dice1 > dice2) ? dice1 : dice2;
		dice1 = (dice1 > dice3) ? dice1 : dice3;
		printf("%d", dice1 * 100);
	}
	*/

	// 10개의 정수를 차례로 입력 받아서 다음의 연산을 수행
	/*
	1. 첫번째 입력 값은 아무런 연사을 하지 않는다.
	2. 두번째 이후 입력 값은 다음의 규칙을 따른다.
	   -홀수인 경우 더하기 연산을 한다.
	   -짝수인 경우 나누기 연산을 한다.
	*/

	/*
	int a = 0, b, c, d, e, f, g;
	double sum = 0;

	scanf("%d", &a);
	sum = a;
	scanf("%d", &b);
	sum = b;
	scanf("%d", &c);
	sum = c;
	scanf("%d", &d);
	sum = d;
	scanf("%d", &e);
	sum = e;
	scanf("%d", &f);
	sum = f;
	scanf("%d", &g);
	sum = g;

	scanf("%d", &a);
	if (a % 2 != 0) {
		sum += a;
	}
	else {
		sum /= (double)a;
	}
	*/

	// 반복문 
	// for 문은 조건명제가 참인동안 같은 기능을 일정횟수 반복한다.
	// for문을 사용할 경우, 지역변수, 전역변수 사용에 주의해야한다.
	/*
	int i;
	for (i=1;i <= 5;i += 1) {
		printf("%d\n", i);
	}
	*/

	/*
	for (int i = 1; i <= 10; i += 1) {
		printf("%d) 이름:이지연\n", i);
	}

	for (int i = 1; i <= 20; i += 2) {
		printf("%d) 이름:이지연\n", i);
	}
	*/

	/*
	for (int i = 2; i <= 10; i += 2) {
		printf("%d\n", i);
	}
	*/

	/*
	double Bottom = 10;

	for (Bottom; Bottom <= 20; Bottom+=2) {
		printf("삼각형의 각 변의 길이<%.0f>와 면적 : %.2f\n", Bottom, (Bottom * 10) / 2);
		printf("사각형의 각 변의 길이<%.0f>와 면적 : %.0f\n", Bottom, (Bottom * 10));
	}
	*/

	// for문이 횟수에 더 집중했다면
	// while은 조건에 더 집중하는 편이다. 조건문이 참인 한 while문은 종속기능을 무한하게 실행한다.
	/*
	int i = 1;
	int sum = 0;
	while (i != 0)
	{
		printf("0을 입력하면 반복 중단\n");
		printf("숫자 입력 후 Enter>");
		scanf("%d", &i);
		sum += i;

		if (i == 0) {
			printf("지금까지 입력한 수들의 합 : %d\n", sum);
		}
	}
	*/

	/*
	int A;

	printf("정수값 입력 : ");
	scanf("%d", &A);

	if (A < 0) {
		printf("양수를 입력하세요.");
	}
	else {
		while (A > 0) {
			printf("%d", A % 10);
			A = A / 10;
		}
	}
	*/

	// While문을 for문으로 변환 작성
	/*int i = 11;
	for (i; i <= 30; i += 2) {
		printf("%d\n", i);
	}*/

	// 1부터 n까지의 합
	/*int i, n, sum = 0;
	printf("1부터 n까지의 정수 출력\n");
	printf("정수 n 입력 후 Enter>");
	scanf("%d", &n);

	for (i = 1; i <= n; i ++) {
		sum += i;
		if (i == n){
			printf("%d\n", sum);
		}
	}*/

	// n 팩토리얼
	/*int i, n, sum = 1;
	printf("N 입력 >");
	scanf("%d", &n);

	for (i = 1; i <= n; i++ ) {
		sum *= i;
	}
	printf("%d", sum);*/

	// a, b의 합을 출력
	/*int a, b, i, sum;
	printf("각각의 정수 a, b를 입력하세요.(스페이스 구분)>");
	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++) {
		sum = i;
		sum += i;
	}
	printf("합 : %d", sum);*/

	// a,b의 합 구하기
	/*int a, b, sum;

	printf("a, b 정수 입력(스페이스) >");
	scanf("%d %d", &a, &b);

	for (int i = ((a > b) ? b : a); i < ((a > b) ? a : b); i++) {
		printf("%d\n", i);
		sum += i;
	}
	printf("sum = %d\n", sum);*/

	// 중첩 반복문
	/*for (int i = 1; i <= 3; i += 1) {
		for (int j = 1; j <= 3; j +=1){
			printf("A");
		}
		printf("\n");
	}*/

	/*char Ch;
	int n;

	printf("문자나 기호를 하나 입력 > ");
	scanf("%c", &Ch);
	printf("반복할 횟수 입력 > ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i += 1) {
		for (int j = 1; j <= n; j += 1) {
			printf("%c", Ch);
		}
		printf("\n");
	}*/

	/*char CH;
	int i, j;

	printf("하나의 문자또는 기호입력 > ");
	scanf("%c", &CH);
	printf("행 반복횟수 입력 > ");
	scanf("%d", &i);
	printf("열 반복횟수 입력 > ");
	scanf("%d", &j);

	for (int R = 1; R <= i; R += 1) {
		for (int S = 1; S <= j; S += 1) {
			printf("%c", CH);
		}
		printf("\n");
	}*/

	// 별찍기
	/*
	char ch;
	int n;

	printf("문자나 숫자 또는 기호입력 > ");
	scanf("%c", &ch);
	printf("반복횟수 입력 > ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i += 1) {
		for (int j = n; j >= i; j -= 1) {
			printf(" ");
		}
		for (int k = 1; k <= i; k += 1) {
			printf("%c", ch);
		}
		printf("\n");
	}
	*/

	// 7주차 모의고사

	// 1, 2번 문제 쉬워서 걍 안씀
	// 3번 짝, 홀 구분
	/*int Num, Result;
	scanf("%d", Num);
	Result = Num % 2;
	if (Result == 0) {
		printf("even");
	}
	else {
		printf("odd");
	}*/
	// 4번 학점 계산기
	/*char Grade, Plus;
	scanf("%c%c", &Grade, &Plus);
	if (Grade == 'A') {
		if (Plus == '+') {
			printf("4.5\n");
		}
		else if (Plus == '0') {
			printf("4.0\n");
		}
	}
	else if (Grade == 'B') {
		if (Plus == '+') {
			printf("3.5\n");
		}
		else if (Plus == '0') {
			printf("3.0\n");
		}
	}
	else if (Grade == 'C') {
		if (Plus == '+') {
			printf("2.5\n");
		}
		else if (Plus == '0') {
			printf("2.0\n");
		}
	}
	else if (Grade == 'D') {
		if (Plus == '+') {
			printf("1.5\n");
		}
		else if (Plus == '0') {
			printf("1.0\n");
		}
	}
	else {
		printf("0.0\n");
	}*/
	// 5번 숫자범위 출력
	/*int A, B;
	scanf("%d %d", &A, &B);

	if (A > B) {
		for (int i = B; i <= A; i++) {
			printf("%d", i);
		}
	}
	else if (A < B) {
		for (int j = A; j <= B; j++) {
			printf("%d", j);
		}
	}*/ 
	// 6번 역삼각형 출력
	/*int a, i, j, k;
	printf("수 입력 >");
	scanf("%d", &a);

	for (i = 1; i <= a; i++) {
		for (k = 1; k <= i; k++) {
			printf(" ");
		}
		for (j = a*2; j > i*2-1; j--) {
			printf("*");
		}
		printf("\n");
	}*/
	// 7번 실수->정수
	/*float A;
	scanf("%f", &A);
	printf("%d", (int)A);*/
	// 8번 큰 수 판별
	/*int a, b;
	scanf("%d %d", &a, &b);
	if (a > b) {
		printf("a>b");
	}
	else if (a < b) {
		printf("a<b");
	}*/
	// 9번알파벳 순서출력
	/*char Word;
	printf("알파벳 하나를 대문자로 입력 >");
	scanf("%c", &Word);

	int i;
	for (i = 1; i <= 10; i++) {
		printf("%c ", Word);
		++Word;
	}*/
	// 10번 홀수 출력
	/*int a, i;
	scanf("%d", &a);

	if (a % 2 == 0) {
		++a;
		for (i = 1; i <= 5; i++) {
			printf("%d ", a);
			a += 2;
		}
	}
	else if (a % 2 == 1) {
		for (i = 1; i <= 5; i++) {
			printf("%d ", a);
			a += 2;
		}
	}*/
	// 11번 별직기
	/*int a, i, j;
	printf("수 입력 >");
	scanf("%d", &a);

	for (i = 1; i <= a; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	// 2024.04.29 <중요>
	/*
	함수: 함수란 일정한 기능 하나를 수행하는 일종의 장치이다.
	함수를 만들어 놓으면 같은 기능수행이 필요할 때 가져와서 쓸 수 있다.
	funtion point = fp.
	void main(){}도 하나의 함수이다. void(는출력을 안함) <= output / main() <= (입력) / {(processing...)}
	즉 void main 함수는 여러 함수들을 결합하여 프로그램을 완성시킬 수 있는 부품 조립도의 역할을 한다.
	협업을 할 때는 함수를 따로 만드는 것이 아닌 여러개의 컴포넌트(component)를 만들어 하나의 시스템(함수에 종속)으로 병합하는 방식으로 운영한다.
	여기서 컴포넌트(component)란 함수도 있고 class(나중에 배움)도 있다.

	함수를 실행시키는건 OS(운영체제)다. 함수를 실행시켜 return(반환)값을 받으면 OS가 그 값을 가지고 처리를 하게 된다.
	
	#include <>라는 코드는 헤더파일을 불러오기 위한 명령문이다. printf나 scanf를 사용하기 위해 프로그램의 시작 부분에 stdio.h라는 함수를 불러오는 것처럼.
	stdio.h 말고도 다른 헤더가 정말 많은데 자세한건 공식문서를 참고하자.
	https://learn.microsoft.com/ko-kr/cpp/c-language/?view=msvc-170
	*/

	// 함수 원형(prototype)이란?
	/*함수의 데이터 형, 함수 이름, 함수에서 사용할 인자들을 정의한 부분. 프로그램에서 변수를 사용하고자 할 때
	변수의 데이터 형과 변수 이름을 선언하듯이 함수 여깃 데이터 형을 필요로 한다.

	모든 언어가 다 그렇지만 모든 함수에는 기본적으로 <매개변수>와 <인자값이>존재한다.
	c언어에서는 위의 (int n)처럼 함수 인자의 데이터 형을 정해준다. 즉 해당 자료형을 return(반환)한다.*/
}