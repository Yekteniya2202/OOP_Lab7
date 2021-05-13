
#include <iostream>
#include <list>

//первый итератор - включая, второй итератор - не включая 
template <typename _itT>
int max_increasing_len(_itT it1, _itT it2) {
    if (it1 == it2) //не предусмотрено >=???
        return 0;
    int max_len = 1;
    it2--;
    while (it1 != it2) {
        if (*it1 < *(++it1)) {
            max_len++;
        }
        else {
            max_len = 1;
        }
    }
    return max_len;
}
int main()
{
    const std::list<int> my_list = {-3,-2,-1,0,0,1,2,3,4,5};
    std::cout << max_increasing_len(my_list.begin(), my_list.end()) << std::endl;
}
