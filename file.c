#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<stdbool.h>

#define NAME_LEN 30
#define MAX_STUDENTS 50
#define HOME_LEN 10
#define dataSource "studentList.txt"

struct classList
{
    uint8_t id;
    char name[NAME_LEN];
    char home[HOME_LEN];
    float score;
}student;

int main()
{
    int order;
    bool ask = 0;
    bool repeat = 0;
    do 
    {
        repeat = 0;
        FILE* fp = fopen(dataSource, "a");

        printf ("Enter student's informations:\n");
        printf ("ID: ");
        scanf("%d", &student.id);
        while(getchar() != '\n');
        printf ("Name: ");
        fgets(student.name, NAME_LEN, stdin);
        //while(getchar() != '\n');
        printf ("Home Land: ");
        fgets(student.home, HOME_LEN, stdin);
        //while(getchar() != '\n');
        printf ("Score: ");
        scanf("%f", &student.score);

        fprintf(fp, "%-3d %-30s %-10s%-5.2f\n", student.id, student.name, student.home, student.score);
        fclose(fp);

        printf ("Do you want to ad more student?\n1. Yes\n0. No\n");
        scanf ("%d", &ask);
        if (ask == 1)
        {
            repeat = 1;
        }
    }
    while(repeat == 1);

    return 0;
}