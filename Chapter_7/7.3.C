#include <iostream>
using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display_box(box this_box)
{
    cout << "Maker: " << this_box.maker << endl;
    cout << "Height: " << this_box.height << endl;
    cout << "Width: " << this_box.width << endl;
    cout << "Length: " << this_box.length << endl;
    cout << "Volume: " << this_box.volume << endl;
}

void set_volume(box * this_box)
{
    this_box->volume = this_box->height * this_box->width * this_box->length;
}

int main()
{
    box xbox = {"Microsoft", 10, 20, 30, 0};

    display_box(xbox);

    set_volume(&xbox);

    display_box(xbox);

    return 0;
}