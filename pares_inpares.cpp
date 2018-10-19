#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int pares[8],inpares[8],cont;
    float test;
    cont = 0;
    for(int e = 0;e<7;e++){
          cout << "por favor ingrese un cero o un uno \n";
          cin  >> pares[e];
          while(pares[e] > 1 || pares[e] < 0){
                         cout << "ingrese otro  \n";
                         cin  >> pares[e];
          }
    }
    for(int e = 0;e<7;e++){
        if(pares[e] == 1){
                    cont = cont +1;
        }
    }
    
    test = cont % 2;
    if(test == 0){
    pares[7] = 0;
    }else{
          pares[7] = 1;
    }
    
    for(int e = 0;e<8;e++){
            cout << pares[e];
    }
    cout << "\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}
