#include<stdio.h>
struct student
{
    int roll;
    char name[10];
    float marks;
};
struct add
{
    char city[10];
    int pin;
    struct student s1;
};
void main()
{
    struct add e1;
   