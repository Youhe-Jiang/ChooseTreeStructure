#include <iostream>
using namespace std;

bool isPrimeNumber(int number_cur )
{
    if (number_cur<=0)
    {
        return false;//返回非质数
    }
    bool is_prime = true; //默认为false ：即不为质数
    for (int i = 2;i < number_cur;i++)
    {
        int is_remain = number_cur % i; //求余数
        if (is_remain == 0)
        {
            is_prime = false;
            break;
        }
    }
    return is_prime; //默认为质数
}
