#include <iostream>
using namespace std;
int media(int x){
    return x /25;
}
int main(){
    int A[25],i,n;
    cout << "Ingresar limite de alumnos a para ingresar (limite 25):"<< endl;
    cin >> n;
    if (n <= 25){
        cout<<"Elementos del arreglo A:"<<endl;
        for(i=0;i<n;i++){
        cout<<"Alumno ["<<(i+1)<<"]:";
        cin>>A[i];
        }
        int satania = media(A[i]);
        cout << "la media es: " << satania << endl;
    }
    
}