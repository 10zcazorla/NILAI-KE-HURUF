#include <iostream>
#include <conio.h>


int tukar (int nilai);
int main(void)
{
    int nilai;
    printf("Masukkan nilai antara 1 sampai 4 : ");
    scanf("%d", &nilai);
    tukar (nilai);
    getch();
}
int tukar (int nilai)
{
    switch (nilai)
    {
    case 4) :
        printf("Nilai Huruf : A"); break;
    case 3) :
        printf("Nilai Huruf : B"); break;
    case 2) :
        printf("Nilai Huruf : C"); break;
    case 1) :
        printf("Nilai Huruf : D"); break;
    }
    return(nilai);
}
