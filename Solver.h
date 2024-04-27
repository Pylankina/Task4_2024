#include "DB.h"

using namespace std;

class Solver:public BD{
public:
    Solver(ifstream &fin);
    void sortting(double ud_cost);
};
