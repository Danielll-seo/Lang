#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

/*int add(int n); // 함수 호출
void call_1(int m); // 함수 호출
void call_2(int o); // 함수 호출
int call_3(int p);*/

// int Animal(int Year); //생년에 맞는 띠 출력(미해결)

// 실습문제 13.10 함수호출
/*void Name_reverse(char name[], int len);*/

// 실습문제 13.33 함수호출
/*void transpose(int Help[][3]);*/

int main(void) {
	// 2024.04.29 <중요>

	// 함수: 함수란 일정한 기능 하나를 수행하는 일종의 장치이다.
	/*
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
	변수의 데이터 형과 변수 이름을 선언하듯이 함수 역시 데이터 형을 필요로 한다.

	모든 언어가 다 그렇지만 모든 함수에는 기본적으로 <매개변수>와 <인자값이>존재한다.
	c언어에서는 위의 (int n)처럼 함수 인자의 데이터 형을 정해준다. 즉 해당 자료형을 return(반환)한다.
	*/

	// 재귀함수란?
	/*
	재귀 호출은 자신을 호출하는 과정이 연속적으로 일어나다가 조건에 의해
	함수의 호출이 더 이상 일어나지 않으면 그때부터 결과를 반환하는 과정이
	역순으로 진행되어 최초의 호출이 일어난 곳으로 되돌아 온다.
	*/

	/*int n;
	printf("정수 입력 후 Enter>");
	scanf_s("%d", &n);
	printf("1부터 %d까지의 합 : %d\n", n, add(n));
	return 0;*/

	/*
	call_1(5);
	call_2(5);
	return 0;
	*/

	// 반환 값(return value)이 있는 재귀함수
	/*
	printf("%d\n", call_3(123));
	return 0;*/

	// 12지신 계산 알고리즘 (미해결)
	/*int Year;
	printf("출생년도 입력 후 Enter>");
	scanf_s("%d", &Year);
	printf(Animal(Year));
	return 0;*/

	// 문자 분류 함수
	/*char ch1 = '1', ch2 = 'A';
	if (isalpha(ch2)) {
		printf("%c는 문자입니다.\n", ch2);
	}
	if (isdigit(ch1)) {
		printf("%c는 숫자입니다.\n", ch1);
	}
	printf("소문자 %c\n", tolower(ch2));
	return 0;*/

	// 입력된 문자형 판별, 대문자 <-> 소문자
	/*char ch3;
	printf("정수 or 문자 입력하고 Enter > ");
	scanf_s("%c", &ch3);

	if (isdigit(ch3)) {
		printf("%c는 숫자입니다.", ch3);
	}
	if (isupper(ch3)) {
		printf("소문자 %c,\n", tolower(ch3));
	}
	else if (islower(ch3)) {
		printf("대문자 %c\n", toupper(ch3));
	}*/

	// 배열(Array)
	/*자신의 영문 이름과 한글이름을 문자열도 배열 name1과 name2에
	초기화하시오. 영문자와 달리 한굴 한 글자는 2byte의 공간에 저장됨.*/
	/*char name1[] = {"Daniel"};
	char name2[] = {"서희제"};
	int arr[] = {1, 2, 3, 4, 5};

	printf("영문이름 > %s\n", name1);
	printf("한글이름 > %s\n", name2);
	printf("name1[2] = %c\n", name1[2]);*/

	/*자신의 영문이름을 입력하되 성과 이름 사이에 공백을 넣어 입력.
	공백을 포함한 문자열을 입력하려면 scanf가 아니라 gets를 사용해야한다.*/
	/*char str[10];
	printf("영문이름 입력 후 Enter>");
	gets(str);
	printf("%s", str);*/

	// puts
	/* puts는 printf와 동일함 굳이 안씀 */

	// 2차원 배열(중요)
	/*
	* 2차원 배열은 말그래도 행렬을 의미함.
	* 행렬은 행과 열이 존재함 1차원 행렬에서 행의 개념이 생김.
	*/

	// 2차원 배열 기본 형태
	/*int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int i, j;
	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 2; j++) {
			printf("[%d] [%d] = %d ", i, j, mat[i][j]);
		}
		printf("\n");
	}*/

	/*int mat[3][3] = {{3, 8, 6}, {4, 1, 7}, {5, 2, 9}};
	int i, j;
	for (i = 0;i <= 2;i++) {
		for (j = 0;j <= 2;j++) {
			printf("[%d][%d] = %d ", i, j, mat[i][j]);
		}
		printf("\n");
	}*/

	// 2차원 배열 대각원소 출력
	/*int mat_a[3][3] = {{3, 8, 6}, {4, 1, 7}, {5, 2, 9}};
	int mat_b[3][3] = { {1, 4, 9}, {6, 5, 8}, {2, 3, 7} };
	int i, j;

	for (i = 0;i <= 2;i++) {
		for (j = 0;j <= 2;j++) {
			if (i == j) {
				printf("mat_a[%d][%d]=%d", i, j, mat_a[i][j]);
				printf("mat_b[%d][%d]=%d", i, j, mat_b[i][j]);
			}
		}
		printf("\n");
	}*/

	// 2차원 배열과 문자열
	/*
	2차원 배열을 이용하면 2개 이상의 문자열을 배열에 저장할 수 있다.

	세 개의 국가이름을 2차원 배열에 초기화하여 출력하는 예제
	첫 번째 첨자는 저장할 문자열의 개수(3)를 나타내고, 
	두 번째 첨자는 저장할 문자열의 길이(크기)를 나타낸다.
	*/
	/*char nation[3][9] = {"Korea", "China", "Thailand"};
	for (int i = 0; i < 3; i++) {
		printf("%s\n", nation[i]);
	}*/

	// 함수와 배열
	// 값에 의한 호출 (call by value)
	/*
	인수가 인자에 전달될 때 변수 자체가 전달되는 것이 아니라
	변수에 저장된 값만 전달되므로 함수 정의부분에서
	인자가 변하더라도 인수는 영향을 받지 않는다.
	*/

	// 참조에 의한 호출 (call by referance)
	// 링크참조 : https://kangworld.tistory.com/64

	// 실습문제 13.30
	/* 1차원 배열에 자신의 영문이름을 초기값으로 입력하고 문자열의 길이와 문자형 배열을
	함수의 인자로 처리하여 이름을 역방향으로 출력하는 함수와 프로그램을 작성하시오.
	예를 들어 초기 문자열이 "Ahn Kisoo"라면 함수에 의해 "oosiK nhA"로 출력한다. */
	/*char name[] = "Seo Hui Je";
	int length = 10;

	Name_reverse(name, length);*/

	// 실습문제 13.33
	/* 2차원(3x3)의 오른쪽 내용을 초기화하여 저장한 당므 추력하고, 행과 열의 위치를 바꾸어서 출력하는 부분을 함수(transpose)로 작성하여 프로그램을 완성하시오.
	초기화된 배열을 함수(transpose)의 인자로 처리한다. */
	/*int Help[3][3] = {{2, 4, 6}, {8, 10, 12}, {14, 16, 18}};
	transpose(Help);
	return 0;*/

	// 실습문제 13.39
	/* 임의의 두 집합에 대해 합집합을 출력하는 프로그램을 작성하시오.
	예를 들어 집합 A = {1, 3, 5, 7}, 집합 B = {3, 5, 8, 9, 11}에 대해 합집합 AUB = {1, 3, 5, 7, 8, 9, 11} */
	/*int A[] = {1, 3, 5, 7};
	int B[] = {3, 5, 8, 9, 11};
	int Union[10] = {0};
	int pos = 0;

	for (int i = 0;i < 4;i++) {
		Union[pos++] = A[i];
	}
	for (int i = 0;i < 5;i++) {
		int dup = 0;
		for (int j = 0; j < 4; j++) {
			if (Union[j] == B[i]) {
				dup = 1;
				break;
			}
		}
		if (dup == 0) {
			Union[pos++] = B[i];
		}
	}
	printf("AUB = { ");
	for (int i = 0;i < pos;i++) {
		printf("%d ", Union[i]);
	}
	printf("}");*/

	// 실습문제 ?
	/* 사용자로부터 문자열(영어 소문자)을 입력받아 각 영문자가 몇개 쓰였는지 나타내시오. */
	/*char input[128] = {0};
	int count[26] = { 0 };

	printf("input the text: ");
	gets_s(input, 128);

	for (int i = 0; input[i] != '\0'; i++) {
		count[input[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		printf("%c의 사용횟수 > %d\n", i + 'a', count[i]);
	}*/

	// goofy ahhhhhh 실습문제
	/* 주사위를 100번 굴렸을 때 각 눈이 몇% 확률로 나왔는지 출력하세요. */
	/*int count[6] = {0}; // 각 눈의 카운트를 저장할 배열 초기화
	int i, roll;

	srand(time(NULL)); // 난수 생성기 초기화

	// 주사위를 100번 굴림
	for (i = 0; i < 100; i++) {
		roll = rand() % 6 + 1; // 1에서 6 사이의 난수 생성
		count[roll - 1]++; // 해당 눈의 카운트 증가
	}

	// 각 눈의 확률 출력
	printf("주사위 눈별 확률:\n");
	for (i = 0; i < 6; i++) {
		printf("%d: %.2f%%\n", i + 1, (double)count[i] / 100 * 100);
	}*/

	// 2024.05.28 별찍기 루프 알고리즘
	char arr[128][128] = { 0 };
	int pos = 0, n = 0;

	scanf_s("%d", &n);
	
	for (int i = 0;i < n;i++) {
		for (int j = 0;j <= i;j++) {
			arr[i][j] = '*';
		}
	}

	while (1) {
		system("cls");
		for (int i = 0;i < n;i++) {
			for (int j = pos;j <= i;j++) {
				printf("%c", arr[i][j]);
			}
			for (int j = 0; j < pos; j++) {
				// printf("%c", );
			}
			printf("\n");
		}
		pos = (pos + 1) % n;
		Sleep(1000);
	}

	return 0;
}

