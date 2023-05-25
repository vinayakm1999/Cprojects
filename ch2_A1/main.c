#include <stdio.h>

int main()
{
    int a[]={10,20,30,40,50};
    int *p;
    p=&a;
    int j;
    for(j=0;j<5;j++){
    printf("%d\n",*p);
    p++;
    }
    return 0;
}
//#include <stdio.h>
//void test(int *,int);
//int main() {

//    int a[]={10,20,30,40,50};
//    printf("%d\n",a);
//    printf("%u\n",a+1);
//    printf("%u\n",&a+1);
//    printf("10 = %u\n",&a[0]);
//    printf("20 = %u\n",&a[1]);
//    printf("30 = %u\n",&a[2]);
//    printf("40 = %u\n",&a[3]);
//    printf("50 = %u\n",&a[4]);

//}
