#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //typo N_ELEMENTS , és nem kell a heapre allokálni a new keyword segítségével, mivel az N_ELEMENTS egy constexpr változó 
    std::cout << '1-100 ertekek duplazasa' // '' helyett lehetne "" és hiányzik egy ;
    for (int i = 0;) // hibás ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // hibás ciklusfeltétel és ciklusmag
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // nem árt ha nullára inicializáljuk
    for (int i = 0; i < N_ELEMENTS, i++) // a ciklus definicióban hiányzik egy pontosvesszo
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}