#include <stdio.h>

typedef struct {
   char id[11];
   int mid;
   int final;
   char grade;
} Student;

char calculateGrade(int score) {
   if (score >= 80) return 'A';
   else if (score >= 70 && score <= 79) return 'B';
   else if (score >= 60 && score <= 69) return 'C';
   else if (score >= 50 && score <= 59) return 'D';
   else return 'F';
}

int main() {
   Student list[5];
   for (int i=0; i<5; i++) {
      printf("Enter Student ID: ");
      scanf("%s", &list[i].id);
      printf("Enter Student Midterm: ");
      scanf("%d", &list[i].mid);
      printf("Enter Student Final: ");
      scanf("%d", &list[i].final);

      list[i].grade = calculateGrade(list[i].mid + list[i].final);
   }
   for (int i=0; i<5; i++) {
      printf("Student ID %s receives grade %c.\n", list[i].id, list[i].grade);
   }
}