/*int add(int n) {
	if (n == 1) {
		return 1;
	}
	return n + add(n - 1); // 재귀함수의 성질 : 자기자신 호출
}*/

/*
void call_1(int m) {
	if (m == 0) {
		return;
	}
	else {
		printf("%d\n", m);
		call_1(m - 1);
	}
}
*/

/*
void call_2(int o) {
	if (o == 0) {
		return;
	}
	else {
		call_2(o - 1);
		printf("%d\n", o);
	}
}
*/

/*
int call_3(int p) {
	if (p == 0) {
		return 0;
	}
	return call_3(p / 10) + 1;
}
*/

// 년 띠 출력 (미해결)
/*int Animal(int Year) {
	if (Year % 1900 == 0) {
		printf("원숭이");
	}
	else if (Year % 12 == 1) {
		printf("닭");
	}
	else if (Year % 12 == 2) {
		printf("개");
	}
	else if (Year % 12 == 3) {
		printf("돼지");
	}
	else if (Year % 12 == 4) {
		printf("쥐");
	}
	else if (Year % 12 == 5) {
		printf("소");
	}
	else if (Year % 12 == 6) {
		printf("범");
	}
	else if (Year % 12 == 7) {
		printf("토끼");
	}
	else if (Year % 12 == 8) {
		printf("용");
	}
	else if (Year % 12 == 9) {
		printf("뱀");
	}
	else if (Year % 12 == 10) {
		printf("말");
	}
	else if (Year % 12 == 11) {
		printf("양");
	}

	Year = (Year - 1900) % 12;
	switch (Year) {
	case 0: return "자";
	case 1: return "축";
	case 2: return "인";
	case 3: return "묘";
	case 4: return "진";
	case 5: return "사";
	case 6: return "오";
	case 7: return "미";
	case 8: return "신";
	case 9: return "유";
	case 10: return "술";
	case 11: return "해";
	}
}*/

// 실습문제 13.30 함수정의
/*void Name_reverse(char name[], int len) {
	for (int i = len; i >= 0; i--) {
		printf("%c", name[i]);
	}
}*/

// 실습문제 13.33 함수정의
/*void transpose(int mat[][3]) {
	for (int i = 0;i < 3;i++) {
		printf("{");
		for (int j = 0;j < 3;j++) {
			printf("%2d ", mat[j][i]);
		}
		printf("}");
		printf("\n");
	}
}*/