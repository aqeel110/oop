
#include <iostream>
using namespace std;

class DArray {
private:
    int* arr{};
    int m_size{};
    int m_capacity{};

public:
    DArray();
    DArray(const DArray&);
    ~DArray();

    void push_back(int);

    int size() const;
    int capacity() const;

    int& operator[](int);
    const int& operator[](int) const;

    bool operator==(const DArray&) const;
};

ostream& operator<<(ostream&, const DArray&);
#endif
