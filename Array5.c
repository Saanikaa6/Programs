#include<stdio.h>

int main()
{
    int Arr[4] = {10,20,30,40};

    printf("%d\n",Arr[0]);   //10
    printf("%d\n",Arr[1]);   //20
    printf("%d\n",Arr[2]);   //30
    printf("%d\n",Arr[3]);   //40

    printf("%d\n",sizeof(Arr));    //16
    printf("%d\n",sizeof(Arr[0]));   //4
    printf("%d\n",sizeof(Arr[2]));   //4

    printf("%d\n",Arr);    // he prtyek veli pahilya element cha base address det
    printf("%d\n",&Arr);
    printf("%d\n",&Arr[0]);
    printf("%d\n",&Arr[2]);
    printf("%d\n",&Arr[3]);

    return 0;
}