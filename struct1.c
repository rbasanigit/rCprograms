#include <stdio.h>
struct student {
    char name[50];
    int roll_number;
    float marks[3];
    float total;
    float percentage;
};
void inputStudentDetails(struct student *s, int student_num) 
{
    printf("Enter details for student %d:\n", student_num);
    printf("Enter name: ");
    scanf("%s", s->name);
    printf("Enter roll number: ");
    scanf("%d", &s->roll_number);
    s->total = 0;
    printf("Enter marks for 3 subjects:\n");
    for (int i = 0; i < 3; i++) {
        printf("Marks for subject %d: ", i + 1);
        scanf("%f", &s->marks[i]);
        s->total += s->marks[i];
    }
    s->percentage = s->total / 3;
}
void displayStudentDetails(struct student s, int student_num) 
{
    printf("\nDetails of student %d:\n", student_num);
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_number);
    for (int i = 0; i < 3; i++) {
        printf("Marks for subject %d: %.2f\n", i + 1, s.marks[i]);
    }
    printf("Total Marks: %.2f\n", s.total);
    printf("Percentage: %.2f%%\n", s.percentage);
}
int main() 
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student students[n];
    for (int i = 0; i < n; i++) 
    {
        inputStudentDetails(&students[i], i + 1);
    }
    printf("\nStudent Information:\n");
    for (int i = 0; i < n; i++) 
    {
        displayStudentDetails(students[i], i + 1);
    }
    return 0;
}
