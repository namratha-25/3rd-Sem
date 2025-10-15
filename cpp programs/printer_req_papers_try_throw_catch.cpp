#include<bits/stdc++.h>
using namespace std;
class Printer{
    public:
    int pages;
    Printer(int val)
    {
        pages=val;
    }
    void print(string text)
    {
        int n=text.size();
        int req_pages=ceil(n/10.0);
        try{
            if(req_pages > pages)
            {
                throw "Insufficient pages in printer";
            }
            pages-=req_pages;
            cout << text << endl;
        }
        catch(const char *msg){
            cout << msg << endl;

        }

    }
};
int main()
{
    Printer p1(2);
    p1.print("qwertyuiopasdfghjklzxcvbnm");
    Printer p2(5);
    p2.print("Hello World");
}