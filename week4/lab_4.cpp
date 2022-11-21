#include <iostream>
#include <Math.h>
#include <iomanip> 
using namespace std;

int main() {
     //task 6
    /*bool answer;
    int value;
    g:cout << "Enter a value: ";
    cin >> value;
    answer = ((value >= 0 && value < 10) || (value*2<20 && value-2 >-2)||(value-1>1&&value/2 < 10) || value==111);
    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
    goto g;*/
     
      //task 7//
    /*float a, b, c, d, e;
    cout << "Enter a values: " << endl;
    cin >> a >> b >> c >> d >> e;
    cout << a << endl << fixed;
    cout << setprecision(2) << b << endl;
    cout << setprecision(6) << c << endl;
    cout << setprecision(2) << d << endl;
    cout << int(e) << endl;*/
      
       //Task 8//
      /*bool answ;
      int a ,b;
      float a1,b1;
      r:cout<< "Enter values"<< endl;
      cin >> a >> b;
      a1 =1/float(a);
      b1 = 1/float (b);
      answ = (a1 == b1);
      cout <<(answ ? "Results are equal (by 0.000001 epsilon)":"Results are not equal (by 0.000001 epsilon)")<<endl;goto r;*/
      
       //task 9
     int a1 , a2 , a3 , a4;
     r:cout << "Enter a values: "<<endl;
     cin >> a1 >> a2 >> a3 >> a4;
     if ((a1 < 1 || a1 > 255)||(a2 < 1 || a2 > 255)||(a3 < 1 || a3 > 255)||(a4 < 1 || a4 > 255)) {
         cout<<"Error enter value >=1 and <=255"<<endl;goto r;
     }
     cout << a1 << "." << a2 << "." << a3 << "." << a4;
     

    return 0;
}
