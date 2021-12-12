#include <iostream>

bool isPower2(int x)
{
    return (x && !(x & (x - 1)));
    // 0001 1000 отнимаем единицу
    // 0001 0111 накладываем маску х
    // 0001 0000 делаем операцию не(!)
    // return false
    //
    // 0001 0000 отнимаем единицу
    // 0000 1111 накладываем маску х
    // 0000 0000 делаем операцию не(!)
    // return true
    // x && нужен что бы исключить x = 0
}

int main()
{
    int a = 16;
    int b = 10;
    bool res;
    res = isPower2(a);
    std::cout << res << std::endl;
    res = isPower2(b);
    std::cout << res << std::endl;
    return 0;
}