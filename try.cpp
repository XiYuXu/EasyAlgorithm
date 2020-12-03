#include <iostream>
#include <cmath>
using namespace std;

double AttackerSuccessProbability(double q, int z)
{
double p = 1.0 - q;
double lambda = z * (q / p);
double sum = 1.0;
int i, k;
for (k = 0; k <= z; k++)
{
    double poisson = exp(-lambda);
    for (i = 1; i <= k; i++)
        poisson *= lambda / i;
    cout<<poisson * (1 - pow(q / p, z - k))<<"   ";
    cout << endl;
    sum -= poisson * (1 - pow(q / p, z - k));
}
return sum;
}
int main(){
    cout << AttackerSuccessProbability(0.1,1);
    return 0;
}