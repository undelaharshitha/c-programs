 #include <stdio.h>
 int main()
 { int maths, physics, chemistry, electronics, total;
 printf("Enter marks in Maths: ");
 scanf("%d", &maths);
 printf("Enter marks in Physics: ");
 scanf("%d", &physics);
 printf("Enter marks in Chemistry: ");
 scanf("%d", &chemistry);
  printf("Enter marks in Electronics: ");
  scanf("%d", &electronics);
  total = maths + physics + chemistry + electronics;
  float percentage = (total / 400.0) * 100;
  char grade;
  if (percentage >= 90){
  grade = 'A';
  }
  else if (percentage >= 80) {
    grade = 'B';
  }
  else if (percentage >= 70) {
    grade = 'C';
  }
  else if (percentage >= 60) {
    grade = 'D';
  }
  else {
    grade = 'F';
  }
  printf("Total marks: %d\n", total);
  printf("Percentage: %.2f\n", percentage);
  printf("Grade: %c\n", grade);
  return 0;
 }
