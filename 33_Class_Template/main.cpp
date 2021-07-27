//
//  main.cpp
//  33_Class_Template
//
//  Created by 세광 on 2021/07/27.
//

#include <iostream>
#include <string>

using namespace std;

template<typename T>
class Vector2 {
public:
    Vector2() : x(0), y(0) {}
    Vector2(T x, T y) : x(x), y(y) {}
    T GetX() const { return x; }
    T GetY() const { return y; }
    
    Vector2 operator+(const Vector2 &rhs) const {
        return Vector2(x + rhs.x, y + rhs.y);
    }
    /*
    Vector2<T> operator+(const Vector2<T> &rhs) const {
        return Vector2<T>(x + rhs.x, y + rhs.y);
    }
    */
    Vector2 operator-(const Vector2 &rhs) const {
        return Vector2(x - rhs.x, y - rhs.y);
    }
    Vector2 &operator+=(const Vector2 &rhs) {
        x += rhs.x;
        y += rhs.y;
        return *this;
    }
    Vector2 &operator-=(const Vector2 &rhs) {
        x -= rhs.x;
        y -= rhs.y;
        return *this;
    }
    
private:
    T x, y;
};

int main() {
    // class 템플릿에서는 템플릿 인수를 생략할 수 없음
    Vector2<float> v1(2, 3);
    Vector2<double> v2(4, 5);
    cout << sizeof(v1) << endl;
    cout << sizeof(v2) << endl;
}
