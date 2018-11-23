// Copyright
#include <iostream>
#include <vector>

int main()
{
    char ch1 = '′';
    char ch2 = '″';
    char ch3 = '-';

    std::cout << "Testing my test! \nSingle prime:" << static_cast<int>(ch1)
         << "\nDouble Prime: " << static_cast<int>(ch2) << std::endl
         << std::endl;

    std::cout << "Not a prime: " << static_cast<int>(ch3);

    int i1 = static_cast<int>(ch3);

    if (i1 > 47 && i1 < 58)
    {
        i1 -= 48;
    }

    int i2 = i1+i1;

    std::cout << std::endl << i2;


    char chArray[] = {"1945-05-08"};

    int iArray[10] = {static_cast<int>(chArray[0])-48,
                      static_cast<int>(chArray[1])-48,
                      static_cast<int>(chArray[2])-48,
                      static_cast<int>(chArray[3])-48,
                      static_cast<int>(chArray[5])-48,
                      static_cast<int>(chArray[6])-48,
                      static_cast<int>(chArray[8])-48,
                      static_cast<int>(chArray[9])-48};

    std::cout << std::endl << "Array: " << iArray[0] << ' ' << iArray[1]
              << ' ' << iArray[2] << std::endl;

    return 0;
}
