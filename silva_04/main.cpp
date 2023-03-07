#include <iostream>
#include"licoreria.h"

using namespace std;

int main()
{

    float PAF=13.50,FDA=16.50,PA2=15.00,EL=11.00,PA1=8.00;

    float r=0;
    //r= FT*0.10+PA1*0.10+EP*0.20+PAF*0.15+TS*0.15+EF*0.30 ;
     r=PA1*0.15 + FDA*0.2 + PA2*0.25 + PAF*0.3 + EL*0.1 ;
    cout<<"RESULTADO:"<<r<<endl;

    return 0;
}
