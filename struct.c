#include <stdio.h>

struct student1 { //student1 구조체 생성
    char lastName;
    int studentId;
    char grade;
};

typedef struct { //student2 구조체 데이터타입으로 생성
    char lastName; 
    int studentId;
    char grade;
} student2;

//student1과 student2의 차이는 초기화를 할 때, 
//student1은 앞에 struct를 붙여야만 하고 student2는 안 붙여도 된다.

int main()
{
    printf("[----- [김수영]  [2020039042] -----]\n\n");
    struct student1 st1 = {'A', 100, 'A'}; //초기화(struct 있음)

    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B', 200, 'B'}; //초기화(struct 없음)

    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    student2 st3; //st3 선언

    st3 = st2; //st2의 내용을 st3에 대입

    printf("\nst3.lastName = %c\n", st3.lastName); //st2의 내용들이 st3에 정상적으로 출력
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);
   
    /*
    if(st3 == st2)
    {
        printf("equal\n");
    }
    else
    {
        printf("not equal\n");
    }
    */

   //st3==st2로는 not equal이 출력됨(코드 빌드 자체가 안 됨 IN VSCODE)
   //st3와 st2를 비교하기 위해서는 
   //각 변수(내용)들에 대한 비교를 해야한다. 
   //예) if(strcmp(st2.lastName, st3.lastName))
   //           return FALSE;
   
   return 0;

}
