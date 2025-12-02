 #include <iostream>
using namespace std; //contar de 1 até 10
int main() {
    int n=1;
    while (n<=10)
    {
        cout<<n<<endl;
        n++;
    }
}


#include <iostream>
using namespace std; //soma dos numeros de 1 até 10
int main() {
    int n=1;
    int soma = 0;
    while (n<=10)
    {
        soma = soma + n;
        cout<<n<<endl;
        n++; //como chega no criterio de parada
    }
cout<<"Soma "<<soma;
return 0;
}


#include <iostream>
using namespace std; //multiplicação dos números de 1 até 10
int main() {
    int n=1;
    int soma = 1;
    while (n<=10)
    {
        soma = soma * n;
        cout<<n<<endl;
        n++; //como chega no criterio de parada
    }
cout<<"Soma "<<soma;
return 0;
}

#include <iostream> //Questão 1
using namespace std; //Faça um programa que lê 5 valores inteiros e mostre a soma deles no final da execução
int main() {
    int n=1;
    int valor;
    int soma;
    while (n<=5)
    {
    cout <<"Digite um valor ";
    cin>>valor;
    soma = soma + valor;
    n++;
    }
cout<<"Soma "<<soma;
return 0;
}

