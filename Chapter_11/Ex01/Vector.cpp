//
// Created by fantyg on 07.08.17.
//

#include "Vector.h"
#include <cmath>

namespace VECTOR {
    void Vector::setMag() {
        m_mag = std::sqrt(m_x * m_x + m_y * m_y);
    }

    void Vector::setAng() {
        if (m_x == 0.0 && m_y == 0.0) {
            m_ang = 0.0;
        } else {
            m_ang = std::atan2(m_y, m_x);
        }
    }

    void Vector::setX() {
        m_x = m_mag * std::cos(m_ang);
    }

    void Vector::setY() {
        m_y = m_mag * std::sin(m_ang);
    }

    Vector::Vector() {
        m_x = m_y = m_mag = m_ang = 0.0;
        m_mode = RECT;
    }

    Vector::Vector(double n1, double n2, Vector::Mode form) {
        reset(n1, n2, form);
    }

    void Vector::reset(double n1, double n2, Vector::Mode form) {
        m_mode = form;
        if (form == RECT) {
            m_x = n1;
            m_y = n2;
            setMag();
            setAng();
        } else if (form == POL) {
            m_mag = n1;
            m_ang = n2;
            setX();
            setY();
        } else {
            std::cout << "Wrong value of third argument Vector() -- I make it default.";
            m_x = m_y = m_ang = m_mag = 0.0;
            m_mode = RECT;
        }
    }

    void Vector::setPolarMode() {
        m_mode = POL;
    }

    void Vector::setRectMode() {
        m_mode = RECT;
    }

    Vector Vector::operator+(const Vector &b) const {
        return Vector(m_x + b.m_x, m_y + b.m_y);
    }

    Vector Vector::operator-(const Vector &b) const {
        return Vector(m_x - b.m_x, m_y - b.m_y);
    }

    Vector Vector::operator-() const {
        return Vector(-m_x, -m_y);
    }

    Vector Vector::operator*(double n) const {
        return Vector(n * m_x, n * m_y);
    }

    Vector operator*(double n, const Vector &a) {
        return Vector(n * a.m_x, n * a.m_y);
    }

    std::ostream &operator<<(std::ostream &os, const Vector &a) {
        if (a.m_mode == Vector::RECT) {
            os << "(x, y) = (" << a.m_x << ", " << a.m_y << ")";
        } else if (a.m_mode == Vector::POL) {
            os << "(m, a) = (" << a.m_mag << ", " << a.m_ang << ")";
        } else {
            os << "Wrong mode of vector representation.";
        }
        return os;
    }
}
