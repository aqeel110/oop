#ifndef darray_h
#define darray_h
using namespace std;
class DArray {
private:
    int* arr{};
    int size{};
    int capacity{};

public:
    DArray();
    ~DArray();

    void push_back(int);

    DArray& operator=(const DArray&);

    int getSize() const;
    int getElement(int) const;
};

ostream& operator<<(ostream&, const DArray&);
#endif
