#include <stdio.h>
#include <string.h>
#include <dos.h>
#include <stdlib.h>
#include <time.h>
#include <corecrt_search.h>
#include <conio.h>
#define _size 6
#define _Lsize 30

#define randomize() srand((unsigned)time(NULL)) /* 난수씨드 무작위 선정 기준 */

/* 로또 번호 생성 프로그램 */


int comp(const int *x, const int *y)   /* 비교함수*/
{
    return (*x-*y);
}

int compp(const int** x, const int** y)   /* 2차원 비교함수*/
{
    return (*x - *y);
}

 int random(int num) /* 로또번호 0~45 발생*/
 {

     return (rand()) % (num);

 }


 /*  중복 숫자 제거 개선해야함 */


 void main(void)
 {
     int k;
     int i;
     int j;

     char e = 0;

     int arr[_size] = { 0, };
     int brr[][_Lsize] = { 0, };
     int** py;
     py = brr;
    
    printf("로또번호 1등 프로그램 v2.0 \n\n");
    printf("영구야영구야~ 1등되고 싶으면 y를, 종료를 하려면 n을 눌러줘~"); 

    
    
    randomize();
    

    while (1) {
        scanf_s("%c", &e, 1);

        if (('n'==e) || ('N' == e))

            exit(1);

        else if (('y'==e) || ('Y' == e)) {


            for (i = 0; i < 6; i++) {

                arr[i] = random(45) + 1;   /*1~45 숫자 무작위발생해서 배열에 6개 숫자 저장 */

                for (j = 0; j < i; j++) { // 하나의 배열요소와 전체배열요소 중복 비교, 중복 시 다시 난수뽑는다

                    if (arr[i] == arr[j])
                        i--;
                }



            }
        }



             else
        {
            rewind(stdin); // 키보드버퍼에서 저장된 것 초기화
        printf("잘못눌렀어!! 다시 눌러줄래?");
             continue;

        }


            qsort(arr, _size, sizeof(int), compp);  // 숫자차순 정렬


            printf("\n");
            printf("\n");
            printf(" 이번주 1등 당첨번호!!! : ");
            for (i = 0; i < 6; i++) {

                printf("%d ", arr[i]);
            }
            
            printf("\n");
            printf("\n 다시 받으려면 y를 , 종료를 할 경우 n을 눌러주세요 ");
            rewind(stdin);// 키보드버퍼 초기화

             

        }
        

       
        
    }


