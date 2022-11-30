/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


// მართკუთხედის კლასი ენკაფსულაციის დაცვით

class Rectangle {
    private:
    
    int length;
    int breadth;
    
    public:
    
    void setLength(int len) {
        length = len;
    }
    
    void setBreadth(int brth) {
        breadth = brth;
    }
    
    int getLength() {
        return length;
        
    }
    
    int getBreadth() {
        return breadth;
    }
    int getArea() {
        return length * breadth;
    }
};

    
int main()
{
    Rectangle rectangle1;
    
    rectangle1.setLength(7);
    
    rectangle1.setBreadth(8);
    
    cout << "Length = " << rectangle1.getLength() << endl;
    cout << "Breadth = " << rectangle1.getBreadth() << endl;
    cout << "Area = " << rectangle1.getArea();

    return 0;
}