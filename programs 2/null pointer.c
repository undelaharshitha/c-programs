// NULL pointer-NULL pointer is a special value that represents a pointer
// that does not point to any valid memory address.
// dereferencing of a NULL pointer can't be done.
#include<stdio.h>
void main()
{  int *ptr=NULL;
   if(ptr==NULL){
    printf("ptr is a NULL pointer");
   }
   else{
    printf("ptr is not a NULL pointer ");
   }

}
