#include <iostream>

#include <Eigen/Eigen>

int main(int argc, char const* argv[]) {
    Eigen::MatrixXf m(2, 3);
    m << 1, 2, 3, 4, 5, 6;
    Eigen::MatrixXf n(3, 2);
    n << 1, 2, 3, 4, 5, 6;

    std::cout << "m: \n" << m << "\n";
    std::cout << "n: \n" << n << "\n";

    // 矩阵乘法
    std::cout << "m * 2 =\n" << m * 2 << '\n';
    std::cout << "m * n =\n" << m * n << '\n';
    // 矩阵转置
    std::cout << "m^T =\n" << m.transpose() << '\n';

    return 0;
}
