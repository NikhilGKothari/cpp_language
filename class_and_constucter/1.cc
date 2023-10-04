/* find area and circumfernce of circle*/


#include<iostream>

using namespace std;

class circle
{
    private:
            int radius;
          
            
    public:
            int r = radius;
            
            void area(int r)
            {
                cout <<"area is  " << 3.14 * r * r<< "\n";
            }
            void circumfernce(int r)
            {
                cout<< " circumfernce is  " << 2 * 3.14 * r;
            }
};

int main()
{
    int r1;
    cout << "enter radius  :";
    cin >> r1;
    
    circle mycircle;

    mycircle.area(r1);
    mycircle.circumfernce(r1);
    return 0;
}