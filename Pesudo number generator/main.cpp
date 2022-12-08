#include <iostream>
#include <cmath>

using namespace std;

long long Seed , Mod;
long long Multiplier    = 1103515245;
long long Scaller       = 12345;

long double LinearCongruentialGenerator()
{
    Seed = ( Multiplier * Seed + Scaller ) % Mod;
    return  Seed != 0 ? 1.0 / Seed : 0;
}

int main()
{
    freopen( "generator.txt" , "w" , stdout );
    Mod = powl( 2 , 5 );

    cerr << "Enter the Seed : " ; cin >> Seed;
    for ( int i = 0; i < 100; i++ )
        cout << LinearCongruentialGenerator() << "\n";
    return 0;
}
