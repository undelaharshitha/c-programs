#include<stdio.h>
void main()
{
    int a[5]={5,3,9,7,2};
    int *p=&a[0];
    printf("Value : %d\n",*p);                 //Value :5
    printf("Address of element:%u\n",p);       //Adress of element:6422280
    p=p+2;                                     //The pointer will point to a[2]
    *p=4;                                      //Now the value of a[2] is modified to 4
    printf("Value :%d\n",*p);                   //Value:9
    printf("Address of element:%u\n",p);        //Adress of element:6422288
}
