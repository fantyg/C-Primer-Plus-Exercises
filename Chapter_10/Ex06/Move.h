//
// Created by fantyg on 25.07.17.
//

#ifndef EX06_MOVE_H
#define EX06_MOVE_H


class Move {
private:
    double x, y;
public:
    Move(double a = 0.0, double b = 0.0);

    void showMove() const;

    Move add(const Move &m) const;

    void reset(double a = 0, double b = 0);
};


#endif //EX06_MOVE_H
