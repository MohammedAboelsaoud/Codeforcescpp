    #include <iostream>
using namespace std;

int main(){

    string name1;
    string id1;
    int grade1;

    string name2;
    string id2;
    int grade2;

    cout<<"What's student 1 name:";    cin>>name1;
    cout<<"His ID:";    cin>>id1;
    cout<<"His math exam grade:"; cin>>grade1;

    cout<<"What's student 2 name:";    cin>>name2;
    cout<<"His ID:";    cin>>id2;
    cout<<"His math exam grade:"; cin>>grade2;


    cout<<"Students grades in math"<<endl;
    cout<<name1<<" With ID: "<<id1<<" got grade: "<<grade1<<endl;
    cout<<name2<<" With ID: "<<id2<<" got grade: "<<grade2<<endl;
    cout<<" the avarege grade is :"<<(grade1+grade2)/2<<endl;






return 0;
}
