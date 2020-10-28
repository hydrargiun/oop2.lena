#include "Evol.h"
#include <iostream>
#include <math.h>
#include <cstring>
#include <cstdio>
#define PI 3.14159


namespace oop2{
    Evol::Evol(){    //сеттер если значение не прередали
        this->r = 0;
    }

    Evol::Evol(double r) {    //сеттер
        this->r = r;
    }

    double Evol::GetY(double t) const{
        double y;
        double  r = this->r;
        y = r * (cos(t) - t * sin(t));
        return y;


    }

    double Evol::GetX(double t) const{
        double x;
        double  r = this->r;
        x = r * (cos(t) + t * sin(t));
        return x;


    }

    double Evol::Natural(double t1, double t2) const{
        double k;
        if (t1 > t2 )
            throw std::invalid_argument("Не правильные углы t1 > t2");
        double l;
        double  r = this->r;
        l = 0.5 * r * (pow(t2,2) - pow(t1,2));
        k = 1 / (sqrt(2 * r * l));
                return k;
    }

    double Evol::Length(double t1, double t2) const{
        if (t1 > t2 )
            throw std::invalid_argument("Не правильные углы t1 > t2");
        double l;
        double  r = this->r;
        l = 0.5 * r * (pow(t2,2) - pow(t1,2));
        return l;

    }


    double Evol::Distance(double t) const{
        double d;
        double x;
        double y;
        double  r = this->r;
        x = r * (cos(t) + t * sin(t));
        y = r * (cos(t) - t * sin(t));
        d = sqrt(pow(x,2) + pow(y,2));
        return d;
    }


    Evol &Evol::Set_R(double r) {
        this->r = r;
        return *this;
    }
    double Evol::Get_R(){
        return this->r;

    }
    char* Evol::frm() const{
        char *s1 = "x =  •(cos(t) - t • sin(t))";
        int l = strlen(s1);
        char num[20];
        sprintf(num, "%.2f", this->r); //прости за уязвимость преполнения буфера
        l += strlen(num);
        char *s = new char[l];
        if (this->r == 0){
           s = "doesnt exist";
            return s;
        }
        else{
            sprintf(s, "x = %.2f •(cos(t) - t • sin(t))\n y = %.2f •(cos(t) - t • sin(t))", this->r, this->r);
            return s;
        }

    }

}