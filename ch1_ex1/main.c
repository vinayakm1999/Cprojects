#include <stdio.h>

int main()
{
    int i=142;
    int *j;
    int **k;

    j=&i;
    k=&j;

    printf("address of i=%u\n",&i);
    printf("address of i=%u\n",j);
    printf("address of i=%u\n",*k);
    printf("address of j=%u\n",&j);
    printf("address of j=%u\n",k);
    printf("address of k=%u\n",&k);

    printf("value of j=%d\n",j);
    printf("value of k=%d\n",k);
    printf("value of i=%d\n",i);
    printf("value of i=%d\n",*(&i));
    printf("value of i=%d\n",*j);
    printf("value of i=%d\n",**k);
    return 0;
}
