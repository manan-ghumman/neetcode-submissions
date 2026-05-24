class DynamicArray {
public:

    int capacity;
    int length;
    int *arr;

    DynamicArray(int capacity) { 
        this->arr = new int[capacity];
        this->capacity = capacity;
        length = 0;
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (length == capacity) {
            resize();
        }
        arr[length] = n;
        length++;
    }

    int popback() {
        length--;
        return arr[length];
    }

    void resize() {
        capacity = capacity * 2;
        int *temp = new int[capacity];
        for(int i = 0 ; i < length ; i++)
        {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp; 

    }

    int getSize() {
        return length;
    }

    int getCapacity() {
        return capacity;
    }
};