#include <iostream>
using namespace std;

class MyCustomException : public std::exception {
private:
    const char* message;

public:
    MyCustomException(const char* msg) : message(msg) {}
    const char* what() const throw() {
        return message;
    }
};

int main() {
    char s[30] = "Custom C++ Exception"; // Declare s as a const char*
    try {
        throw MyCustomException(s);
    } catch (const MyCustomException& mce) {
        cout << "Caught MyCustomException" << endl;
        cout << mce.what() << endl;
    }
}

