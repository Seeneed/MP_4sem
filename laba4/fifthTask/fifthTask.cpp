#include <iostream>
#include "LCS.h"
#include <Windows.h>
#include <ctime>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    clock_t t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    char z[100] = "";

    t1 = clock();
    char X[] = "QVTWNHO"; 
    char Y[] = "RQTWYK"; 


    std::cout << std::endl << "-- ���������� ����� LCS ��� X � Y(��������)";
    std::cout << std::endl << "-- ������������������ X: " << X;
    std::cout << std::endl << "-- ������������������ Y: " << Y;
    int s = lcs(sizeof(X) - 1, "QVTWNHO", sizeof(Y) - 1, "RQTWYK");
    std::cout << std::endl << "-- ����� LCS: " << s << std::endl;
    t2 = clock();

    //   ���������� ����� ���������������������   
    t3 = clock();
    char x[] = "QVTWNHO";
    char y[] = "RQTWYK"; 
    int l = lcsd(x, y, z);
    t4 = clock();
    std::cout << std::endl
        << "-- ���������� ����� �������������������� - LCS(������������"
        << " ����������������)" << std::endl;
    std::cout << std::endl << "����������������� X: " << x;
    std::cout << std::endl << "����������������� Y: " << y;
    std::cout << std::endl << "                LCS: " << z;
    std::cout << std::endl << "          ����� LCS: " << l;
    std::cout << std::endl;

    std::cout << std::endl << "����� ���������� LCS";
    std::cout << std::endl << "��������: " << (t2 - t1);
    std::cout << std::endl << "������������ ����������������: " << (t4 - t3) << std::endl;

    return 0;
}