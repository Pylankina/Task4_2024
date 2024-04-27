#include <iostream>
#include <string>
#include <fstream>
#include <ostream>
#include <sstream>
#include <vector>

using namespace std;

class Parcer{
protected:
    int K, n;
    vector<double> p;
    vector<double> w;
public:
    Parcer (ifstream &fin);
};
