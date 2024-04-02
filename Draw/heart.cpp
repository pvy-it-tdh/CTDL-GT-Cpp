#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void textcolor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void love(int luu) {
    // Ma trận trái tim
    int traitim[13][13] = {
        {0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0},
        {0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0},
        {1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
        {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0}
    };

    textcolor(luu % 14 + 1);

    if (luu == 0) {
        for (int i = 0; i < 13; i++) {
            for (int j = 0; j < 13; j++) {
                Sleep(10);
                if (traitim[i][j]) {
                    gotoxy(j + 20, i + 10);
                    printf("%c", 3);
                } else {
                    gotoxy(j + 20, i + 10);
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    if (luu % 2 == 0) {
        for (int i = 0; i < 13; i++) {
            for (int j = 0; j < 13; j++) {
                if (traitim[i][j]) {
                    gotoxy(j + 20, i + 10);
                    printf("%c", 3);
                } else {
                    gotoxy(j + 20, i + 10);
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    textcolor(13); // Màu hồng
    gotoxy(20, 10);
}

int main() {
    int luu = 0;
    while (1) {
        love(luu);
        luu++;
        Sleep(300);
    }

    return 0;
}
