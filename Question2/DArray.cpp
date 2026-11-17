DArray::DArray() {
    arr = nullptr;
    m_size {};
    m_capacity {};
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

        for (int i = 0; i < m_size; i++)
            temp[i] = arr[i];

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

ostream& operator<<(ostream& out, const DArray& obj) {

    for (int i = 0; i < obj.size(); i++)
        out << obj[i] << " ";

    return out;
}
