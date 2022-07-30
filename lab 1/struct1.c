#include <stdio.h>
#include <string.h>
typedef struct student{
    char name[30];
    int rollnumber;
    int english;
    int math;
    int chemistry;
    int physics;
    int biology;

}student;

void main()
{
    student s1;
    printf("What is the name of the student?\n");
    scanf("%s",s1.name);
    printf("What is the rollnumber\n");
    scanf("%d",&s1.rollnumber);
    printf("English marks?\n");
    scanf("%d",&s1.english);   
    printf("math marks?\n");
    scanf("%d",&s1.math);  
    printf("chemistry marks?\n");
    scanf("%d",&s1.chemistry);  
    printf("physics marks?\n");
    scanf("%d",&s1.physics);  
    printf("biology marks?\n");
    scanf("%d",&s1.biology);  

    printf("The details of student 1 are as follows\n");
    printf("Name: %s\n",s1.name);
    printf("roll number: %d\n",s1.rollnumber);
    printf("English marks: %d\n",s1.english);
    printf("math marks: %d\n",s1.math);
    printf("chemistry marks: %d\n",s1.chemistry);
    printf("physics marks: %d\n",s1.physics);
    printf("biology marks: %d\n",s1.biology);

}
