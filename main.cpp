#include <iostream>
using namespace std;

const int SIZE = 10;
int numbers[SIZE] = {5, 2, 9, 1, 5, 6, 3, 2, 7, 8};

void procesoArray(){
    //imprimir array original
    cout<<"Array original ";
    for(int i =0;i<SIZE;i++){
        cout<<numbers[i]<<" ";
    }
    cout<<endl;

    //ordenar array
    for(int i=0; i<SIZE-1;i++){
        for(int j=0;j<SIZE-i-1;j++){
            if (numbers[j]> numbers[j+1]){
                int temp = numbers[j];
                numbers[j]=numbers[j+1];
                numbers[j+1]=temp;
            }
        }
    }

    //imprimir array ordenado 
    cout<< "Array ordenado: ";
    for(int i=0; i<SIZE; i++){
        cout<< numbers[i]<< " ";
    }
    cout<<endl;
}

void adicionCalculadora(){
    //encontrar el valor maximo
    int maxVal= numbers[0];
    for(int i = 1; i< SIZE; i++){
        if(numbers[i]>maxVal){
            maxVal=numbers[i];
        }
    }
    cout<<"Valor maximo: "<<maxVal<<endl;
    //encontrar valor minimo
    int minVal=numbers[0];
    for(int i=1;i<SIZE;i++){
        if (numbers[i]< minVal ){
            minVal=numbers[i];
        }
    }
    cout<<"Valor minimo: "<<minVal<<endl;
    //calcular promedio
    int sum = 0;
    for(int i=0; i<SIZE;i++){
        sum+= numbers[i];
    }
    double average = static_cast<double>(sum)/SIZE;
    cout<<"Promedio: "<< average <<endl;
    //contar ocurrencias de un valor dado
    int valueToFind = 5;
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] == valueToFind) {
            count++;
        }
    }
    cout << "El valor " << valueToFind << " aparece " << count <<
     " veces en el array." << endl;
}



int main() {
    
    // gracias J por el código que fuerza UTF8 y así vemos mensajes con títldes y otros símbolos
    setlocale(LC_ALL, "ca_ca.utf8");


procesoArray();
adicionCalculadora();


    

    

    
    return 0;
}