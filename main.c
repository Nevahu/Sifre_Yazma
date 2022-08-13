#include <stdio.h>
#include <stdlib.h>

void main()
{
    char *p; //pointer olarak atandi
    int i=0, k;// i=0 ve k integer oldu
    p = (char*) malloc(sizeof(char)); //bellekte 1 tane karakter yeri açýldý p o adresi gosteriyor
    while(1)
    {
        *(p+i) = getch();/// i þu an 0 dongu devam ettikce aticak ve sirayla deger almasini saglayacak.
        if(*(p+i) == 13) //eger 13 olursa ki bu da enter demek oluyor dongu kirilir.
            break;
        putchar('*');//13 olmadigi surece 1 tane yildiz bas.
        i++; //i'yi 1 artir.
        p = (char*) realloc(p, (i+1)*sizeof(char)); // Burdan dongu basa gececegi icin yeni bir yer daha ayirmamiz lazim.
    }

    putchar('\n');// alt satira gec
    for(k=0; k<i; k++)
        putchar(*(p+k));
}
