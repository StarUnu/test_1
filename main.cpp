#include <iostream>
//numero en ingles es number
//suma es sum
using namespace std;
typedef int tipo_num;
int main()
{
    tipo_num num1,num2,sum;
    while(1){
        cin>>num1>>num2;
        sum = num1 + num2;
        cout<<"la suma es "<<sum<<"\n";
    }
    cout << "Hello world!" << endl;
    return 0;
}
