//
// Created by fantyg on 07.08.17.
//

#ifndef EX01_VECTOR_H
#define EX01_VECTOR_H

#include <iostream>

namespace VECTOR {
    class Vector {
    public:
        enum Mode {
            RECT, POL
        };
    private:
        double m_x;
        double m_y;
        double m_mag;
        double m_ang;
        Mode m_mode;

        void setMag();

        void setAng();

        void setX();

        void setY();

    public:
        Vector();

        Vector(double n1, double n2, Mode form = RECT);

        ~Vector() {};

        void reset(double n1, double n2, Mode form = RECT);

        double getX() const { return m_x; }

        double getY() const { return m_y; }

        double getMag() const { return m_mag; }

        double getAng() const { return m_ang; }

        void setPolarMode();

        void setRectMode();

        Vector operator+(const Vector &b) const;

        Vector operator-(const Vector &b) const;

        Vector operator-() const;

        Vector operator*(double n) const;

        friend Vector operator*(double n, const Vector &a);

        friend std::ostream &operator<<(std::ostream &os, const Vector &a);
    };
}

#endif //EX01_VECTOR_H
