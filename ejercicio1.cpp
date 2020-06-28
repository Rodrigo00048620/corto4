#include <iostream>
using namespace std;
char lol(char x){
    switch (x){
    case 'm': return x = '0';
        break;
    case 'u': return x = '1';
        break;
    case 'r': return x = '2';
        break;        
    case 'c': return x = '3';
        break;
    case 'i': return x = '4';
        break;
    case 'e': return x = '5';
        break;
    case 'l': return x = '6';
        break;
    case 'a': return x = '7';
        break;
    case 'g': return x = '8';
        break;
    case 'o': return x = '9';
        break;
    default:  return x;
        break;
    }
}

int main(){
    char a,b,c,d,e;
    cout << "Ingresara la primera letra (maximo de 5 letras)" << endl;
    cin >> a;
     cout << "Ingresara la segunda letra (maximo de 5 letras)" << endl;
    cin >> b;
     cout << "Ingresara la tercera letra (maximo de 5 letras)" << endl;
    cin >> c;
     cout << "Ingresara la cuarta letra (maximo de 5 letras)" << endl;
    cin >> d;
     cout << "Ingresara la quinta letra (maximo de 5 letras)" << endl;
    cin >> e;
    cout << "La frase escrita en clave es: "<< lol(a) << lol(b)<< lol(c) << lol(d) << lol(e) << endl;
}