#include <iostream>
#include <vector>

int getSum(std::vector<int> vec)
{
    int sum = 0;
    for(auto element: vec)
    {
        sum+=element;
    }
    return sum;
}

float getAverage(std::vector<int> vec)
{
    float avg = 0;
    for(auto element: vec)
    {
        avg+=element;
    }
    return avg/vec.size();
}

int main()
{
    std::vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    int sum = getSum(vec);
    float avg = getAverage(vec);
    std::cout << sum << std::endl;
    std::cout << avg << std::endl;
}