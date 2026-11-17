
#include "DArray.h"

DArray::DArray() {
    arr = nullptr;
    m_size{};
    m_capacity {};
}

DArray::DArray(const DArray& obj) {
    m_size = obj.m_size;
    m_capacity = obj.m_capacity;

    arr = new int[m_capacity];

    for (int i = 0; i < m_size; i++) {
        arr[i] = obj.arr[i];
    }
}

DArray::~DArray() {
    delete[] arr;
}

void DArray::push_back(int value) {

    if (m_size == m_capacity) {

        int newCapacity;

        if (m_capacity == 0)
            newCapacity = 1;
        else
            newCapacity = m_capacity * 2;

        int* temp = new int[newCapacity];

        for (int i = 0; i < m_size; i++) {
            temp[i] = arr[i];
        }

        delete[] arr;

        arr = temp;
        m_capacity = newCapacity;
    }

    arr[m_size] = value;
    m_size++;
}

int DArray::size() const {
    return m_size;
}

int DArray::capacity() const {
    return m_capacity;
}

int& DArray::operator[](int index) {
    return arr[index];
}

const int& DArray::operator[](int index) const {
    return arr[index];
}

bool DArray::operator==(const DArray& obj) const {

    if (m_size != obj.m_size){
        return false;
    }
    for (int i = 0; i < m_size; i++) {
        if (arr[i] != obj.arr[i])
            return false;
    }

    return true;
}

ostream& operator<<(ostream& out, const DArray& obj) {

    for (int i = 0; i < obj.size(); i++) {
        out << obj[i] << " ";
    }

    return out;
}
