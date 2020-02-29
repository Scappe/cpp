#include <iostream>

using namespace std;

int main() {
    long int pippo = 80;
    long int paperino = 75;

    cout << "il valore di pippo e' " << pippo << "\n";
    cout << "il valore di paperino e' " << paperino << "\n";

     cout << "l'indirizzo di memoria di pippo e' " << &pippo << "\n";
    cout << "l'indirizzo di memoria di paperino e' " << &paperino << "\n";

    long int* pPippo = &pippo;
    long int* pPaperino = &paperino;

    cout << "il valore di pPippo e' " << pPippo << "\n";
    cout << "il valore di pPaperino e' " << pPaperino << "\n";
    
    cout << "l'indirizzo di memoria di pPippo e' " << &pPippo << "\n";
    cout << "l'indirizzo di memoria di pPaperino e' " << &pPaperino << "\n";

    cout<< "il valore puntato da pPippo e' " <<*pPippo << "\n";
    cout<< "il valore puntato da pPaperino e' " <<*pPaperino << "\n";
    
    cout << "l'indirizzo di memoria della funzione main e' " <<  (void*)main  << "\n";

    long int c;
    //...
    long int* pC = &c;
    //...

    return 0;
}