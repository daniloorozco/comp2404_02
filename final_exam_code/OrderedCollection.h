#include <iostream>
using namespace std;

template <class T>
class OrderedCollection {

  public:
    OrderedCollection(int aCapacity = 100); 
    OrderedCollection(const OrderedCollection<T> & c);
    ~OrderedCollection() { delete [] buffer; }

    int getSize() const { return size; }           
    bool isFull() const;                          //answer if full
  
    OrderedCollection<T> & addLast(T & element);  //add to end
    OrderedCollection<T> & addFirst(T & element); //add to front
    T & removeLast();                             //remove last element
    T & removeFirst();                            //remove first element
    OrderedCollection<T> & remove(const T & element); //remove all items == element

    void print(){
	  cout << "Collection\n";
	  cout << "==========\n";
	  for(int i=0; i<size; i++) cout << *(buffer[i]);
    }

  private:
    const int capacity;            //maximum size of the container
    int size;                      //number of actual elements in the container
    T **buffer;                    //pointer to memory for holding elements
};

template <class T>
OrderedCollection<T>::OrderedCollection(int aCapacity):capacity(aCapacity), size(0){
	buffer = new T*[capacity];
}

template <class T>
OrderedCollection<T>::OrderedCollection(const OrderedCollection<T> &c):capacity(c.capacity){
	size = c.getSize();
	buffer = new T*[c.capacity];
	for (int i = 0; i < c.getSize(); i++){
		buffer[i] = c.buffer[i]; 
	}
}

template <class T>
bool OrderedCollection<T>::isFull() const { return size >= capacity; }

template <class T>
OrderedCollection<T>& OrderedCollection<T>::addLast(T& element) {
    // Return if at capacity
    if (isFull())
        return *this;
    
    buffer[size++] = &element;
    cout << "Add last" << endl;
    return *this;
  
}
template <class T>
OrderedCollection<T>& OrderedCollection<T>::addFirst(T& element) {
    cout << "Add first" << endl;
    if (isFull())
        return *this;

    for (int i = getSize(); i > 0; --i){
        buffer[i] = buffer[i-1];
    }
    buffer[0] = &element;
    size++;
    return *this;
}

template <class T>
T& OrderedCollection<T>::removeLast(){
    cout << "Remove last" << endl;
    if (getSize() == 0)
        throw;
    T& temp = *buffer[getSize() - 1];
    *buffer[getSize()-1] = 0;
    size--;
    return temp;
}

template <class T>
T& OrderedCollection<T>::removeFirst(){
    cout << "Remove first" << endl;
    T& temp = *buffer[0];
    if (getSize() == 0)
        throw;
    if (getSize() == 1){
	
    }	
    

    for (int i = 0; i < getSize(); ++i) {
      buffer[i] = buffer[i+1];
    }

    size--;
    return temp;
}

template <class T>
OrderedCollection<T>& OrderedCollection<T>::remove(const T& element){
    cout << "Remove element" << endl;
    if (getSize() == 0)
        return *this;

    for (int i = 0; i < getSize(); ++i) {
        if (*buffer[i] == element) {
            for (int j = i; j < getSize(); ++j) {
                buffer[j] = buffer[j+1];
            }
            size--;
        }
    }
    return *this;
}















