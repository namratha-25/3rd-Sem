#include<bits/stdc++.h>
using namespace std;
class Marks{
    public:
        int mark;
        Marks(){
            mark=0;
        }
        Marks(int score){
            mark=score;
        }
        Marks operator++(int){ //x++
            Marks temp(*this);
            mark++;
            return temp;
        }
        void Display(){
            cout << mark << endl;
        }
         Marks operator--(int){ //x--
            Marks temp(*this);
            mark-=1;
            return temp;
        }
        Marks operator++(){  //++x
            ++mark;
            return *this;
        }
        Marks operator--(){  //--x
            --mark;
            return *this;
        }



};
int main(){
    Marks m1(20);
    // (m1++).Display();
    // (m1).Display();
    // (m1--).Display();
    // (m1).Display();

    (++m1).Display();
    m1.Display();
    (--m1).Display();



}