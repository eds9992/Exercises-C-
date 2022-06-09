#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Stack
{
private:
    vector<T> data;
public:
    void push(T value){ data.push_back(value); }
    T pop();
    T top();
    void Display()
    {
        cout << data.top() << " ";
    }
};

/*void Stack<T>::push(T value)
{
    data.push_back(value);
}*/
template <typename T>
T Stack<T>::pop()
{
    T ret = data.back();
    data.pop_back();
    return ret;
}
template <typename T>
T Stack<T>::top()
{
    return data.back();
}

template<typename K, typename V>
class Map
{
private:
    vector<K> keys;
    vector<V> values;
public:
    void add(K key, V value)
    {
        keys.push_back(key);
        values.push_back(value);
    }
    V get(K key)
    {
        for(int i = 0; i < key.size(); ++i)
        {

        }
    }
};
int main()
{
    Stack<int> numbers;
    numbers.push(100);
    numbers.push(200);
    numbers.push(300);
    numbers.Display();
    /*cout << numbers.top() << endl;
    int n = numbers.pop();
    cout << numbers.top() << endl;
    numbers.pop();
    cout << numbers.top() << endl;
    numbers.pop();*/
    return 0;
}
