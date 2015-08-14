#include <stdio.h>
#include <time.h>

//Uwagi: Program pokazuje dobre wyniki dla elementu o indeksie = 46, potem wyniki sa bledne.

void Fib_dynamiczny()
{
int zmienna_1=0, zmienna_2=1,i=0, n;
long long int wynik=0;
printf("Podaj indeks elementu ciagu Fibonacciego, ktory chcesz poznac (indeksowanie od 0)");
scanf("%d", &n);



    while (i<=n-2)
        {
        wynik=zmienna_1+zmienna_2;
        zmienna_1=zmienna_2;
        zmienna_2=wynik;
        i++;
        }
    printf("Element o indeksie %d jest rowny %llu\n", n,wynik);
}

int Fib_rekurencja(long long int n)
{

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return(Fib_rekurencja(n - 1) + Fib_rekurencja(n - 2));
    }
}

int main()
{
clock_t start, stop;
double time_spent;

int program_dziala,wybor,indeks;
long long int wynik;

while(program_dziala!=2)
    {
        printf("Wybierz jedna z ponizszych opcji\n");
        printf("0 - Fibonacci dynamicznie\n");
        printf("1 - Fibonacci rekurencyjnie\n");
        printf("2 - zakoncz dzialanie programu\n");


        scanf("%d", &wybor);
        //system("cls"); zakomentowac, zeby nie znikaly wyniki
        switch(wybor)
                {
                    case 0: start = clock();Fib_dynamiczny(); stop = clock(); printf("Czas dynamicznego algorytmu: "); break;
                    case 1: printf("Podaj indeks elementu ciagu Fibonacciego, ktory chcesz poznac (indeksowanie od 1)"); scanf("%d", &indeks); start = clock();wynik=Fib_rekurencja(indeks); stop = clock(); printf("Element o indeksie %d jest rowny %llu\n", indeks,wynik); printf("Czas rekurencyjnego algorytmu: "); break;
                    case 2: program_dziala=2; break;
                }
        time_spent = (double)(stop - start) / CLOCKS_PER_SEC;
        printf("%lf\n", time_spent);
    }



return 0;
}
