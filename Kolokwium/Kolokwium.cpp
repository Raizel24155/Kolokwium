#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>

using namespace std;

// Kolos 1
bool CzyParzysta(int n);
void LosujTrzy();
int IloscCyfr(int n);
void LiczbyPierwsze(int tab[]);
void Pierwsze(int tab[]);
// Kolos 2
void Wyswietl();
void Podzielniki(int n);
void Uklad(int a, int b);
void Wiek(int rok);

int main()
{
    srand(time(NULL));
    int tablica[100] = { 0 };
    cout << "=================" << endl;
    int liczba = rand() % 1000;
    cout << liczba << endl;
    cout << CzyParzysta(liczba);
    cout << endl << "==============" << endl;
    LosujTrzy();
    cout << endl << "==============" << endl;
    cout << IloscCyfr(liczba);
    cout << endl << "==============" << endl;
    LiczbyPierwsze(tablica);
    //Pierwsze(tablica);
    cout << endl << "==============" << endl;
    for (int i = 0; i < 30; i++)
    {
        cout << tablica[i] << endl;
    }
    cout << "Kolos 2" << endl;

    Wyswietl();
    cout << endl << "==============" << endl;
    int a = rand() % 1000;
    Podzielniki(a);
    cout << endl << "==============" << endl;
    Uklad(a, liczba);
    cout << endl << "==============" << endl;
    int lat = rand() % 40 + (2023 - 39);
    Wiek(lat);
}

void Wiek(int rok)
{
    cout << rok << endl;
    if (2023 - rok >= 18)
    {
        cout << "Pelnoletnia";
    }
    else
    {
        cout << "Niepelnoletnia";
    }
}

void Uklad(int a, int b)
{
    if (a > b)
    {
        cout << b << " , " << a;
    }
    else
    {
        cout << a << " , " << b;
    }

}

void Podzielniki(int n)
{
    int i = 1;
    cout << "X: " << n << endl;
    do
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
        i++;
    } while (i <= n);
}


void Wyswietl()
{
    for (int i = 140; i <= 1410; i++)
    {
        if (i % 16 == 0 && i % 3 == 0)
        {
            cout << i << " , ";
        }
    }
}









//Kolos 1

void Pierwsze(int tab[])
{
    int miejscaTablic = 0;
    int liczba = 2;
    while (miejscaTablic < 100)
    {
        //cout << liczba << " x: ";
        int count = 0;
        for (int k = 1; k <= liczba; k++)
        {
            if (liczba % k == 0)
            {
                count++;
            }
            if (count > 2)
            {
                break;
            }
            //cout << count << endl;
        }
        //cout << "final: " << count << endl;
        if (count == 2)
        {
            tab[miejscaTablic] = liczba;
            miejscaTablic++;
        }
        liczba++;
    }
}


void LiczbyPierwsze(int tabl[])
{
    int miejscaTablic = 0;
    int liczba = 2;
    while (miejscaTablic < 30)
    {
        int count = 0;
        for (int j = 1; j <= liczba; j++)
        {
            if (liczba % j == 0)
            {
                count++;
            }
            if (count > 2)
            {
                break;
            }
        }
        if (count == 2 && liczba % 3 != 0)
        {
            tabl[miejscaTablic] = liczba;
            miejscaTablic++;
        }
        liczba++;
    }
}

int IloscCyfr(int n)
{
    int i = 0;
    do
    {
        i++;
        n /= 10;
    } while (n > 0);
    return i;
}

void LosujTrzy()
{
    int a, b, c;
    do
    {
        a = rand() % 21 - 10;
        b = rand() % 21 - 10;
        c = rand() % 21 - 10;
        cout << "a: " << a << "b: " << b << "c: " << c << endl;
    } while (a == b || a == c || b == c);
}

bool CzyParzysta(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}