struct student s;
void add_details(){
    fp=fopen("C:/Users/This pc/OneDrive/Desktop/student_details.txt","a+");
    if(fp==NULL){
        printf("file not exist");
        exit(1);
    }
        printf("enter the name of the student:");
        scanf("%s",&s.name);
        printf("enter the age of the student:");
        scanf("%d",&s.age);
        printf("enter the phone number:");
        scanf("%ld",&s.ph_no);
        printf("enter the place of the student:");
        scanf("%s",&s.place);

        fprintf(fp,"%s %d %s %ld\n",s.name,s.age,s.place,s.ph_no);
        fclose(fp);
}

void display(){
    fp=fopen("C:/Users/This pc/OneDrive/Desktop/student_details.txt","r");
    if(fp==NULL){
        printf("file not exist");
        exit(1);
    }
    while(fscanf(fp,"%s %d %s %ld",s.name,&s.age,s.place,&s.ph_no)!=EOF)
    printf("%s %d %s %ld\n",s.name,s.age,s.place,s.ph_no);
    fclose(fp);
}
