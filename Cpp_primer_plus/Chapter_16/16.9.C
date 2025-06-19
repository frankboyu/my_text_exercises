#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <list>
#include <algorithm>

void show(int i)
{
    std::cout << i << " ";
}

int main()
{
    using std::vector;
    using std::list;
    using std::rand;
    using std::endl;
    using std::cout;

    std::srand(std::time(0));

    int size = 50000000;

    vector<int> vi0;
    for(int i = 0; i < size; i++)
        vi0.push_back(rand());
    vector<int> vi(vi0.begin(), vi0.end());
    list<int> li(vi0.begin(), vi0.end());

    clock_t start1 = clock();
    std::sort(vi.begin(), vi.end());
    clock_t end1 = clock();
    cout << "sorting vi takes " << (double)(end1-start1)/CLOCKS_PER_SEC << " seconds" << endl;

    clock_t start2 = clock();
    li.sort();
    clock_t end2 = clock();
    cout << "sorting li takes " << (double)(end2-start2)/CLOCKS_PER_SEC << " seconds" << endl;

    li = list<int>(vi0.begin(), vi0.end());
    clock_t start3 = clock();
    vi = vector<int>(li.begin(), li.end());
    std::sort(vi.begin(), vi.end());
    li = list<int>(vi.begin(), vi.end());
    clock_t end3 = clock();
    cout << "combo takes " << (double)(end3-start3)/CLOCKS_PER_SEC << " seconds" << endl;


    return 0;
}
