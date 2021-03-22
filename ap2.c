#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [김수영]  [2020039042] -----]\n\n");
    int list[5]; //int를 5개 저장
    int *plist[5]; //int형 포인터 5개 저장

    list[0]=10; 
    list[1]=11;

    plist[0]=(int *)malloc(sizeof(int)); //heap영역에서 int만큼의 크기를 받아서 plist[0]에 넘겨줌

    printf("list[0] \t= %d\n", list[0]); //list[0]에 저장된 값 출력
    printf("address of list \t= %p\n", &list[0]); //list[0]의 주소 출력
    printf("address of list + 0 \t= %p\n", list+0); //(list+0)=&list[0]이므로 list[0]의 주소 출력
    printf("address of list + 1 \t= %p\n", list+1); //list[0] 주소+1*sizeof(int)=&list[1]
    printf("address of list + 2 \t= %p\n", list+2); //list[0] 주소+2*sizeof(int)=&list[2]
    printf("address of list + 3 \t= %p\n", list+3); //list[0] 주소+3*sizeof(int)=&list[3]
    printf("address of list + 4 \t= %p\n", list+4); //list[0] 주소+4*sizeof(int)=&list[4]
    printf("address of list[4] \t= %p\n", &list[4]); //list[4] 주소 출력

    free(plist[0]); //동적할당 해제

}
