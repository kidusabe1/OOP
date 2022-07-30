#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct employee{
    char name[30];
    char gender[6];
    char designation[30];
    char department[30];
    int age;
    float basicpay;
}employee;

int main()
{
    employee *ptr;
    int n,i;
    float gross_pay;
    printf("Give the number of employees you have\n");
    scanf("%d",&n);
    ptr= (employee*) malloc(n*sizeof(employee));
    for(i=0;i<n;i++)
    {
        printf("PLease give the details of employee %d\t\n",i+1);
        printf("==============\t==============\t============\n");
        printf("name=>\n");
        //my question here is that why are we using & in every scanf??
        scanf("%s",&(ptr+i)->name);
        printf("ggender=>\n");
        scanf("%s",&(ptr+i)->gender);
        printf("age=>\n");
        scanf("%d",&(ptr+i)->age);
        printf("Designation=>\n");
        scanf("%s",&(ptr+i)->designation);
        printf("Department=>\n");
        scanf("%s",&(ptr+i)->department);
        printf("basic pay=>\n");
        scanf("%f",&(ptr+i)->basicpay);
        printf("==============\t==============\t============\n");
        printf("%s is the name of the employee\n",(ptr+i)->name);
    }
    //assuming the dearness allowance is 10%
    for(i=0;i<n;i++)
    {
        gross_pay= (ptr+i)->basicpay + 0.8*(ptr+i)->basicpay + 0.1*(ptr+i)->basicpay;
        printf("The gross pay of employee %d is=>%f\n",i+1,gross_pay);
    }

    return 0;
}