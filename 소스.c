#include <stdio.h>
#include <string.h>
#include <dos.h>
#include <stdlib.h>
#include <time.h>
#include <corecrt_search.h>
#include <conio.h>
#define _size 6
#define _Lsize 30

#define randomize() srand((unsigned)time(NULL)) /* �������� ������ ���� ���� */

/* �ζ� ��ȣ ���� ���α׷� */


int comp(const int *x, const int *y)   /* ���Լ�*/
{
    return (*x-*y);
}

int compp(const int** x, const int** y)   /* 2���� ���Լ�*/
{
    return (*x - *y);
}

 int random(int num) /* �ζǹ�ȣ 0~45 �߻�*/
 {

     return (rand()) % (num);

 }


 /*  �ߺ� ���� ���� �����ؾ��� */


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
    
    printf("�ζǹ�ȣ 1�� ���α׷� v2.0 \n\n");
    printf("�����߿�����~ 1��ǰ� ������ y��, ���Ḧ �Ϸ��� n�� ������~"); 

    
    
    randomize();
    

    while (1) {
        scanf_s("%c", &e, 1);

        if (('n'==e) || ('N' == e))

            exit(1);

        else if (('y'==e) || ('Y' == e)) {


            for (i = 0; i < 6; i++) {

                arr[i] = random(45) + 1;   /*1~45 ���� �������߻��ؼ� �迭�� 6�� ���� ���� */

                for (j = 0; j < i; j++) { // �ϳ��� �迭��ҿ� ��ü�迭��� �ߺ� ��, �ߺ� �� �ٽ� �����̴´�

                    if (arr[i] == arr[j])
                        i--;
                }



            }
        }



             else
        {
            rewind(stdin); // Ű������ۿ��� ����� �� �ʱ�ȭ
        printf("�߸�������!! �ٽ� �����ٷ�?");
             continue;

        }


            qsort(arr, _size, sizeof(int), compp);  // �������� ����


            printf("\n");
            printf("\n");
            printf(" �̹��� 1�� ��÷��ȣ!!! : ");
            for (i = 0; i < 6; i++) {

                printf("%d ", arr[i]);
            }
            
            printf("\n");
            printf("\n �ٽ� �������� y�� , ���Ḧ �� ��� n�� �����ּ��� ");
            rewind(stdin);// Ű������� �ʱ�ȭ

             

        }
        

       
        
    }


