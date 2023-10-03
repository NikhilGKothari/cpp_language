/* write a program to find total and per of student of 4 subject .*/


#include<iostream>

using namespace std;

class student 
{
    private:
            int eng ,sci, guj,sp;

    public:
        

           void totall(int eng, int sp, int sci,int guj)
           {
                cout << "total is  " << eng + sci +guj + sp << "\n";
           } 
           float per(int total)
           {
                cout << " per is  " << total/4 << " "; 
           }
};
int main()
{
    int eng,sp,guj,sci,total,per;
    cout << "enter eng marks  ";
    cin >> eng ;

    cout << "enter sp marks  ";
    cin >> sp;

    cout << " enter guj marks  ";
    cin >> guj;

    cout << " enter sci marks ";
    cin >> sci;

    student s1;

    s1.totall(eng,sp,guj,sci);
    s1.per(total);

    return 0;
}