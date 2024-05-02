#include "Functions.h"

int main()
{

   // uint16_t arr[8] = {3, 4, 6, 5, 9, 1, 6, 7};
    uint16_t arr[8] = { 7, 1, 3, 2, 5, 6, 7, 8 };

    std::cout << "Main sequence: ";
    for (auto x : arr)
    {
        std::cout << x << ' ';
    }
    std::cout << '\n';
    std::cout << "****************" << std::endl;
    
        int k = 0;
        int j = 0;
        std::cout << "Input the starting index: (NOTE STARTING FROM INDEX 0!)" << std::endl;
        std::cin >> j;
        std::cout << "Input the element K:" << std::endl;
        std::cin >> k;
    
        std::vector<uint16_t> testVector;
        std::cout << "****************" << std::endl;

        int i = j;
        while (i <= k)
        {
            testVector.push_back(arr[i]);
            i++;
        }

    LogSeq(testVector);
    if (checkDistinct(testVector))
    {
        if (checkSuccessive(testVector))
        {
            std::cout << "The Sequence is COOL!";
        }
        else
        {
            std::cout << "The Sequence is NOT COOL!";
        }
       
    }

}
