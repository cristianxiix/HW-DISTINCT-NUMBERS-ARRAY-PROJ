#pragma once
#include "Functions.h"


bool checkDistinct(std::vector<int16>& v)
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
               return isDistinct = false;
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
void bubbleSort(std::vector<int16>& v)
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
bool checkSuccessive(std::vector<int16>& v)
{
    int16 distinctNumbersCount = 1;
    int16 biggest = 0;
    bool isT = true;
    bubbleSort(v);

    for (int16 i = 0; i < v.size(); i++)
    {
        for (int16 j = i + 1; j < v.size(); j++)
        {z
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
void LogSeq(std::vector<int16>& v)
{
    std::cout << "SELECTED SEQUENCE: ";
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << ' ';
    }
    std::cout << std::endl;
    return;
}