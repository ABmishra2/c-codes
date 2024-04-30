#include<iostream>
using namespace std;
class calculator{
    public:
        void calculate(){
            cout << "lets do some calculation"<<endl;
            cout << "some basic one"<<endl;
            cout << "1: add"<< endl<<"2: subtract"<<endl<< "3: multiply"<<endl<< "4: divide"<<endl;

        }
};
class addition: public calculator{
    public:
        void add(){
            int a,b;
            cout << "enter numbers to add "<< endl;
            cin >> a>>b;
            cout<<"sum of a and b is " << a+b <<endl;  

        }
};
class subtraction: public calculator{
    public:
        void subtract(){
            int a,b;
            cout << "enter numbers to subtract"<<endl;
            cin >> a >> b;
            cout << "subtract a and b is "<< a-b<<endl;
        }
};
class multiplication: public calculator{
    public:
        void multiply(){
            int a,b;
            cout << "enter number to multiply"<< endl;
            cin >> a >>b;
            cout << "multiplication of a and b is " << a*b << endl;
        }

};
class division: public calculator{
    public:
        void divide(){
            int a,b;
            cout << "enter numbers to divide" << endl;
            cin >> a >> b;
            cout << "division of a and b is " << a/b << endl;

        }
};
int main(){
    calculator mycalc;
    addition myadd;
    subtraction mysub;
    multiplication mymul;
    division mydiv;
    int choice;
    cout << "enter your choice"<<endl;
    cin >> choice;
    mycalc.calculate();
    switch (choice)
    {
    case 1:
        myadd.add();
        break;
    case 2:
        mysub.subtract();
        break;
    case 3:
        mymul.multiply();
        break;
    case 4:
        mydiv.divide();
        break;
    
    default:
        cout << "enter a valid choice"<< endl;
        break;
    }

    
}