#include <iostream>

void drawSteeps( int n, char s )
{
    std::cout << n << " floor: ";
    for( int i = 0; i < n; ++i )
    {
        std::cout << s << " ";
    }
    std::cout << " ";
}

unsigned int factorialRecursion( unsigned int n )
{
    unsigned int result;
    unsigned int currentResult = 1;
    static int recursionStep;

    int floorNumber = recursionStep;
    ++recursionStep;
    drawSteeps( floorNumber, '>' );
    std::cout << n << "!\n";

    if( n <= 1 )
    {
        std::cout << ".......this is the last step, we will go back......\n";
        result = 1;
    }
    else
    {
        result = n * factorialRecursion( n - 1 );
        currentResult = result;
    }

    drawSteeps( floorNumber, '<' );
    std::cout << n << "! = " << currentResult << '\n';
    --recursionStep;

    return result;
}

unsigned int factorialIteration( unsigned int n )
{
    unsigned int result = 1;

    for( unsigned int i = 1; i <= n; ++i )
    {
        result *= i;
    }

    return result;
}

int main()
{
    std::cout << "Factorial solved recursively:\n";
    unsigned int r1 = factorialRecursion( 5 );
    std::cout << r1;

    std::cout << '\n';

    std::cout << "Factorial solved linearly\n";
    unsigned int r2 = factorialIteration( 3 );
    std::cout << r2;

    return 0;
}
