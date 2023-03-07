#include <iostream>
#include <string>
using namespace std;
int main() {
    string x;
    cout<<"What is your name?";
    cin>>x;
    cout<<"Hello " + x <<endl;
    string y;
    cout<<"What is your student ID?";
    cin>>y;
    cout<<"Your ID is " + y <<endl;

    cout<<"------------------------------------------------------"<<endl;

    int var1;
    cout<<"First Input: ";
    cin>>var1;
    int var2;
    cout<<"Second Input: ";
    cin>>var2;
    int sum = var1 + var2;
    int diff = var1 - var2;
    int proud = var1 * var2;
    cout<<"Summation: " << sum <<endl;
    cout<<"Difference: " << diff <<endl;
    cout<<"Multiplication: " << proud <<endl;

    cout<<"------------------------------------------------------"<<endl;

    string name;
    cout<<"Name: ";
    cin>>name;
    cout<<"Name: " + name <<endl;
    int lab;
    cout<<"Lab Grade: ";
    cin>>lab;
    int midterm;
    cout<<"Midterm Grade: ";
    cin>>midterm;
    int final;
    cout<<"Final Grade: ";
    cin>>final;
    double lastScore = (lab * 0.25) + (midterm * 0.35) + (final * 0.40);
    cout<<"Last Score: " << lastScore <<endl;

    cout<<"------------------------------------------------------"<<endl;

    cout<<"*\n**\n***\n**\n*";

    return 0;
}
