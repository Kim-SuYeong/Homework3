    #include <stdio.h>
    #include <stdlib.h>

    void main()
    {
        printf("[----- [김수영]  [2020039042] -----]\n\n");
        int list[5]; //int를 5개 저장
        int *plist[5]={NULL,}; //int형 포인터 5개 저장 후, NULL로 초기화

        plist[0]=(int *)malloc(sizeof(int)); //heap영역에서 int만큼의 크기를 받아서 plist[0]에 넘겨줌

        list[0]=1;
        list[1]=100;

        *plist[0]=200; //plist[0]이 가리키는 곳의 값에 200저장

        printf("value of list[0] = %d\n", list[0]); //list[0] 값 출력
        printf("address of list[0]       = %p\n", &list[0]); //list[0]의 주소 출력
        printf("value of list            = %p\n", list); //배열에서 이름은 주소를 가리키고, list=&list[0]이므로 list[0] 주소값 출력
        printf("address of list (&list)  = %p\n", &list); //list의 주소값 출력, 따라서 &list[0]=list=&list

        printf("-----------------------------------------\n\n");
        printf("value of list[1]   = %d\n", list[1]); //list[1] 값 출력
        printf("address of list[1] = %p\n", &list[1]); //list[1]의 주소(=list[0]+4) 출력
        printf("value of *(list+1) = %d\n", *(list+1)); //list[0] 주소+1*sizeof(int)에 저장된 값=list[1]
        printf("address of list+1  = %p\n", list+1); //list[0] 주소+1*sizeof(int)=&list[1]

        printf("-----------------------------------------\n\n");

        printf("value of *plist[0] = %d\n", *plist[0]); //plist[0]이 가리키는 곳에 저장된 값
        printf("&plist[0]          = %p\n", &plist[0]); //plist[0]의 주소
        printf("&plist             = %p\n", &plist);//plist[0]의 주소, &plist[0]=&plist
        printf("plist              = %p\n", plist); //plist[0]의 주소, &plist=plist, 따라서 &plist[0]=&plist=plist
        printf("plist[0]           = %p\n", plist[0]); //malloc을 통해 받은 주소가 저장되어 있음
        printf("plist[1]           = %p\n", plist[1]); //처음에 plist를 NULL로 초기화하였고 
        printf("plist[2]           = %p\n", plist[2]); //plist[0]만 동적할당했기 때문에 나머지는 모두 0으로 출력
        printf("plist[3]           = %p\n", plist[3]);
        printf("plist[4]           = %p\n", plist[4]);

        free(plist[0]); //동적할당 해제

    }
