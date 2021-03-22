#include <stdio.h>

void print1 (int *ptr, int rows); //print1 함수 void형 선언

int main()
{
     printf("[----- [김수영]  [2020039042] -----]\n\n");
    int one[] = {0, 1, 2, 3, 4};  

    printf("one     = %p\n", one); //배열에서 이름은 주소와 같으므로
    printf("&one    = %p\n", &one);//one=&one=&one[0]이다.
    printf("&one[0] = %p\n", &one[0]);//따라서 모두 one의 주소값이 나옴
    printf("\n");

    print1(&one[0], 5); //함수에 값 대입

    return 0;
}

void print1 (int *ptr, int rows)
{
    int i;
    printf("Address \t Contents\n");
    for(i = 0; i < rows; i++)
    {
        printf("%p \t  %5d\n", ptr + i, *(ptr + i));
        //인덱스가 1씩 증가해가면서 
        //각 인덱스에 해당하는 주소와 값들이 출력된다.
        //주소의 값들은 int형이기 때문에 순차적으로 4bytes씩 증가
    }
    printf("\n");
}
