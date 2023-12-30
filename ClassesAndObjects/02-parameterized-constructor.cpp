#include <iostream>
#include <cstring>

using namespace std;

#define IN 0
#define OUT 1

class book{
    char author[40];
    char title[40];
    int status;

    public:
        book(char *n, char *t, int s);
        int get_status() { return status;};
        void set_status(int s) { status = s;}
        void show();
};

book:: book(char *n, char* t, int s)
{
    strcpy(author, n);
    strcpy(title, t);
    status = s;
}

void book::show()
{
    cout << title << "by " << author << "CHECKED " ;
    if(status == IN) cout << "IN" << endl;
    if(status ==OUT) cout << "OUT" << endl;
}

int main(void)
{
    book b1("rohit ", "development ", IN);
    book b2("ankit ", "business ", OUT);

    b1.show();
    b2.show();

    return 0;
}


