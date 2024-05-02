// HW DISTINCT NUMBERS ARRAY PROJ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>


bool checkDistinct(std::vector<uint16_t>& v)
{
    bool isDistinct = true;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] != v[j])
            {
                i++;
                continue;
            }
            else
            {
                isDistinct = false;
                break;
            }
        }
        
    }

    if (isDistinct)
    {
        std::cout << "DEBUGGING: The sequence is distinct!" << std::endl;
        std::cout << "****************" << std::endl;
        return true;
    }
    else
    {
        std::cout << "DEBUGGING: The sequence IS NOT distinct!" << std::endl;
        std::cout << "****************" << std::endl;
        return false;
    }
}
void bubbleSort(std::vector<uint16_t>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int temp = 0;

        for (int j = i + 1; j < v.size(); j++)
        {
            //{ 2, 9, 4, 5, 7, 3, 1, 8, 6, 10 };
            if (v[j] < v[i])
            {
                temp = v[j];
                v[j] = v[i];
                v[i] = temp;
            }
            continue;
        }
    }



    //HERE FOR DEBUGGING PURPOSES
    /*std::cout << "sorted inside: ";

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i];
    }*/
}
bool checkSuccessive(std::vector<uint16_t>& v)
{
    uint16_t distinctNumbersCount = 1;
    uint16_t biggest = 0;
    bool isT = true;
    bubbleSort(v);
    
    for (uint16_t i = 0; i < v.size(); i++)
    {
        for (uint16_t j = i + 1; j < v.size(); j++)
        {
            if (v[j] == v[i] + 1)
            {
                distinctNumbersCount++;
                if (v[j] > biggest)
                    biggest = v[j];
                i++;
            }
            else
            {
                distinctNumbersCount++;
                isT = false;
                i++;
            }
        }
        if (i == v.size() - 1)
            break;
    }

    if (isT)
    {
        std::cout << "BIGGEST VALUE INSIDE SEQ: " << biggest << std::endl;
        std::cout << "****************" << std::endl;

        return true;
    }
    else
    {
        std::cout << "AMOUNT OF DISTINCT NUMBERS INSIDE SEQ: " << distinctNumbersCount << " ELEMENTS" << std::endl;
        std::cout << "****************" << std::endl;

        return false;
    }
}
void LogSeq(std::vector<uint16_t>& v)
{
    std::cout << "SELECTED SEQUENCE: ";
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << ' ';
    }
    std::cout << std::endl;
    return;
}
//uint16_t generateRandomNumbers(int amount, int start, int end)
//{
//    std::random_device r;
//    std::default_random_engine dre1(r());
//    std::uniform_int_distribution<int> uniform_dist(start, end);
//    uint16_t dist = uniform_dist(dre1);
//    return dist;
//}
int main()
{
    uint16_t arr[8] = {3, 4, 6, 5, 9, 1, 6, 7};
    std::cout << "Main sequence: " << std::endl;
    for (auto x : arr)
    {
        std::cout << x << ' ';
    }
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
