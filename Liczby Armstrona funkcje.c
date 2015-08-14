#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void Liczba_Arm_Zakres()
{
    long long int liczba;
    int i=0, liczba_tymczasowa=0, ilosc_cyfr=0, gorny_zakres=0, liczba_tymczasowa_reszta=0;
    double suma=0.0;

    printf("Podaj gorny zakres\n");
    scanf("%d", &gorny_zakres);

    liczba=0;
    liczba_tymczasowa = liczba;

    while(liczba<=gorny_zakres)
    {
        while (liczba_tymczasowa!=0)
        {
            liczba_tymczasowa = liczba_tymczasowa/10;
            ilosc_cyfr++;
        }

            liczba_tymczasowa = liczba;

       while (i<ilosc_cyfr)
       {

           liczba_tymczasowa_reszta = liczba_tymczasowa%10;
           suma = suma + pow(liczba_tymczasowa_reszta, ilosc_cyfr);
           liczba_tymczasowa = liczba_tymczasowa/10;
           i++;

       }

       if (suma == liczba)
       {
           printf("Liczba %d jest liczba Armstronga\n", liczba);
       }
       liczba++;
       ilosc_cyfr=0;
       i=0;
       liczba_tymczasowa = liczba;
       suma=0;
    }

}

void Liczba_Arm_Podaj()

{
    long long int liczba;
    int i=0, liczba_tymczasowa=0, ilosc_cyfr=0, liczba_tymczasowa_reszta=0;
    double suma=0.0;

    printf("Podaj liczbe\n");
    scanf("%llu", &liczba);

    liczba_tymczasowa = liczba;


        while (liczba_tymczasowa!=0)
        {
            liczba_tymczasowa = liczba_tymczasowa/10;
            ilosc_cyfr++;
        }

            liczba_tymczasowa = liczba;

       while (i<ilosc_cyfr)
       {

           liczba_tymczasowa_reszta = liczba_tymczasowa%10;
           suma = suma + pow(liczba_tymczasowa_reszta, ilosc_cyfr);
           liczba_tymczasowa = liczba_tymczasowa/10;
           i++;

       }

       if (suma == liczba)
       {
           printf("Liczba %d jest liczba Armstronga\n", liczba);
       }
       else
       {
           printf("Podana liczba nie jest liczba Armstronga\n");
       }
       liczba++;
       ilosc_cyfr=0;
       i=0;
       liczba_tymczasowa = liczba;
       suma=0;
    }

void Liczba_Arm_Cyfry()

{
    int liczba=0,i=0, liczba_tymczasowa=0, ilosc_cyfr=0, liczba_tymczasowa_reszta=0, istnieje=0;
    double suma=0.0;

    printf("Podaj liczbe w zakresie od 1 do 8 wskazujaca ilucyfrowych liczb Armstronga szukasz\n");
    scanf("%d", &ilosc_cyfr);
    liczba=pow(10,ilosc_cyfr-1);

    while(liczba<pow(10,(double)ilosc_cyfr)) // bo pow zwraca double
        {

       liczba_tymczasowa = liczba;

       while (i<ilosc_cyfr)
       {

           liczba_tymczasowa_reszta = liczba_tymczasowa%10;
           suma = suma + pow(liczba_tymczasowa_reszta, ilosc_cyfr);
           liczba_tymczasowa = liczba_tymczasowa/10;
           i++;

       }

       if (suma == liczba)
       {
           printf("Liczba %d jest liczba Armstronga\n", liczba);
           istnieje=1;
       }

       liczba++;
       i=0;
       liczba_tymczasowa = liczba;
       suma=0;
    }

    if(istnieje==0)(printf("Nie ma zadnej %d - cyfrowej liczby Armstronga", ilosc_cyfr));
}


int main()
{

int wybor, program_dziala=1;

    while(program_dziala!=3)
    {
        printf("Wybierz jedna z ponizszych opcji\n");
        printf("0 - wyszukuje wszystkie liczby Armstronga z przedzialu od 0 do danej liczby\n");
        printf("1 - sprawdza, czy podana liczba jest liczba Armstronga\n");
        printf("2 - wyszukuje wszystkie liczby Armstronga o zadanej liczbie cyfr\n");
        printf("3 - zakoncz dzialanie programu\n");


        scanf("%d", &wybor);
        system("cls");
        switch(wybor)
                {
                    case 0: Liczba_Arm_Zakres(); printf("\n"); break;
                    case 1: Liczba_Arm_Podaj(); printf("\n"); break;
                    case 2: Liczba_Arm_Cyfry(); printf("\n"); break;
                    case 3: program_dziala=3; break;
                }

    }

return 0;
}
