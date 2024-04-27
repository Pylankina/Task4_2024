#include "DB.h"

using namespace std;

DB::DB(ifstream &fin):public Parcer{
    cost=0.0;
    empty=0;
    int i=0;
    while (i<n){
        answer.push_back(0);
        object Q1;
        Q1.price=p[i];
        Q1.weight=w[i];
        T.push_back(Q1);
        i++;
    }
    
}

void DB:: writting(vector<bool> answer, double cost, double empty){
    ofstream fou;
    double s=0.0;
    fou.open("result.txt");
    if (fou.is_open()){
        for (int j=0; j<n; j++)
            fou<<answer[j]<<"  ";
        for(int i=0; i<n; i++){
            cost=cost+answer[i]*p[i];
            s=s+answer[i]*w[i];
        }
        empty=K-s;
        fou<<"Total cost= "<<cost<<endl;
        fou<<"Remained: "<<empty<<endl;
    }
    fou.close();
}
    
}