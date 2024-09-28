class MyCircularDeque {
public:
    vector<int> vec;
    int f, b, s, m;
    MyCircularDeque(int k) {
        m = k;
        vec.resize(m);
        f = 0, b = -1, s = 0;
    }
    bool insertFront(int value) {
        if (isFull()) return false;
        f = (f - 1 + m) % m, vec[f] = value, s++;
        return true;
    }
    bool insertLast(int value) {
        if (isFull()) return false;
        b = (b + 1) % m, vec[b] = value, s++;
        return true;
    }
    bool deleteFront() {
        if (isEmpty()) return false;
        f = (f + 1) % m, s--;
        return true;
    }
    bool deleteLast() {
        if (isEmpty()) return false;
        b = (b - 1 + m) % m, s--;
        return true;
    }
    int getFront() {
        if (isEmpty()) return -1;
        return vec[f];
    }
    int getRear() {
        if (isEmpty()) return -1;
        return vec[b];
    }
    bool isEmpty() {
        return s == 0;
    }
    bool isFull() {
        return s == m;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */