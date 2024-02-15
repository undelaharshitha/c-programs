 #include<stdio.h>
  #include<math.h>
   int main()
  { float x1,x2,y1,y2,distance;
    printf("Enter coardinates of first point(x1,y1):\n");
    scanf("%f%f",&x1,&y1);
    printf("Enter coordinates of second point(x2,y2):\n");
    scanf("%f%f",&x2,&y2);
    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
   printf ("Distance=%.2f",distance);
        return 0;
 }
