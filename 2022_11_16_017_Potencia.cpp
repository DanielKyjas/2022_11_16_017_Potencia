// 202_09_11_014_Recursividad
//Daniel Callejas Rayón
// Potencias con recurividad
#include <iostream>
int potencia(int num1, int num2, int num3)
{
    if (num2 != 0)
    {
        potencia(num3 * num1, num2 - 1, num3);
        std::cout << num1 << std::endl;
    }
    return num1;
}

int main()
{
    int num, exp, base;
    std::cout << "Dame el numero que vas a potenciar \n";
    std::cin >> num;
    base = num;
    std::cout << "Dame el numero del exponente\n";
    std::cin >> exp;
    potencia(num, exp, base);
    
    std::cout << "\n\n";
}
