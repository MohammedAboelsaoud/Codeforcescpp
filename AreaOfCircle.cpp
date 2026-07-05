    #include <iostream>
    #include <iomanip>
    using namespace std;

    int main() {
        cout << fixed << setprecision(9);
        double π = 3.141592653;
        double R;
        cin>>R;

        double area = R*R*π;

        cout<<area<<endl;
        return 0;
    }

