#include <algorithm>
#include "Solver.h"
#include <list> 

using namespace std;

void sortting(double ud_cost, vector<int> nabor){
    int max=0;
    for (int i=0; i<n-1; i++){
        if (ud_cost[1][i]>ud_cost[1][i+1])
            max=ud_cost[0][i];
        if ((nabor.end()-1)!=max)
            nabor.push_back(max);
    }
    for (int i=0; i<n; i++)
        for (int j=0; j<n-1; j++)
            if (nabor[j]!=i)
                nabor.push_back(i);//получили массив индексов
    return;
    }
    
struct v{
    double W, C, up;
    int l;
    vector<bool> f;
}
    
typedef struct node { //объявляем структуру дерева
    struct node* left;
    struct node* right;
    struct v*val;
} node;

node*push(int lev, node* beg, int i, vector<double> p_new, vector<double>w_new, double pr, double ud_cost) {
    if (lev!=0)
    if (lev==0 || beg == nullptr) { //если дерева не было, то создаем корень дерева
        beg = new node;
        beg->l = lev;
        beg->val->W=w_new[i];
        beg->val->c=c_new[i];
        beg->val->up=pr+(K-w_new[i])*ud_cost[i];
        pr=beg->val->up;
        beg->left = nullptr;
        beg->right = nullptr;
        pr=beg->val->up;
        
    }
    else {
        if (lev!=0){
            beg->val->(f.push_back(0));       
            beg->left=push(lev, beg->left, i, p_new, w_new, pr, ud_cost, f);
        }
        if (lev!=0){
            beg->val->(f.push_back(0));
            beg->right=push(lev, beg->right, i, p_new, w_new, pr, ud_cost, f);
        }
    }
    return beg;
}


void find_result(Pb){
    double ma[=0.0;]
    while (Pb->val->l!=n-1 && (Pb->val->c)>max){
        find_result(Pb->left);
        find_result(Pb->right);
    }
    if(Pb->val)
}


void creating(){
    int l=0, i=0;
    double pr=0.0;
    node*b=0;
    while(pr<=K || l<n || i<n){
        b = push(l, beg, i,p_new, w_new, pr, ud_cost);
        l++;
        i++;
    }
    node*Pb=b;
    find_result(Pb)
}



Solver::Solver(ifstream &fin) {
    vector<int> RES;
    double ud_cost= new double*[2];
    int i=0;
    while (i<2){
        ud_cost[i]=new double[n];
    }
    for (i=0; i<n; i++){
        ud_cost[0][i]=i;
        ud_cost[1][i]=p[i]/w[i];
    }//высчитали удельную стоимость каждой вещи
    vector<int> nabor;
    sortting(ud_cost, nabor);//отсортировали по убыванию удельной стоимости вещей
    vector<double> w_new, p_new;
    for (i=0; i<n; i++){
        w_new.push_back(w[i]);
        p_new.push_back(p[i]); //новые массивы цен и стоимостей
    }
    creating();
    i=0;
    int s=RES.size();
    while (i<s){
        answer[RES[i]]=1;
        i++;
    }
}

