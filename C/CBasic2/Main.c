#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

/*int add(int n); // �Լ� ȣ��
void call_1(int m); // �Լ� ȣ��
void call_2(int o); // �Լ� ȣ��
int call_3(int p);*/

// int Animal(int Year); //���⿡ �´� �� ���(���ذ�)

// �ǽ����� 13.10 �Լ�ȣ��
/*void Name_reverse(char name[], int len);*/

// �ǽ����� 13.33 �Լ�ȣ��
/*void transpose(int Help[][3]);*/

int main(void) {
	// 2024.04.29 <�߿�>

	// �Լ�: �Լ��� ������ ��� �ϳ��� �����ϴ� ������ ��ġ�̴�.
	/*
	�Լ��� ����� ������ ���� ��ɼ����� �ʿ��� �� �����ͼ� �� �� �ִ�.
	funtion point = fp.
	void main(){}�� �ϳ��� �Լ��̴�. void(������� ����) <= output / main() <= (�Է�) / {(processing...)}
	�� void main �Լ��� ���� �Լ����� �����Ͽ� ���α׷��� �ϼ���ų �� �ִ� ��ǰ �������� ������ �Ѵ�.
	������ �� ���� �Լ��� ���� ����� ���� �ƴ� �������� ������Ʈ(component)�� ����� �ϳ��� �ý���(�Լ��� ����)���� �����ϴ� ������� ��Ѵ�.
	���⼭ ������Ʈ(component)�� �Լ��� �ְ� class(���߿� ���)�� �ִ�.

	�Լ��� �����Ű�°� OS(�ü��)��. �Լ��� ������� return(��ȯ)���� ������ OS�� �� ���� ������ ó���� �ϰ� �ȴ�.

	#include <>��� �ڵ�� ��������� �ҷ����� ���� ��ɹ��̴�. printf�� scanf�� ����ϱ� ���� ���α׷��� ���� �κп� stdio.h��� �Լ��� �ҷ����� ��ó��.
	stdio.h ���� �ٸ� ����� ���� ������ �ڼ��Ѱ� ���Ĺ����� ��������.
	https://learn.microsoft.com/ko-kr/cpp/c-language/?view=msvc-170
	*/

	// �Լ� ����(prototype)�̶�?
	/*�Լ��� ������ ��, �Լ� �̸�, �Լ����� ����� ���ڵ��� ������ �κ�. ���α׷����� ������ ����ϰ��� �� ��
	������ ������ ���� ���� �̸��� �����ϵ��� �Լ� ���� ������ ���� �ʿ�� �Ѵ�.

	��� �� �� �׷����� ��� �Լ����� �⺻������ <�Ű�����>�� <���ڰ���>�����Ѵ�.
	c������ ���� (int n)ó�� �Լ� ������ ������ ���� �����ش�. �� �ش� �ڷ����� return(��ȯ)�Ѵ�.
	*/

	// ����Լ���?
	/*
	��� ȣ���� �ڽ��� ȣ���ϴ� ������ ���������� �Ͼ�ٰ� ���ǿ� ����
	�Լ��� ȣ���� �� �̻� �Ͼ�� ������ �׶����� ����� ��ȯ�ϴ� ������
	�������� ����Ǿ� ������ ȣ���� �Ͼ ������ �ǵ��� �´�.
	*/

	/*int n;
	printf("���� �Է� �� Enter>");
	scanf_s("%d", &n);
	printf("1���� %d������ �� : %d\n", n, add(n));
	return 0;*/

	/*
	call_1(5);
	call_2(5);
	return 0;
	*/

	// ��ȯ ��(return value)�� �ִ� ����Լ�
	/*
	printf("%d\n", call_3(123));
	return 0;*/

	// 12���� ��� �˰��� (���ذ�)
	/*int Year;
	printf("����⵵ �Է� �� Enter>");
	scanf_s("%d", &Year);
	printf(Animal(Year));
	return 0;*/

	// ���� �з� �Լ�
	/*char ch1 = '1', ch2 = 'A';
	if (isalpha(ch2)) {
		printf("%c�� �����Դϴ�.\n", ch2);
	}
	if (isdigit(ch1)) {
		printf("%c�� �����Դϴ�.\n", ch1);
	}
	printf("�ҹ��� %c\n", tolower(ch2));
	return 0;*/

	// �Էµ� ������ �Ǻ�, �빮�� <-> �ҹ���
	/*char ch3;
	printf("���� or ���� �Է��ϰ� Enter > ");
	scanf_s("%c", &ch3);

	if (isdigit(ch3)) {
		printf("%c�� �����Դϴ�.", ch3);
	}
	if (isupper(ch3)) {
		printf("�ҹ��� %c,\n", tolower(ch3));
	}
	else if (islower(ch3)) {
		printf("�빮�� %c\n", toupper(ch3));
	}*/

	// �迭(Array)
	/*�ڽ��� ���� �̸��� �ѱ��̸��� ���ڿ��� �迭 name1�� name2��
	�ʱ�ȭ�Ͻÿ�. �����ڿ� �޸� �ѱ� �� ���ڴ� 2byte�� ������ �����.*/
	/*char name1[] = {"Daniel"};
	char name2[] = {"������"};
	int arr[] = {1, 2, 3, 4, 5};

	printf("�����̸� > %s\n", name1);
	printf("�ѱ��̸� > %s\n", name2);
	printf("name1[2] = %c\n", name1[2]);*/

	/*�ڽ��� �����̸��� �Է��ϵ� ���� �̸� ���̿� ������ �־� �Է�.
	������ ������ ���ڿ��� �Է��Ϸ��� scanf�� �ƴ϶� gets�� ����ؾ��Ѵ�.*/
	/*char str[10];
	printf("�����̸� �Է� �� Enter>");
	gets(str);
	printf("%s", str);*/

	// puts
	/* puts�� printf�� ������ ���� �Ⱦ� */

	// 2���� �迭(�߿�)
	/*
	* 2���� �迭�� ���׷��� ����� �ǹ���.
	* ����� ��� ���� ������ 1���� ��Ŀ��� ���� ������ ����.
	*/

	// 2���� �迭 �⺻ ����
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

	// 2���� �迭 �밢���� ���
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

	// 2���� �迭�� ���ڿ�
	/*
	2���� �迭�� �̿��ϸ� 2�� �̻��� ���ڿ��� �迭�� ������ �� �ִ�.

	�� ���� �����̸��� 2���� �迭�� �ʱ�ȭ�Ͽ� ����ϴ� ����
	ù ��° ÷�ڴ� ������ ���ڿ��� ����(3)�� ��Ÿ����, 
	�� ��° ÷�ڴ� ������ ���ڿ��� ����(ũ��)�� ��Ÿ����.
	*/
	/*char nation[3][9] = {"Korea", "China", "Thailand"};
	for (int i = 0; i < 3; i++) {
		printf("%s\n", nation[i]);
	}*/

	// �Լ��� �迭
	// ���� ���� ȣ�� (call by value)
	/*
	�μ��� ���ڿ� ���޵� �� ���� ��ü�� ���޵Ǵ� ���� �ƴ϶�
	������ ����� ���� ���޵ǹǷ� �Լ� ���Ǻκп���
	���ڰ� ���ϴ��� �μ��� ������ ���� �ʴ´�.
	*/

	// ������ ���� ȣ�� (call by referance)
	// ��ũ���� : https://kangworld.tistory.com/64

	// �ǽ����� 13.30
	/* 1���� �迭�� �ڽ��� �����̸��� �ʱⰪ���� �Է��ϰ� ���ڿ��� ���̿� ������ �迭��
	�Լ��� ���ڷ� ó���Ͽ� �̸��� ���������� ����ϴ� �Լ��� ���α׷��� �ۼ��Ͻÿ�.
	���� ��� �ʱ� ���ڿ��� "Ahn Kisoo"��� �Լ��� ���� "oosiK nhA"�� ����Ѵ�. */
	/*char name[] = "Seo Hui Je";
	int length = 10;

	Name_reverse(name, length);*/

	// �ǽ����� 13.33
	/* 2����(3x3)�� ������ ������ �ʱ�ȭ�Ͽ� ������ ��� �߷��ϰ�, ��� ���� ��ġ�� �ٲپ ����ϴ� �κ��� �Լ�(transpose)�� �ۼ��Ͽ� ���α׷��� �ϼ��Ͻÿ�.
	�ʱ�ȭ�� �迭�� �Լ�(transpose)�� ���ڷ� ó���Ѵ�. */
	/*int Help[3][3] = {{2, 4, 6}, {8, 10, 12}, {14, 16, 18}};
	transpose(Help);
	return 0;*/

	// �ǽ����� 13.39
	/* ������ �� ���տ� ���� �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� ��� ���� A = {1, 3, 5, 7}, ���� B = {3, 5, 8, 9, 11}�� ���� ������ AUB = {1, 3, 5, 7, 8, 9, 11} */
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

	// �ǽ����� ?
	/* ����ڷκ��� ���ڿ�(���� �ҹ���)�� �Է¹޾� �� �����ڰ� � �������� ��Ÿ���ÿ�. */
	/*char input[128] = {0};
	int count[26] = { 0 };

	printf("input the text: ");
	gets_s(input, 128);

	for (int i = 0; input[i] != '\0'; i++) {
		count[input[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		printf("%c�� ���Ƚ�� > %d\n", i + 'a', count[i]);
	}*/

	// goofy ahhhhhh �ǽ�����
	/* �ֻ����� 100�� ������ �� �� ���� ��% Ȯ���� ���Դ��� ����ϼ���. */
	/*int count[6] = {0}; // �� ���� ī��Ʈ�� ������ �迭 �ʱ�ȭ
	int i, roll;

	srand(time(NULL)); // ���� ������ �ʱ�ȭ

	// �ֻ����� 100�� ����
	for (i = 0; i < 100; i++) {
		roll = rand() % 6 + 1; // 1���� 6 ������ ���� ����
		count[roll - 1]++; // �ش� ���� ī��Ʈ ����
	}

	// �� ���� Ȯ�� ���
	printf("�ֻ��� ���� Ȯ��:\n");
	for (i = 0; i < 6; i++) {
		printf("%d: %.2f%%\n", i + 1, (double)count[i] / 100 * 100);
	}*/

	// 2024.05.28 ����� ���� �˰���
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
	return n + add(n - 1); // ����Լ��� ���� : �ڱ��ڽ� ȣ��
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

// �� �� ��� (���ذ�)
/*int Animal(int Year) {
	if (Year % 1900 == 0) {
		printf("������");
	}
	else if (Year % 12 == 1) {
		printf("��");
	}
	else if (Year % 12 == 2) {
		printf("��");
	}
	else if (Year % 12 == 3) {
		printf("����");
	}
	else if (Year % 12 == 4) {
		printf("��");
	}
	else if (Year % 12 == 5) {
		printf("��");
	}
	else if (Year % 12 == 6) {
		printf("��");
	}
	else if (Year % 12 == 7) {
		printf("�䳢");
	}
	else if (Year % 12 == 8) {
		printf("��");
	}
	else if (Year % 12 == 9) {
		printf("��");
	}
	else if (Year % 12 == 10) {
		printf("��");
	}
	else if (Year % 12 == 11) {
		printf("��");
	}

	Year = (Year - 1900) % 12;
	switch (Year) {
	case 0: return "��";
	case 1: return "��";
	case 2: return "��";
	case 3: return "��";
	case 4: return "��";
	case 5: return "��";
	case 6: return "��";
	case 7: return "��";
	case 8: return "��";
	case 9: return "��";
	case 10: return "��";
	case 11: return "��";
	}
}*/

// �ǽ����� 13.30 �Լ�����
/*void Name_reverse(char name[], int len) {
	for (int i = len; i >= 0; i--) {
		printf("%c", name[i]);
	}
}*/

// �ǽ����� 13.33 �Լ�����
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