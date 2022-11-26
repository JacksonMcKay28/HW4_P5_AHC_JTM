#include <iostream>
#include <math.h>
using namespace std;

int main() {
 // const double g = 9.81;
  double * Velocity;
  double * Degrees;
  double * Xone;
  double * Hone;
  double * Htwo;
  double * Time;
  double * Y;

  int n = 0;
  cin >> n;

  Velocity = new double[n];
  Degrees = new double[n];
  Xone = new double[n];
  Hone = new double[n];
  Htwo = new double[n];
  Time = new double[n];
  Y = new double[n];

  for (int i = 0; i < n; i++) 
  {
    cin >> Velocity[i] >> Degrees[i] >> Xone[i] >> Hone[i] >> Htwo[i];  
  }

  for (int h = 0; h < n; h++) 
  {
    Degrees[h] = Degrees[h]*(3.14159265358979323846/180);
  }
  
  for (int j = 0; j < n; j++) 
  {
    Time[j] = ((Xone[j])/(Velocity[j]))/cos(Degrees[j]);
  }

  for (int k = 0; k < n; k++) 
  {
    Y[k] = (Velocity[k])*(Time[k])*(sin(Degrees[k]))-4.905*(pow(Time[k],2));
  }

  for (int u = 0; u < n; u++) 
  {
    Hone[u] = Hone[u] + 1;
    Htwo[u] = Htwo[u] - 1;
    if (Y[u] > Hone[u] && Y[u] < Htwo[u])
      cout << "Safe" << endl;
    else
      cout << "Not Safe" << endl;
  }
}