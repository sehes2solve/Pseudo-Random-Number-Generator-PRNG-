#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

long long Seed , Mod;
long long Multiplier    = 1103515245;
long long Scaller       = 12345;

long double LinearCongruentialGenerator()
{
    Seed = ( Multiplier * Seed + Scaller ) % Mod;
    if ( Seed == 0 ) return 0;
    return 1.0 / Seed;
}

int main()
{
    fstream file;
    file.open( "generator.txt" , ios::out );
    Mod = powl( 2 , 5 );

    cout << "Enter the Seed : " ; cin >> Seed;
    for ( int i = 0; i < 100; i++ )
        file << LinearCongruentialGenerator() << "\n";
    return 0;
}
