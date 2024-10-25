#include<stdio.h>

struct student{
    char name[50];
    unsigned int student_id;
    char address[100];
};
int main()
{
    struct student s[20];

    for(int i=0;i<20;i++){

    printf("student details of %d\n",i+1);
    printf("enter student name\n");
    scanf("%s",&s[i].name);
    printf("enter student_id\n");
    scanf("%d",&s[i].student_id);
    printf("enter student address\n");
    scanf("%s",&s[i].address);

    }

    for(int i=0;i<20;i++)
    {
        printf("The entered students details %d\n",i+1);
        printf("%s %d %s\n",s[i].name,s[i].student_id,s[i].address);

    }

}
