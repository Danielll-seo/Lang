#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>


// �� ��� �˰���
void show(int mat[50][50]) {
    for (int i = 0; i < 50; i++) {
        for (int j = 0; j < 50; j++) {
            if (mat[i][j] == 1) {
                printf("* ");
            }
            else {
                printf("  "); // �������� ����
            }
        }
        printf("\n");
    }
}

double deg2rad(int deg) {
    return (double)deg * (3.141592653589793 / 180); // ���� ���� �� ��Ȯ�ϰ� ����
}

void drawCircle(int mat[50][50], int radius, int x, int y) {
    for (int i = 0; i < 360; i++) {
        int dx = (int)(cos(deg2rad(i)) * radius) + x;
        int dy = (int)(sin(deg2rad(i)) * radius) + y;

        if (dx >= 0 && dx < 50 && dy >= 0 && dy < 50) {
            mat[dx][dy] = 1; // ��輱�� �׸���
        }
    }
}

void deleteCircle(int mat[50][50]) {
    for (int i = 0; i < 50; i++) {
        for (int j = 0; j < 50; j++) {
            mat[i][j] = 0; // ��ü �� ����
        }
    }
}

void getRandomPosition(int* x, int* y) {
    *x = rand() % 50;
    *y = rand() % 50;
}

int main() {
    int mat[50][50] = { 0 };
    int radius = 1;
    int x = 25, y = 25;

    while (1) {
        system("cls");

        if (radius == 10) {
            deleteCircle(mat); // ��ü �� ����
            getRandomPosition(&x, &y); // ���� ��ġ�� �̵�
            radius = 1; // ������ �ʱ�ȭ
        }
        else {
            deleteCircle(mat); // ���� �� ����
            drawCircle(mat, radius, x, y); // ��輱�� �׸���
            show(mat);
            Sleep(1000);
            radius++;
        }
    }

    return 0;
}


