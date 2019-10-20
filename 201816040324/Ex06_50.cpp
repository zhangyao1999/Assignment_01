#include <iostream>

using namespace std;
int tripleByVlaue (int) ;
void tripleByReference (int &) ;//函数的声明

int main()
{
    int count ;

    cout <<"Enter a value for count: ";
    cin >>count ;
    cout <<"Value returned from tripleByValue() is: "<<count<<"\n" ;
    cout <<"Value returned from tripleByValue() is: "<<tripleByVlaue(count)<<endl ;
    cout <<"Value of count (in main) after tripleCallByValue() is: "<<count<<endl ;
    cout <<"Value of count before call to tripleByReference() is: "<<count<<"\n" ;
    tripleByReference (count) ;
    cout <<"Value of count (in main) after call to tripleByReference() is: "<<count<<endl ;
    return 0;
}//主函数运行完毕
int tripleByVlaue (int number)
{
     return number =3*number ;
}//值传递
void tripleByReference (int &numberref)
{
    numberref =3*numberref ;
}//形参传递
