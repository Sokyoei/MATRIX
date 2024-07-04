import numpy as np
from numpy.typing import NDArray


def main():
    m: NDArray = np.array([[1, 2, 3], [4, 5, 6]])
    n: NDArray = np.array([[1, 2], [3, 4], [5, 6]])

    # 矩阵乘法
    print(f"{m.dot(n)=}")
    # 矩阵转置
    print(f"{m.transpose()=}")
    print(f"{m.T=}")


if __name__ == "__main__":
    main()
