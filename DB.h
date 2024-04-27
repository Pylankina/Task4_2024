#include "Parcer.h"
#include <vector>

using namespace std;

struct object{
    double price;
    double weight;
};

class DB:public Parcer{
protected:
    vector<object> T;
    vector<bool> answer;
    double empty;
    double cost;
public:
    DB(ifstream &fin);
    writting(vector<bool> answer, double cost, double empty);
};