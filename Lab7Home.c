#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Rus");
    int Year, Week_Day, Vis_Year;
    printf("Введите год\n");
    scanf("%d", &Year);
    if (Year < 2001 || Year > 2100){
        printf("Год не подходит");
        return 0;
    }
    Vis_Year = (Year - 2001)/4;
    Week_Day = (5 + (Year - 2001) + Vis_Year) % 7;
    printf("День недели %d года 1 сентября: \n", Year);
    switch (Week_Day){
        case 0:
        printf("Понедельник\n");
        break;
        case 1:
        printf("Вторник\n");
        break;
        case 2:
        printf("Среда\n");
        break;
        case 3:
        printf("Четверг\n");
        break;
        case 4:
        printf("Пятница\n");
        break;
        case 5:
        printf("Суббота\n");
        break;
        case 6:
        printf("Воскресенье\n");
        break;
}
}