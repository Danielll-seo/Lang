#include <stdio.h> // stdio �� stadard input output�� ���Ӹ�
#include <math.h>
#include <stdio.h>

/*
�ڷ��� -
1. ������ %d
2. �Ǽ��� %f
3. ������ %c
4. ���ڿ� %s
5. 16���� %x
6. 8���� %0
*/

void main() {
	printf("Hello world!\n");
	printf("���̴� %d���Դϴ�.\n", 21); // ������
	printf("���� ��� : %f\n", 15.5 + 23.87); // �Ǽ���
	printf("�������� %c��.\n", 'K'); // ������
	printf("���ڿ��� %s��.\n", "Nice job buddy."); // ���ڿ�
	// ���ڿ��� �������� ū����ǥ�� ��������ǥ�� �����Ѵ�.
	// �������� �ϳ��� ���ڸ� �Է�,����� �����ϴ�. 'Korea'�� �������̱� ������ ������.

	// %d�� decimal�� ���ڷ� 10�����̴�.
	printf("%d�� %d�� ����մϴ�.\n", 5, 8);
	printf("������ ��� : %d\n", 25);
	printf("������ ��� : %d\n", -17);
	printf("������ ��� : %d\n", 761);
	// ���ٿ� �� �Է��ϴ� ��ĵ� ������ ���߿� ������������ ���ؼ� �ϳ��� �ٿ� �ϳ��� ���(?)�� ���� ���� �� �����ϴ�.

	// %f�� floating point�� ���ڷ� �Ǽ���. ���� float�̶�� ���� ��.
	printf("%f�� %d�� ����մϴ�.\n", 5.5, (int)0.8f); // ���� �Ǽ���%f��\�� 10����%d�ڷ����·� �θ��� �Ǹ� �Ҽ��� �ڿ����� ������ ���ڰ� ���.
	printf("%.1f�� %.1f�� ����մϴ�.\n", 5.5, 0.8); // %�� f������ .n�� �Ҽ��� n��° �ڸ��������� �ǹ��Ѵ�. .n�� ���� ��� �⺻������ 6��° �ڸ����� ��µȴ�.
	printf("%.0f�� �Ҽ��� �ڿ� �ڸ��� ǥ������ �ʽ��ϴ�.\n", 2.5);

	// �ڸ����� ���ߴ°� ���������� �ִ�. n���ڸ��� ����ŭ �����ڴ�(?)�ǹ�
	printf("%5d\n", 123);
	printf("%5d\n", 12345);
	printf("%5d\n", 123456789);

	// %n.af�� �ִµ� �� ���� �����κ��� n��° �ڸ�����, �Ҽ��κ��� a��° �ڸ����� ����϶�� �ǹ�.
	printf("%1.5f\n", 2.123135123235);

	// ���� �԰���
	printf("%d + %d = %d\n", 7, 8, 15);

	printf("%d + %d = %d\n", 9, 6, 9 + 5);
	printf("%d - %d = %d\n", 9, 5, 9 - 5);
	printf("%d * %d = %d\n", 9, 5, 9 * 5);
	printf("%d / %d = %d\n", 9, 5, 9 / 5); // ������ ������ ������ ���������� ���Ǳ� ������ �Ҽ����� ǥ���� �ȵȴ�.
	printf("%d / %d = %f\n", 9, 5, 9. / 5.);

	// ������ ��� ���
	// %c�� character�� ���ڷ� ������ ����� ����Ѵ�. ���� char��� �Ѵ�.

	// �ý�����3.7
	printf("A�ݰ� B���� ����� %.1f���Դϴ�.\n", (85 + 90) / 2.); // or
	printf("%c�ݰ� %c���� ����� %.1f���Դϴ�.\n", 'A', 'B', (85. + 90.) / 2.); // ���� ������ ������ ������.

	// ���ڿ� ��� ���
	// %s �� string�� ���ڷ� ���ڿ��� ����Ѵ�. ���� str�̶�� �Ѵ�. ū����ǥ�� �ٿ�����.
	/*2024.03.12 End*/

	/*// ���� �ǽ� ����
	int a, b, c, e;
	double d;
	a = 5;
	b = 7;
	c = a * b - 5;
	d = a / 2. + b;
	e = 2 * (a + 2*b);
	printf("����1 : %d\n", c);
	printf("����2 : %.2f\n", d);
	printf("����1 : %d\n", e);
	*/

	/*double  a, b, c, d, e;
	a = 5.3;
	b = 7.6;
	c = a / (a + b);
	d = (a - b) / (a + b);
	e = 2 * a * (a - 2 * b);

	printf("����1 : %.2f\n", c);
	printf("����2 : %.2f\n", d);
	printf("����3 : %.2f\n", e);
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

	// �������� ascii code�� ǥ���Ǳ� ������ ������ ���ڳ� ��ȣ���� ��ȣ�� ������ �ִ�.
	// �׷��� ������ ������ ������ ���� ���ϸ� ���� ���� �ش��ϴ� ���ڰ� ���´�.
	/*char ch1;
	ch1 = 'A' + 1;
	printf("%c\n", ch1);*/
	/*2024.03.11�ΰ� 13�ΰ� ��ư End*/

	// �������� ��°� �Է�
	// ������ ����� �� �� �ִٸ� �Էµ� �� �� �ִ�.
	// �� �Է��� �ޱ� �� ���� ���� �ʱ�ȭ �������.
	// scanf("%d".&a);

	/*
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("a+b=%d\n", a + b);
	*/

	/*float a, b;
	printf("10�� ���� A �Է� : ");
	scanf("%f", &a);
	printf("10�� ���� B �Է� : ");
	scanf("%f", &b);

	printf("%.0f + %.0f = %.0f\n", a, b, a + b);
	printf("%.0f - %.0f = %.0f\n", a, b, a - b);
	printf("%.0f * %.0f = %.0f\n", a, b, a * b);
	printf("%f / %f = %f\n", a, b, a / b);
	*/

	/*
	char ch1, ch2;
	printf("���ڸ� �Է��ϰ� Enter>");
	scanf("%c", &ch1);
	printf("���ڸ� �Է��ϰ� Enter>");
	scanf("%c", &ch2);
	printf("�Է��� ���� %c, %c\n", ch1, ch2);
	*/
	// �̷��� ���� ù��° ���ڸ� �ް� ���͸� ������ �� ��ǻ�Ͱ� ���͵� �ϳ��� ���ڷ� �޾Ƶ鿩 ���۷� �Ѿ�鼭 �ι�° �Է��� �ǳʶڴ�.

	/*
	char ch1, ch2;
	printf("���ڸ� �Է��ϰ� Enter>");
	scanf("%c", &ch1);
	getchar();
	printf("���ڸ� �Է��ϰ� Enter>");
	scanf("%c", &ch2);
	printf("�Է��� ���� %c, %c\n", ch1, ch2);
	*/

	/*double a, b, c;
	printf("���� a, b, c�� �Է� : ");
	scanf("%lf %lf %lf", &a, &b, &c);

	printf("3a+4b-6c=%.2lf\n", (3 * a) + (4 * b) - (6 * c));
	printf("2a^2+4bc=%.2lf\n", 2 * (a * a)  + (4 * b * c));
	printf("a+b/c=%.2lf\n", (a + b) / c);
	*/

	/*
	* ���� �̻����̰� �������� �Լ� ����
	* void main() {

		   1.[����� ������ ������ ���� ����]
		   2.[�Է� �κ�]
		   3.[ó�� �κ�]
		   4.[��� �κ�]
	}
	*/

	/*int ����500, ����100, ����50, ����10;

	printf("500��, 100��, 50�� 10���� ������ ���� �Է��ϼ���.(���� ����) : ");
	scanf("%d %d %d %d", &����500, &����100, &����50, &����10);

	printf("���� ����� ���� �ݾ��� �� %d�� �Դϴ�.\n", (����500 * 500) + (����100 * 100) + (����50 * 50) + (����10 * 10));
	*/

	/*
	��� ���忡�� �Ϸ� 500���� ��ǰ�� �����Ѵ�.�� �� �ҷ�ǰ�� ���� n�� �Է¹޾�
	������ǰ�� �������� �ҷ���ǰ�� �������� % ����(�Ҽ� ���� ��°�ڸ�)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	%��ȣ�� ����Ϸ��� printf�� �������� �κп� %%�� ����Ѵ�.
	*/

	/*2024.03.18 End*/

	/*int �ѻ��귮 = 500, �ҷ�ǰ;
	float ����, �����;
	print("�ѻ��귮 500���߿��� �ҷ���ǰ�� ������ �Է��ϼ��� : ");
	scanf("%d", &�ҷ�ǰ);

	�ҷ�ǰ = �ѻ��귮-�ҷ�ǰ;
	*/

	/*double ��ǰ���귮 = 500;
	int �ҷ�ǰ����;

	printf("�ҷ�ǰ ���� �Է�: ");
	scanf("%d", &�ҷ�ǰ����);

	printf("������ǰ ������ : %.2f%%\n", (��ǰ���귮 - �ҷ�ǰ����) / ��ǰ���귮 *100);
	printf("�ҷ���ǰ ������ : %.2f%%\n", �ҷ�ǰ���� / ��ǰ���귮 * 100);
	*/

	/*int k;
	printf("�� �ڸ� 10�� ���� �Է� �� Enter>");
	scanf("%d", &k);
	printf("1�� �ڸ��� %d\n", k % 10);
	k = k / 10;
	printf("10�� �ڸ��� %d\n", k % 10);
	k = k / 10;
	printf("100�� �ڸ��� %d\n", k % 10);*/

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
	printf("a�� �� �Է� : ");
	scanf("%d", &a);
	printf("b�� �� �Է� : ");
	scanf("%d", &b);
	(a > b) ? printf("�� �� ���� ū ���� : %d", a) : printf("�� �� ���� ū ���� : %d", b);
	2024.03.19 ����
	*/

	// ��� if, for, while...
	/*int grade;
	printf("���� ������ �Է��ϰ� Enter>");
	scanf("%d", &grade);
	if (grade > 60) {
		printf("���� �հ�!");
	} // if�� ��������̴�. if �ڿ��� ���Ǹ����� ���̸� if���� ���ӵǾ� �ִ� �ڵ带 �����Ѵ�.
	if (grade < 60) { // else if�� if�� �������� �����ΰ�
		printf("���� ���հ�!");
	}*/

	/*int bornYear, age = 0;
	printf("����⵵�� �Է��ϼ���. >");
	scanf("%d", &bornYear);
	age = 2025 - bornYear;
	if (age <= 20 ) {
		printf("���� �޽��̳� �� �԰� �Ͷ� �ּ���!");
	}
	if (age >  20) {
		printf("����� �����Դϴ�.");
	}*/

	/*char Grade;

	printf("������ ��������� �Է��ϼ���. >");
	scanf("%c", &Grade);

	if (Grade <= 68) {
		printf("�����հ�");
	}
	if (Grade > 68) {
		printf("������հ�");
	}*/

	// if ������� else�� �� �� �ִµ� �̰��� �տ��ִ� ������ ������ ��� �߻��ϴ� ��� ��Ȳ�� ����
	// ��� �������� �˷��ִ� ����̴�.

	/*int BornYear, Age = 0;

	printf("����⵵�� �Է��ϼ���. >");
	scanf("%d", &BornYear);
	Age = 2025 - BornYear;
	if (Age >= 19) {
		printf("�����Դϴ�.");
	}
	else {
		printf("�̼����Դϴ�.");
	}*/

	/*int a = 0, b = 0;
	printf("a �� b �� �� ���� ���� ��������. >");
	scanf("%d %d", a, b);

	if (a > b) {
		printf("������ %f\n", a % b);
	}
	else if (a < b) {
		printf("������ : %f\n", b % a);
	}
	else {
		printf("�� ���� ���� ���Դϴ�.\n");
	}*/

	/*double Number = 0;
	printf("���ڸ� �Է��ϼ���. >");
	scanf("%lf", &Number);

	if (Number != (int)Number) {
		printf("%f", Number - (int)Number);
	}
	else if ((int)Number % 2 == 0) {
		printf("¦�� �Դϴ�.");
	}
	else {
		printf("Ȧ�� �Դϴ�.");
	}*/
	// 2024.03.26 End

	// ������ ���ϴ� �˰���
	/*int Year;
	printf("�⵵�� �Է��ϼ���. >");
	scanf("%d", &Year);
	if (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0) {
		printf("�Է��� ���� <%d>���� �����Դϴ�.\n", Year);
	}
	else {
		printf("�Է��� ���� <%d>���� ����Դϴ�.\n", Year);
	}*/

	// �������ڸ� ����� ���� �˰���
	/*int Age;
	printf("���� �Է� >");
	scanf("%d", Age);
	if (Age >= 12 && Age <= 18) {
		printf("�̼����� �Դϴ�.");
	}
	else {
		printf("�����Դϴ�.");
	}*/

	/*int a, b, result = 0;
	char Calc;

	printf("���� a�� ���� b �Է� : ");
	scanf("%d %d", &a, &b);
	getchar();
	printf("������ (+, -, *, / �߿� �ϳ�) �Է� : ");
	scanf("%c", &Calc);*/

	// ���1
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
		printf("�ùٸ� ���� �Ǵ� �����ڸ� �Է����ּ���.");
	}
	*/

	// ��� 2 (Case switch)
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

	// �������� �˰���
	/*
	int A, Adjacent, Opposite;
	int ����;

	printf("1. �ﰢ�� ���� ���ϱ�\n2.�簢�� ���� ���ϱ�\n3.��ٸ��� ���� ���ϱ�\n�Է� > ");
	scanf("%d", &A);

	printf("�غ��� ���� �Է�(���� cm) > ");
	scanf("%d", &Adjacent);
	getchar();
	printf("������ ���� �Է�(���� cm) > ");
	scanf("%d", &Opposite);

	switch (A) {
	case 1:
		printf("�Է��� �ﰢ���� ���̴� : %d^2cm", (Adjacent * Opposite) / 2);
		break;
	case 2:
		printf("�Է��� �ﰢ���� ���̴� : %d^2cm", Adjacent * Opposite);
		break;
	case 3:
		printf("��ٸ����� ������ ���� �Է�(���� cm) : ");
		scanf("%d", &����);
		printf("�Է��� ��ٸ����� ���̴� : %d^2cm", (���� + Adjacent) / 2 * Opposite);
		break;
	}
	*/

	// ��� �� ���ϴ� �˰���
	/*int Year, result;

	printf("�¾ ������ �Է�  > ");
	scanf("%d", &Year);
	result = Year % 12;

	switch (result) {
	case 4:
		printf("�� ��");
		break;
	case 5:
		printf("�� ��");
		break;
	case 6:
		printf("ȣ���� ��");
		break;
	case 7:
		printf("�䳢 ��");
		break;
	case 8:
		printf("�� ��");
		break;
	case 9:
		printf("�� ��");
		break;
	case 10:
		printf("�� ��");
		break;
	case 11:
		printf("�� ��");
		break;
	case 0:
		printf("������ ��");
		break;
	case 1:
		printf("�� ��");
		break;
	case 2:
		printf("�� ��");
		break;
	case 3:
		printf("���� ��");
		break;
	default:
		break;
	}*/

	// �� ���� A�� B�� �־����� ��, A�� B�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	/*int a, b;
	printf("�� ���� a�� b�� �Է��ϼ���.(�����̽� ����)>");
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

	// ���� ��ǥ�� �Է¹޾� �� ���� ��� ��и鿡 ���ϴ��� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. ��, x��ǥ�� y��ǥ�� ��� ����� ������� �����Ѵ�.
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
	KOI ���ڿ����� �ǰ��� ���� ���ִ� ������������ �丮�� �����ϰ� ����� �ΰ����� ������ �����Ϸ��� �Ѵ�.
	�ΰ����� ������ ����ϴ� ����� ������ ���� ���� ���� ��Ḧ �ΰ����� ���쿡 ������ �ȴ�.
	�׷��� �ΰ����� ������ ���챸�̰� ������ �ð��� �� ������ �ڵ������� ����Ѵ�.
	����, KOI ������ �ΰ����� ���� �ո鿡�� ����ڿ��� ������������ �丮�� ������ �ð��� �˷� �ִ� ������ �ð谡 �ִ�.
	�����������̸� �����ϴ� �ð��� ���챸�̸� �ϴ� �� �ʿ��� �ð��� �д����� �־����� ��,
	���챸�̰� ������ �ð��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	*/
	// ���� �Ͱ�����
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

	// 3�� �ֻ����� ���� ���� �־��� ��, ����� ����ϴ� ���α׷��� �ۼ� �Ͻÿ�.
	/*
	���� ���, 3���� �� 3, 3, 6�� �־����� ����� 1,000+3��100���� ���Ǿ� 1,300���� �ް� �ȴ�.
	�� 3���� ���� 2, 2, 2�� �־����� 10,000+2��1,000 ���� ���Ǿ� 12,000���� �ް� �ȴ�.
	3���� ���� 6, 2, 5�� �־����� ���� ���� ū ���� 6�̹Ƿ� 6��100���� ���Ǿ� 600���� ������� �ް� �ȴ�.
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

	// 10���� ������ ���ʷ� �Է� �޾Ƽ� ������ ������ ����
	/*
	1. ù��° �Է� ���� �ƹ��� ������ ���� �ʴ´�.
	2. �ι�° ���� �Է� ���� ������ ��Ģ�� ������.
	   -Ȧ���� ��� ���ϱ� ������ �Ѵ�.
	   -¦���� ��� ������ ������ �Ѵ�.
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

	// �ݺ��� 
	// for ���� ���Ǹ����� ���ε��� ���� ����� ����Ƚ�� �ݺ��Ѵ�.
	// for���� ����� ���, ��������, �������� ��뿡 �����ؾ��Ѵ�.
	/*
	int i;
	for (i=1;i <= 5;i += 1) {
		printf("%d\n", i);
	}
	*/

	/*
	for (int i = 1; i <= 10; i += 1) {
		printf("%d) �̸�:������\n", i);
	}

	for (int i = 1; i <= 20; i += 2) {
		printf("%d) �̸�:������\n", i);
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
		printf("�ﰢ���� �� ���� ����<%.0f>�� ���� : %.2f\n", Bottom, (Bottom * 10) / 2);
		printf("�簢���� �� ���� ����<%.0f>�� ���� : %.0f\n", Bottom, (Bottom * 10));
	}
	*/

	// for���� Ƚ���� �� �����ߴٸ�
	// while�� ���ǿ� �� �����ϴ� ���̴�. ���ǹ��� ���� �� while���� ���ӱ���� �����ϰ� �����Ѵ�.
	/*
	int i = 1;
	int sum = 0;
	while (i != 0)
	{
		printf("0�� �Է��ϸ� �ݺ� �ߴ�\n");
		printf("���� �Է� �� Enter>");
		scanf("%d", &i);
		sum += i;

		if (i == 0) {
			printf("���ݱ��� �Է��� ������ �� : %d\n", sum);
		}
	}
	*/

	/*
	int A;

	printf("������ �Է� : ");
	scanf("%d", &A);

	if (A < 0) {
		printf("����� �Է��ϼ���.");
	}
	else {
		while (A > 0) {
			printf("%d", A % 10);
			A = A / 10;
		}
	}
	*/

	// While���� for������ ��ȯ �ۼ�
	/*int i = 11;
	for (i; i <= 30; i += 2) {
		printf("%d\n", i);
	}*/

	// 1���� n������ ��
	/*int i, n, sum = 0;
	printf("1���� n������ ���� ���\n");
	printf("���� n �Է� �� Enter>");
	scanf("%d", &n);

	for (i = 1; i <= n; i ++) {
		sum += i;
		if (i == n){
			printf("%d\n", sum);
		}
	}*/

	// n ���丮��
	/*int i, n, sum = 1;
	printf("N �Է� >");
	scanf("%d", &n);

	for (i = 1; i <= n; i++ ) {
		sum *= i;
	}
	printf("%d", sum);*/

	// a, b�� ���� ���
	/*int a, b, i, sum;
	printf("������ ���� a, b�� �Է��ϼ���.(�����̽� ����)>");
	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++) {
		sum = i;
		sum += i;
	}
	printf("�� : %d", sum);*/

	// a,b�� �� ���ϱ�
	/*int a, b, sum;

	printf("a, b ���� �Է�(�����̽�) >");
	scanf("%d %d", &a, &b);

	for (int i = ((a > b) ? b : a); i < ((a > b) ? a : b); i++) {
		printf("%d\n", i);
		sum += i;
	}
	printf("sum = %d\n", sum);*/

	// ��ø �ݺ���
	/*for (int i = 1; i <= 3; i += 1) {
		for (int j = 1; j <= 3; j +=1){
			printf("A");
		}
		printf("\n");
	}*/

	/*char Ch;
	int n;

	printf("���ڳ� ��ȣ�� �ϳ� �Է� > ");
	scanf("%c", &Ch);
	printf("�ݺ��� Ƚ�� �Է� > ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i += 1) {
		for (int j = 1; j <= n; j += 1) {
			printf("%c", Ch);
		}
		printf("\n");
	}*/

	/*char CH;
	int i, j;

	printf("�ϳ��� ���ڶǴ� ��ȣ�Է� > ");
	scanf("%c", &CH);
	printf("�� �ݺ�Ƚ�� �Է� > ");
	scanf("%d", &i);
	printf("�� �ݺ�Ƚ�� �Է� > ");
	scanf("%d", &j);

	for (int R = 1; R <= i; R += 1) {
		for (int S = 1; S <= j; S += 1) {
			printf("%c", CH);
		}
		printf("\n");
	}*/

	// �����
	/*
	char ch;
	int n;

	printf("���ڳ� ���� �Ǵ� ��ȣ�Է� > ");
	scanf("%c", &ch);
	printf("�ݺ�Ƚ�� �Է� > ");
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

	// 7���� ���ǰ��

	// 1, 2�� ���� ������ �� �Ⱦ�
	// 3�� ¦, Ȧ ����
	/*int Num, Result;
	scanf("%d", Num);
	Result = Num % 2;
	if (Result == 0) {
		printf("even");
	}
	else {
		printf("odd");
	}*/
	// 4�� ���� ����
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
	// 5�� ���ڹ��� ���
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
	// 6�� ���ﰢ�� ���
	/*int a, i, j, k;
	printf("�� �Է� >");
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
	// 7�� �Ǽ�->����
	/*float A;
	scanf("%f", &A);
	printf("%d", (int)A);*/
	// 8�� ū �� �Ǻ�
	/*int a, b;
	scanf("%d %d", &a, &b);
	if (a > b) {
		printf("a>b");
	}
	else if (a < b) {
		printf("a<b");
	}*/
	// 9�����ĺ� �������
	/*char Word;
	printf("���ĺ� �ϳ��� �빮�ڷ� �Է� >");
	scanf("%c", &Word);

	int i;
	for (i = 1; i <= 10; i++) {
		printf("%c ", Word);
		++Word;
	}*/
	// 10�� Ȧ�� ���
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
	// 11�� ������
	/*int a, i, j;
	printf("�� �Է� >");
	scanf("%d", &a);

	for (i = 1; i <= a; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	// 2024.04.29 <�߿�>
	/*
	�Լ�: �Լ��� ������ ��� �ϳ��� �����ϴ� ������ ��ġ�̴�.
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
	c������ ���� (int n)ó�� �Լ� ������ ������ ���� �����ش�. �� �ش� �ڷ����� return(��ȯ)�Ѵ�.*/
}