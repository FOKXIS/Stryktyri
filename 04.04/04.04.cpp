#include <iostream>
//Zadanie 1 Создать структуру, описывающую прямоугольник. Написать функции для работы с этой структурой: перемещение прямоугольника, изменение размера
//прямоугольника, печать прямоугольника
struct Rect {
    typedef int Type;
    Type x, y; // left bottom
    Type w, h; // size

    void setPos(Type x_, Type y_) {
        x = x_;
        y = y_;
    }

    void move(Type dx, Type dy) {
        setPos(x + dx, y + dy);
    }

    void normalize() {
        if (w < Type(0)) {
            x += w;
            w = -w;
        }
        if (h < Type(0)) {
            y += h;
            h = -h;
        }
    }

    void setSize(Type w_, Type h_) {
        w = w_;
        h = h_;
        normalize();
    }
};
/*Zadanie2 Создайте структуру, описывающую точку.С помощью этой
структуры задайте две точки.Напишите функцию, которая вычисляет расстояние между этими двумя точками ?*/
struct Point {
    float x;
    float y;
    float z;
};

float distance(const Point& a, const Point& b) {
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    float dz = a.z - b.z;
    return std::sqrt(dx * dx + dy * dy + dz * dz);
}
/*zadanie 3. Создайте структуру, описывающую простую
дробь.Реализуйте арифметические операции с дробями :
сумму, разность, умножение, деление.
Учесть возможность сокращения дробей и перевод
из неправильной дроби в простую.*/
