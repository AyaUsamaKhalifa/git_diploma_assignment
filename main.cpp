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

int main()
{
    std::vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    int sum = getSum(vec);
    std::cout << sum << std::endl;
}