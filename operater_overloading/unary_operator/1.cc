// use of unary operator in operator overloading.

#include<iostream>

using namespace std;
class box
{
    private:
        int l,w,h;
    public:
        void setdata(int a, int b, int c)
        {
            l=a , w=b, h=c ;
        }
        int getdata()
        {
            return l * w * h;

        }

        box operator++(int)  /* int is show for ans, that after increment ans is in int data tyape  */
        {
            box t;
            t.l = l++;
            t.w = w++;
            t.h = h++;
            return t;

        }
};

int main()
{
    box b1;
    b1.setdata(4,4,4);
    cout << "volume of box is  " << b1.getdata() <<endl;

    b1++;
    cout << "after increment volume is   " << b1.getdata() <<endl;
}