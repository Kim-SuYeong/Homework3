#include <stdio.h>

#define MAX_SIZE 100

float sum(float [], int); //sum함수 float형으로 선언
float input[MAX_SIZE], answer;
int i;
void main(void)
{
    printf("[----- [김수영]  [2020039042] -----]\n\n");
    for(i=0; i < MAX_SIZE; i++)
    {
        input[i]=i; //0~99까지 배열 input에 0~99를 순차적으로 넣음
    }
    printf("address of input = %p\n", input); //input의 주소 출력

    answer = sum(input, MAX_SIZE); //sum함수에서 return받은 값을 answer에 넣음
    printf("The sum is: %f\n", answer); //0~99까지의 자연수의 합 출력
}

float sum(float list[], int n)
{
    printf("value of list = %p\n", list); //list에 input의 주소를 복사해 왔기 때문에 input의 주소 출력
    printf("address of list = %p\n\n", &list); //list의 주소 출력

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
    {
        tempsum += list[i]; //tempsum=tempsum+list[i] 연산을 반복함으로써
                            //0~99의 자연수의 합이 tempsum에 최종적으로 저장 
    }
    return tempsum; //0~99까지의 자연수 합 return
}
