#include <iostream>
#include <string>

/* primos

bool esPrimo(unsigned long n){
    bool p = true;
    if (n == 1)
        p = false;

    for(unsigned long i = (n-1); i > 1;i--)
    {
        if((n%i)==0)
            p=false;
    }
    return p;
}

int main(){
    unsigned long n;

    std::cout <<  "Ingrese un numero entero positivo: " << std::endl;
    std::cin >> n;

    if (esPrimo(n))
        std::cout <<  "El numero " << n << " es primo " << std::endl;
    else
        std::cout <<  "El numero " << n << " no es primo " << std::endl;

    return 0;
}
 */

unsigned long fibo(unsigned long n)
{
     if (n==0 || n==1)
         return n;
     else
         return fibo (n-1)+ fibo(n-2);
}

int main()
{
    unsigned long n;
     std::cout <<  "Ingrese un numero entero positivo: " << std::endl;
     std::cin >> n;

    std::cout <<  "el numero de Fibonacci es: " <<fibo(n) << std::endl;
    return 0;
}
