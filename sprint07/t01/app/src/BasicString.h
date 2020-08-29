#pragma once

#include <iostream>

namespace CBL {
    template<class T>
    class Vector {
    public:
        using iterator= T*;

        Vector();
        explicit Vector(size_t size);
        Vector(size_t size, const T& value);
        Vector(iterator first, iteratorlast);
        Vector(const std::initializer_list<T>& lst);
        Vector(const Vector<T>& other);
        ~Vector();

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

        // capacity
        size_t size() const;
        size_t capacity() const;
        bool isEmpty() const;
        void resize(size_t size, const T& value= T());
        void reserve(size_t size);

        // modifiers
        void push_back(const T& value);
        void pop_back();
        iterator insert(iterator pos, const T& value);
        iterator erase(iterator pos);
        iterator erase(iterator first, iterator last);
        void clear();

    private:
        size_t m_size{0};
        size_t m_capacity{0};
        T* m_buffer{nullptr};
    };
}  //end namespace CBL