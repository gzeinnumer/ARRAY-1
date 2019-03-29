/*
NAMA   : M. FADLI ZEIN
KELAS  : TK 1 B
NO BP  : 1601081035
NP     : ARRAY 1\
*/

#include <stdio.h>
void main()
{
    int nilai[10];
    int i,b;
    float ratarata,total;
    b=0;
    printf("Pembacaan Nilai \n");
    for(i=0; i<10; i++)
    {
        printf("Nilai Maha siswa Ke-%d = ",i+1); scanf("%d",&nilai[i]);
        b=b+1;
    }
    total=0;
    for(i=0; i<10; i++)
    {
        total=total+nilai[i];
    }
    printf("\n\n");
    for(i=0; i<10; i++)
    {
        printf("Nilai Yang Di Inputkan : %d\n",nilai[i]);
    }
    ratarata=total/b;
    printf("Rata Rata : %.2f",ratarata);
}
