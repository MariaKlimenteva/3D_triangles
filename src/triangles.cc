#include <triangles.hpp>
//--------------------------------------------------------------------------
int main()
{
    int N = 0;
    std::cin >> N;

    for(int triangle_number = 1; triangle_number < N + 1; triangle_number++)
    {
        // int x = 0, y = 0, z = 0;
        // std::cin >> x >> y >> z;
        // надо вводить (x1, y1, z1), (x2, y2, z2), (x3, y3, z3); ... N раз по 3 точки
    }
    Point<int> A{0, 1, 2};
    Point<int> B{3, 3, 3};
    Line<int> A_B{A, B};
}