#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include <vector>
#include <algorithm>

std::vector<int> Lotto(int spots, int selection);
void show(int i)
{
    using std::cout;
    cout << i << " ";
}

int myrandom (int i) { return std::rand()%i;}

int main()
{
    using std::vector;
    using std::cout;
    using std::endl;
    vector<int> test = Lotto(51,6);
    std::for_each(test.begin(), test.end(), show);
    cout << endl;
    return 0;
}

std::vector<int> Lotto(int spots, int selection)
{
    std::srand(std::time(0)); // random initializing of rand()
    using std::vector;
    vector<int> list;
    for (int i=0; i<spots; i++)
        list.push_back(i);
    std::random_shuffle(list.begin(), list.end(), myrandom);
    vector<int> winners;
    for (int i=0; i<selection; i++)
        winners.push_back(list[i]);
    return winners;
}