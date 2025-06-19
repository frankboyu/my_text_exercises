#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

struct Review
{
    std::string title;
    int rating;
    double price;
};

bool alphabeticalOrder(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2);
bool increasingRating(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2);
bool decreasingRating(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2);
bool increasingPrice(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2);
bool decreasingPrice(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2);
bool FillReview(std::shared_ptr<Review> & rr);
void ShowReview(const std::shared_ptr<Review> & rr);

int main()
{
    using namespace std;

    vector<shared_ptr<Review>> books;
    shared_ptr<Review> temp;
    while (FillReview(temp))
        books.push_back(temp);

    if (books.size() > 0)
    {
        char choice;
        vector<shared_ptr<Review>> results;
        cout << "Choose an option to display the books" << endl;
        cout << "a.original order\tb.alphabetical order\tc.increasing ratings" << endl;
        cout << "d.decreasing ratings\te.increasing price\tf.decreasing price" << endl;
        cout << "q.quit" << endl;
        cout << "Your choice: ";
        cin >> choice;
        while(choice != 'q')
        {
            if(choice == 'a')
            {
                results = books;
                cout << "Original order" << endl;
                cout << "Rating\tPrice\tBook\n";
                for_each(results.begin(), results.end(), ShowReview);
                cout << endl;
            }
            else if (choice == 'b')
            {
                results = books;
                sort(results.begin(), results.end(), alphabeticalOrder);
                cout << "Alphabetical order" << endl;
                cout << "Rating\tPrice\tBook\n";
                for_each(results.begin(), results.end(), ShowReview);
                cout << endl;
            }
            else if (choice == 'c')
            {
                results = books;
                sort(results.begin(), results.end(), increasingRating);
                cout << "Increasing ratings" << endl;
                cout << "Rating\tPrice\tBook\n";
                for_each(results.begin(), results.end(), ShowReview);
                cout << endl;
            }
            else if (choice == 'd')
            {
                results = books;
                sort(results.begin(), results.end(), decreasingRating);
                cout << "Decreasing ratings" << endl;
                cout << "Rating\tPrice\tBook\n";
                for_each(results.begin(), results.end(), ShowReview);
                cout << endl;
            }
            else if (choice == 'e')
            {
                results = books;
                sort(results.begin(), results.end(), increasingPrice);
                cout << "Increasing price" << endl;
                cout << "Rating\tPrice\tBook\n";
                for_each(results.begin(), results.end(), ShowReview);
                cout << endl;
            }
            else if (choice == 'f')
            {
                results = books;
                sort(results.begin(), results.end(), decreasingPrice);
                cout << "Decreasing price" << endl;
                cout << "Rating\tPrice\tBook\n";
                for_each(results.begin(), results.end(), ShowReview);
                cout << endl;
            }
            else
            {
                cout << "Invalid choice, try again." << endl;
                cout << endl;
            }

            cout << "a.original order\tb.alphabetical order\tc.increasing ratings" << endl;
            cout << "d.decreasing ratings\te.increasing price\tf.decreasing price" << endl;
            cout << "q.quit" << endl;
            cout << "Your choice: ";
            cin >> choice;
        }
    }
    else
        cout << "No entries. ";
    cout << "Bye.\n";
    return 0;
}

bool alphabeticalOrder(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2)
{
    if ((*r1).title < (*r2).title)
        return true;
    else
        return false;
}

bool increasingRating(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2)
{
    if ((*r1).rating < (*r2).rating)
        return true;
    else
        return false;
}

bool decreasingRating(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2)
{
    if ((*r1).rating > (*r2).rating)
        return true;
    else
        return false;
}

bool increasingPrice(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2)
{
    if ((*r1).price < (*r2).price)
        return true;
    else
        return false;
}

bool decreasingPrice(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2)
{
    if ((*r1).price > (*r2).price)
        return true;
    else
        return false;
}

bool FillReview(std::shared_ptr<Review> & rr)
{
    using namespace::std;
    rr = shared_ptr<Review>(new Review);

    std::cout << "Enter book title (quit to quit): ";
    std::getline(std::cin,(*rr).title);
    if ((*rr).title == "quit")
        return false;

    std::cout << "Enter book rating: ";
    std::cin >> (*rr).rating;
    if (!std::cin)
        return false;

    std::cout << "Enter book price: ";
    std::cin >> (*rr).price;
    if (!std::cin)
        return false;

    // get rid of rest of input line
    while (std::cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const std::shared_ptr<Review> & rr)
{
    std::cout << (*rr).rating << "\t" << (*rr).price << "\t" << (*rr).title << std::endl;
}