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


