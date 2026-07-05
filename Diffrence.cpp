#include <iostream>
using namespace std;

int main() {


    long long a,b,c,d;

    cin>>a>>b>>c>>d;

    long long firstProduct=1ll* a*b;
    long long secondProduct=1ll* c*d;


    cout<<"Difference = "<<firstProduct-secondProduct<<endl;


    return 0;
}
