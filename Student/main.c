#include <stdio.h>
#include<stdlib.h>
#include<student_info.cpp>

void add_details(struct Student *s);
void display(struct Student *s);
void update(struct Student *s);
void delete_details(struct Student *s);

int main()
{
    int choice;
    struct Student s;
    fpp=fopen("E:/let us C/chapter19/examples/Student.txt","a+");
    while(1){
        printf("Enter your choice\n 1.add information\n 2.print details\n 3.To update details\n 4.Delete information\n 5.exit\n ");
        scanf("%d",&choice);
        switch (choice) {
        case 1:
            add_details(&s);
            break;
        case 2:
            display(&s);
            break;
        case 3:
            update(&s);
            break;
        case 4:
            delete_details(&s);
            break;
        case 5:
            exit(1);
            fclose(fpp);
            exit(0);
        }
    }
    return 0;
}
