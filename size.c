#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [김수영]  [2020039042] -----]\n\n");
    int **x;

    printf("sizeof(x) = %lu\n", sizeof(x)); //4 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //4 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //4 출력

    //모두 4가 출력되지만 
    //**x는 int를 point하기 때문에 4가 출력되고
    //x는 주소를, *x도 (한 번 역참조하였기 때문에)주소를 가리켜 4가 출력
    //이 코드를 실행한 머신이 32bits 머신이기 때문에 
    //강의 영상의 64bits 머신과는 다르게 4가 출력됨
}
