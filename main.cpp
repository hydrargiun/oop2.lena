#include <iostream>
#include "Evol.h"
#include "dialog.h"
#include "getnum.h"



using namespace oop2;
int main() {
    double r;
    std::cout << "Введите r - радиус окружности" <<std::endl;
    r = getNum<double>();
    Evol evol(r);

        try {
            dialog(evol);

        }
            catch (std::bad_alloc &ba) {
                std::cout << "Error in allocating memory: " << ba.what() << std::endl;
            }
            catch (std::exception &ex) {
                std::cout << "Exception detected: " << ex.what() << std::endl;
            }
            catch (...) {
                std::cout << "Unknown error occured!" << std::endl;
            }

    return 0;
}
