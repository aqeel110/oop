#include <iostream>
using namespace std;

class DArray {
private:
    int* arr{};
    int m_size{};
    int m_capacity{};

public:
    DArray();
    ~DArray();

    void push_back(int);

    int size() const;
    int capacity() const;

    int& operator[](int);

};

ostream& operator<<(ostream&, const DArray&);
#endif
