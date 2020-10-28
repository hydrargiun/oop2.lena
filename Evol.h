#include <cmath>

namespace oop2 {
    class Evol {
    private:
        double r;
    public:
        Evol();
        Evol(double r);
        Evol &Set_R(double r);
        double Get_R();
        double GetY(double x) const;
        double GetX(double x) const;
        double Natural(double ,double ) const;
        double Length(double , double) const;
        double Distance(double ) const;
        char* frm() const;





    };
}
