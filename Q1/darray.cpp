DArray::DArray() {
    arr = nullptr;
    size {};
    capacity {};
}

DArray::~DArray() {
    delete[] arr;
}

void DArray::push_back(int value) {
    if (size == capacity) {
      if(capacity==0){
        newcapacity=1;
      }else{
        newcapacity=capacity*2;
      }

        int* temp = new int[newCapacity];

        for (int i = 0; i < size; i++)
            temp[i] = arr[i];

        delete[] arr;
        arr = temp;
        capacity = newCapacity;
    }

    arr[size] = value;
    size++;
}

DArray& DArray::operator=(const DArray& obj) {
    if (this != &obj) {
        int* temp = nullptr;

        if (obj.size > 0) {
            temp = new int[obj.size];

            for (int i = 0; i < obj.size; i++)
                temp[i] = obj.arr[i];
        }

        delete[] arr;

        arr = temp;
        size = obj.size;
        capacity = obj.size;
    }

    return *this;
}

int DArray::getSize() const {
    return size;
}

int DArray::getElement(int index) const {
    return arr[index];
}

ostream& operator<<(ostream& out, const DArray& obj) {
    for (int i = 0; i < obj.getSize(); i++)
        out << obj.getElement(i) << " ";

    return out;
}
