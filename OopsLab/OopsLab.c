#include<stdio.h>

struct Student{
    int rollno;
    char name[50];
    int age;
    float cgpa;
};

int main(){
    struct Student s;

    printf("Enter roll no.:");
    scanf("%d",&s.rollno);

    printf("Enter name:");
    scanf("%s",&s.name);

    printf("Enter age:");
    scanf("%d",&s.age);

    printf("Enter cgpa:");
    scanf("%f",&s.cgpa);

    printf("Roll no. is %d\n",s.rollno);
    printf("Name is %s\n",s.name);
    printf("Age is %d\n",s.age);
    printf("Cgpa is %f",s.cgpa);

    return 0;
}