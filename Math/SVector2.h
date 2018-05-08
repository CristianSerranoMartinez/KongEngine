#ifndef SVECTOR2_H
#define SVECTOR2_H
struct SVector2
{

    struct { float x, y; };
    SVector2();
    SVector2(float x);
    SVector2(float x, float y);
    SVector2(const SVector2& v);

    float& operator[](size_t index);
    const float& operator[](size_t index) const;
    friend SVector2 operator+(const SVector2& left, float right);
    friend SVector2 operator+(float left, const SVector2& right);
    friend SVector2 operator+(const SVector2& left, const SVector2& right);
    friend SVector2 operator-(const SVector2& left, float right);
    friend SVector2 operator-(float left, const SVector2& right);
    friend SVector2 operator-(const SVector2& left, const SVector2& right);
    friend SVector2 operator*(const SVector2& left, float right);
    friend SVector2 operator*(float left, const SVector2& right);
    friend SVector2 operator*(const SVector2& left, const SVector2& right);
    friend SVector2 operator/(const SVector2& left, float right);
    friend SVector2 operator/(float left, const SVector2& right);
    friend SVector2 operator/(const SVector2& left, const SVector2& right);
    friend bool operator==(const SVector2& left, const SVector2& right);
    friend bool operator!=(const SVector2& left, const SVector2& right);
    friend std::ostream& operator<<(std::ostream& ost, const SVector2& v);
    static float Dot(const SVector2& left, const SVector2& right);
    static float Magnitud(const SVector2& v);
    static SVector2 Normalize(const SVector2& v);
    static float Distance(const SVector2& left, const SVector2& right);
    static SVector2 Projection(const SVector2 & left, const SVector2 & right);


private:
    static const size_t m_length = 2;
};

#endif
