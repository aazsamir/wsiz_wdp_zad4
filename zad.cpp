#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.14 ;

float areaCircle(float r)
{
    return PI * r * r;
}

float areaRectangle(float a, float b)
{
    return a * b;
}

float areaTriangle(float a, float h)
{
    return a * h / 2;
}

float areaCube(float a)
{
    return 6 * a * a;
}

float areaCylinder(float r, float h)
{
    return 2 * PI * r * r + 2 * PI * r * h;
}

float volumeCylinder(float r, float h)
{
    return PI * r * r * h;
}

float volumeCube(float a)
{
    return a * a * a;
}

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i*i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

//convert decimal to binary
int binaryToDecimal(int n)
{
    int binary = n;
    int decimal = 0;
    int remainder;
    int i = 1;

    while (binary != 0)
    {
        remainder = binary % 10;
        decimal = decimal + remainder * i;
        i = i * 2;
        binary = binary / 10;
    }
    return decimal;
}

long twoPower(short n)
{
	long ret = 1;
    
    while(n>1){
        ret*=n;
        n-=2;
    }

	return ret; 
}

int main()
{
    int bin = 111;
    cout << "binaryToDecimal(" << bin << ") = " << binaryToDecimal(bin) << endl;
    short n = 4;
    int prime = 8;
    cout << "isPrime(" << prime << ") = " << isPrime(prime) << endl;
    cout << "twoPower(" << n << ") = " << twoPower(n) << endl;
    return 0;
}