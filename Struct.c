///////////// STRUCTURES (a collection of values of different data types) /////////////////
#include<stdio.h>
#include<string.h>
// struct stud {
//     int rollno;
//     float cgpa;
//     char name[100];
// };
// int main()
// {
//     struct stud s1;  // to store more no.of student data inplace of s1 take s2, s3, ....so on
//     s1.rollno = 1001;
//     s1.cgpa = 8.9;
//     // s1.name = "rishikha";  // cannot use this syntax
//     strcpy(s1.name, "rishikha");
//     printf("---------- STUDENT DETAILS ---------\n");
//     printf("Roll No : %d\n", s1.rollno);
//     printf("CGPA : %f\n", s1.cgpa);
//     printf("Name : %s\n", s1.name);
//     return 0 ;
// }

////////////// ARRAY OF STRUCTURES /////////////////
// struct student {
//     int rollno;
//     float cgpa;
//     char name[100];
// };
// int main() {
//     struct student ece[100];
//     ece[0].rollno = 1001;
//     ece[0].cgpa = 9.7;
//     strcpy(ece[0].name, "rishaan");
//     printf("student name : %s\n", ece[0].name);
//     return 0 ; 
// }

/////////////// INITIALIZING STRUCTURES ///////////////
// struct stud {
//     int rollno;
//     float cgpa;
//     char name[100];
// };
// int main()
// {
//     struct stud s1 = {1001, 8.3, "rakesh"};
//     printf("rollno : %d\n", s1.rollno);
//     return 0 ;
// }

//////////////// POINTER TO STRUCTURE AND ARROW OPERATOR ////////////////
// struct stud {
//     int rollno;
//     float cgpa;
//     char name[100];
// };
// int main()
// {
//     struct stud s1 = {1001, 8.3, "rakesh"};
//     printf("rollno : %d\n", s1.rollno);
//     struct stud *ptr = &s1;
//     printf("rollno : %d\n", (*ptr).rollno);
//     printf("stud->rollno : %d\n", ptr->rollno);
//     printf("stud->cgpa : %f\n", ptr->cgpa);
//     printf("stud->name : %s\n", ptr->name);
//     return 0 ;
// }

///////////////// PASSING A STRUCTURE TO A FUNCTION //////////////
// struct stud {
//     int rollno;
//     float cgpa;
//     char name[100];
// };
// void printInfo(struct stud s1);
// int main()
// {
//     struct stud s1 = {1001, 8.3, "rakesh"};
//     printInfo(s1);
//     return 0 ;
// }
// void printInfo(struct stud s1)
// {
//     printf("---------- student information -----------\n");
//     printf("rollno : %d\n", s1.rollno);
//     printf("cgpa : %f\n", s1.cgpa);
//     printf("name : %s\n", s1.name);
// }

///////////////////// TYPEDEF KEYWORD (used to create alias for data types) ///////////////////////
// typedef struct student {
//     int rollno;
//     float cgpa;
//     char name[100];
// }stud;
// typedef struct computerengineerstudent {
//     int rollno;
//     float cgpa;
//     char name[100];
// }coe;
// int main()
// {
//     coe s1;  //this is shorter version for (struct computerengineerstudent s1;)
//     s1.rollno = 1005;
//     s1.cgpa = 7.3;
//     strcpy(s1.name, "tanisha");
//     printf("student name : %s\n", s1.name);
//     return 0 ;
// }

/////////////// ENTER ADDRESS (HOUSE NO, BLOCK, CITY, STATE) OF 5 PEOPLE ///////////////
// 

/////////// CREATE A STRUCTURE TO STORE VECTORS. THEN MAKE A FUNCTION TO RETURN THE SUM OF 2 VECTORS. /////////////////////
// struct vector {
//     int x;
//     int y;
// };
// void calcSum(struct vector v1, struct vector v2, struct vector sum);
// int main() {
//     struct vector v1 = {5, 6};
//     struct vector v2 = {3, 8};
//     struct vector sum = {0};
//     calcSum(v1, v2, sum);
//     return 0 ;
// }
// void calcSum(struct vector v1, struct vector v2, struct vector sum) {
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;
//     printf("sum of x : %d\n", sum.x);
//     printf("sum of y : %d\n", sum.y);
// }

/////////////// CREATE A STRUCTURE TO STORE COMPLEX NUMBERS (using arrow operator) /////////////////////
struct complex {
    int real;
    int img;
};
int main() {
    struct complex c1 = {5, 8};
    struct complex *ptr = &c1;
    printf("real part : %d\n", c1.real);
    printf("imaginary part : %d\n", c1.img);
    return 0 ;
}

