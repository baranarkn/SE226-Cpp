#include <iostream>
#include <cmath>
using namespace std;

//Question 3
double result = 0;
int k = 1;

double summation(int n){
    if (k <= n) {
        result += pow(-1, k+1)/k;
        k += 1;
        summation(n);
    } else{
        return result;
    }
}

//Question 4
double summation(){
    result = 0;
    k = 1;
    int n;
    while(true){
        cout<<"Please enter a variable for summation :";
        cin>>n;
        if (n<1){
            cout<<"You should enter 1 or higher"<<endl;
        } else{
            return summation(n);
        }
    }
}

int main() {
    //Question 3
    while(true){
        int n;
        cout<<"Please enter a variable for summation :";
        cin>>n;
        if (n<1){
            cout<<"You should enter 1 or higher"<<endl;
        } else{
            cout<<"Result:"<<summation(n)<<endl;
            break;
        }
    }

    //Question 4
    result = summation();
    cout<<"Result:"<<result;

    return 0;
}
