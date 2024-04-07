#include <iostream>
using namespace std;

void ler_vetor(int v[], int tam){
  for(int i = 0; i < tam; i++){
    cout<<"Digite um valor: ";
    cin>>v[i];
  }
}
int menor_num(int v[], int menor, int tam){
  menor = v[0];
  for (int i = 0; i < tam; i++){
    if(v[i] < menor){
      menor = v[i];
      cout<<menor<<endl;
    }
  }
  return menor;
}
int main(){
  const int tam = 5;
  int v[tam], menor = 0;
  ler_vetor(v, tam);
  int valor = menor_num(v, menor, tam);
  cout<<valor;

}