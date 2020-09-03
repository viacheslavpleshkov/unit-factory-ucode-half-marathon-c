#pragma once

#include <iostream>

namespace CBL {
    template <class T>
    class Vector {
    private:
        size_t m_size{0};
        size_t m_capacity{0};
        T* m_buffer{nullptr};
    public:
        using iterator = T*;
        //basic
        Vector();
        explicit Vector(size_t size);
        Vector(size_t size, const T& value);
        Vector(iterator first, iterator last);
        Vector(const std::initializer_list<T>& lst);
        Vector(const Vector<T>& other);
        ~Vector();
        //operator
        Vector<T>& operator=(const Vector<T>& other);
        bool operator==(const Vector<T>& other) const;
        bool operator!=(const Vector<T>& other) const;
        bool operator<(const Vector<T>& other) const;
        bool operator>(const Vector<T>& other) const;
        bool operator<=(const Vector<T>& other) const;
        bool operator>=(const Vector<T>& other) const;
        // iterators
        iterator begin() const;
        iterator end() const;
         // capacity+
        size_t size() const;
        size_t capacity() const;
        bool isEmpty() const;
        void resize(size_t size, const T& value = T());
        void reserve(size_t size);
        // element access
        T& operator[](size_t index) const;
        T& at(size_t index) const;
        T* data() const;
        // modifiers
        void push_back(const T& value);
        void pop_back();
        iterator insert(iterator pos, const T& value);
        iterator erase(iterator pos);
        iterator erase(iterator first, iterator last);
        void clear();
    };
    //basic
    template<class T>
    Vector<T>::Vector(size_t size) : m_size(size), m_capacity(size), m_buffer(new T[size]) {}
    template<class T>
    Vector<T>::Vector() : Vector(0) {}
    template<class T>
    Vector<T>::Vector(size_t size, const T &value) : Vector(size) {
        for (size_t i = 0; i < m_size; ++i)
            m_buffer[i] = value;
    }
    template<class T>
    Vector<T>::~Vector() {
        delete[] m_buffer;
    }
    // capacity
    template<class T>
    size_t Vector<T>::size() const {
        return m_size;
    }
    template<class T>
    size_t Vector<T>::capacity() const {
        return m_capacity;
    }
    template<class T>
    bool Vector<T>::isEmpty() const {
        return m_size == 0;
    }


} // end namespace CBL