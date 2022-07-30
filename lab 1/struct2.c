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
    float total;
    float percentage;

}student;

void total_percentage(student s[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        s[i].total= s[i].biology+s[i].math+s[i].english+s[i].chemistry+s[i].physics;
        s[i].percentage=(s[i].total/500)*100;
    }
}

void roll_no(student s[],int n,int num)
{
    int i=0;
    while(i<n)
    {
        if(num==s[i].rollnumber)
        {
            printf("%d is the roll number of %s\n",num,s[i].name);
            printf("And the student's results are=>");
            printf("%d, %d, %d, %d, %d\n",s[i].biology,s[i].chemistry,s[i].english,s[i].math,s[i].physics);
        }
        i++;
    }
}

void specific_percentage(student s[], int n,int minimum,int maxmimum)
{
    for(int i=0;i<n;i++)
    {
        if(s[i].percentage>minimum && s[i].percentage<maxmimum)
        {
            printf("%s= percentage of %f\n",s[i].name,s[i].percentage);
        }
    }
}

void sorting_total(student s[],int n)
{
    for (int i = 0; i < n - 1; i++)
    { 
        for (int j = 0; j <n - i - 1; j++)
        {
            if (s[j].total > s[j + 1].total)
            {
                // swap temp and elements[i]
                s[n+1] = s[j];
                s[j] = s[j + 1];
                s[j + 1] = s[n+1];
            }
        }
    }
}

void main()
{
    int i,total,j,largest,n,roll;
    student s[100];
    printf("Give the number of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("What is the name of the student %d?\n",i+1);
        scanf("%s",s[i].name);
        printf("What is the rollnumber of student %d?\n",i+1);
        scanf("%d",&s[i].rollnumber);
        printf("English marks of student %d?\n",i+1);
        scanf("%d",&s[i].english);   
        printf("math marks of student %d?\n",i+1);
        scanf("%d",&s[i].math);  
        printf("chemistry marks  of student %d?\n",i+1);
        scanf("%d",&s[i].chemistry);  
        printf("physics marks of student %d?\n",i+1);
        scanf("%d",&s[i].physics);  
        printf("biology marks of student %d?\n",i+1);
        scanf("%d",&s[i].biology); 
    }
    total_percentage(s,n);


    printf("Please enter a roll number of a number\n");
    scanf("%d",&roll);
    roll_no(s,n,roll);
    
    int min, max;
    printf("What is the range of percentage you want to be displayed\n");
    printf("Min");
    scanf("%d",&min);
    printf("max");
    scanf("%d",&max);
    printf("Students with the percentage in range of %d-%d are\n",min,max);
    specific_percentage(s,n,min,max);


    printf("The ascending order of the total marks of students is:\n");
    for(i=0;i<n;i++)
    {
        printf("%s with %f total marks!\n ",s[i].name,s[i].total);
    }
}
