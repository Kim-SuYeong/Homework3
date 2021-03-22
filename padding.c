#include <stdio.h>

struct student {         //구조체 student 생성
    char lastName[13];   //lastName변수 생성->13bytes
    int studentId;       //studentId변수 생성->4bytes
    short grade;         //grade변수 생성->2bytes
};

int main()
{
    printf("[----- [김수영]  [2020039042] -----]\n\n");
    struct student pst;

    printf("size of student = %ld\n", sizeof(struct student));
    printf("size of int = %ld\n", sizeof(int)); 
    printf("size of short = %ld\n", sizeof(short));
    //구조체 student의 총 메모리는 19bytes라고 생각할 수 있지만 24bytes로 출력된다.
    //그 이유는 메모리 경계가 4bytes씩 되어 있는데
    //lastName와 grade는 4bytes씩 나누었을 때, 각각 1,2 bytes가 남고
    //그 모자란 부분을 채우기 위해 총 5bytes를 padding하기 때문에 24bytes가 출력
    
    return 0;
}
