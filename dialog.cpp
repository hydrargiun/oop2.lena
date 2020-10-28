#include <iostream>

#include "Evol.h"
#include "getnum.h"

namespace oop2{
     void dialog(Evol s) {
         while (true) {
             std::cout << "" << std::endl;
             std::cout << "0. Выход" << std::endl;
             std::cout << "1. Получить координаты X и Y В Декартовых координатах" << std::endl;
             std::cout << "2. Натуральное уравнение эвольвенты окружности" << std::endl;
             std::cout << "3. Длина дуги эвольвенты окружности" << std::endl;
             std::cout << "4. Расстояние от начала координат до точки на эвольвенте при заданом угле" << std::endl;
             std::cout << "5. Уравнение эвольвенты в полярных координатах" << std::endl;
             std::cout << "6. Смена ппараметра" << std::endl;

             int pt;
             pt = getNum<double>();
             if (pt < 0 || pt > 7){
                 std::cout << "wrong number"<< std::endl;
                 throw std::invalid_argument("wrong input");
                 continue;
             }
             if (pt == 0) {
                 break;
             }

             if (pt == 1) {
                 std::cout << "Введите угол t" << std::endl;
                 double t;
                 t = getNum<double>();
                 std::cout << "y = " << s.GetY(t) << std::endl;
                 std::cout << "x = " << s.GetX(t) << std::endl;

             }
             if (pt == 2) {
                 double t1;
                 double t2;
                 std::cout<< "введите t1, угол начала отсчета длины" << std::endl;
                 t1 = getNum<double>();
                 std::cout<< "введите t2, угол конца отсчета длины" << std::endl;
                 t2 = getNum<double>();
                 std::cout << "Ззависимость кривизны от длины дуги k = " << s.Natural(t1,t2) << std::endl;


             }

             if (pt == 3) {
               double t1;
               double t2;
               std::cout<< "введите t1, угол начала отсчета длины" << std::endl;
               t1 = getNum<double>();
               std::cout<< "введите t2, угол конца отсчета длины" << std::endl;
               t2 = getNum<double>();
               std::cout<< "Длина дуги эвольвенты при  заданых углах = " << s.Length(t1,t2) <<std::endl;


             }
             if (pt == 4) {
                 double t;
                 std::cout << "Введите угол t" << std::endl;
                 t = getNum<double>();
                 std::cout << "Расстояние d = " << s.Distance(t) << std::endl;

             }
             if (pt == 5){
                 std::cout << "Формула\n " << s.frm() << std::endl;
             }
             if (pt == 6) {
                 double new_r;
                 double old_r;
                 old_r = s.Get_R();
                 std::cout <<  "Старый радиус = " << old_r <<std::endl;
                 new_r = getNum<double>();
                 s.Set_R(new_r);
                 std::cout <<  "Новый радиус = " << new_r <<std::endl;
             }



         }
     }
}
