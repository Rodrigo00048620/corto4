#include<iostream>
#include <vector> //utilizar vectores xd
using namespace std;

vector<vector<int>> m(){ //vector de un vector
    int x,i,n;
    vector<vector<int>> z;
    cout << "ingresar el numero de estudiantes" << endl;
    cin >> x;
    for ( i = 0; i < x; i++){
        vector<int> y;
        for (n = 0; n < 5; n++){
            int xy;
            cout << "igresar la nota de la materia" << endl;
            do{
                cin>>xy;
                if (xy > 10 || xy <0){
                    cout << "La nota no es valida :(" << endl;
                }
            } while (xy>10 || xy < 0);
            y.push_back(xy);
        }
        z.push_back(y);
    }
    return z;
}

int nico(vector<vector<int>> z){
    int i;
    for (i = 0; i < z.size(); i++){
        float nt = z[i][0]+z[i][1]+z[i][2]+z[i][3]+z[i][4];
        nt /= 5;
        if (nt < 6){
            cout << "El estudiante #"<<(i+1)<<" reprobo, su nota es de: "<< nt <<endl;
        }else{
            cout << "El estudiante #"<<(i+1)<<" aprobo, su nota es de: "<< nt <<endl;
        }
        
        

    }
    
}

int main(){
    cout << "obtener el promedio de los alumnos" << endl;
    vector<vector<int>> z = m();
    nico(z);
    
}