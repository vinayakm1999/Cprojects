#include <stdio.h>
#include <stdlib.h>

struct Student
{
   // int std_id;
    char name[25];
    int age;
    char place[25];
    long int ph_no;
};
FILE *fpp;
void add_details(struct Student *s){
    rewind(fpp);

    if(fpp==NULL){
        printf("file not exist");
        exit(1);
    }
    printf("enter the name of the Student:");
    scanf("%s",&s->name);
    printf("enter the age of the Student:");
    scanf("%d",&s->age);
    printf("enter the phone number:");
    scanf("%ld",&s->ph_no);
    printf("enter the place of the Student:");
    scanf("%s",&s->place);
   // int r = rand();
  //  s->std_id = r;
    fprintf(fpp," %s %d %s %ld\n",s->name,s->age,s->place,s->ph_no);
}
//s->std_id
void display(struct Student *s){

    rewind(fpp);
    if(fpp==NULL){
        printf("file not exist");
        exit(1);
    }

    while(fscanf(fpp," %s %d %s %ld",s->name,&s->age,s->place,&s->ph_no)!=EOF)
        printf(" %s\t\t%d\t%s\t\t%ld\n",s->name,s->age,s->place,s->ph_no);
}
void update(struct Student *s){
      printf("updating details\n");
}

void delete_details(struct Student *s)
{
 printf("deleting details\n");
}
