#include <iostream>
using namespace std;


// first name space
namespace first_space {
    void funct() {
        cout << "Inside first_space" << endl;
    }
}

// second name space
namespace second_space {
    void funct() {
        cout << "Inside second_space" << endl;
    }
}

using namespace first_space;
//using namespace second_space;

int main() {
    // This calls the function from the first name space.
    funct();

    return 0;
}