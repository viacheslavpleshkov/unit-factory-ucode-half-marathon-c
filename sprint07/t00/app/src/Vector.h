#pragma once

#include <iostream>
#include <initializer_list>

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
         // capacity
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
    //<================================basic=================================>
    /**
     *
     * Set size vector
     * @tparam T
     * @param size
     */
    template<class T>
    Vector<T>::Vector(size_t size) : m_size(size), m_capacity(size), m_buffer(new T[size]) {

    }
    /**
     *
     * The empty constructor
     * @tparam T
     */
    template<class T>
    Vector<T>::Vector() : Vector(0) {}
    /**
     *
     * Insert full vector const value
     * @tparam T
     * @param size
     * @param value
     */
    template<class T>
    Vector<T>::Vector(size_t size, const T &value) : Vector(size) {
        for (size_t i = 0; i < m_size; ++i)
            m_buffer[i] = value;
    }
    /**
     *
     * :)
     * @tparam T
     * @param first
     * @param last
     */
    template<class T>
    Vector<T>::Vector(Vector::iterator first, Vector::iterator last) : Vector(std::distance(first, last)) {
        size_t distance = std::distance(first, last);
        for (size_t i = 0; first != last && i < distance; ++i, ++first)
            m_buffer[i] = *first;
    }
    /**
     *
     * Insert data with initializer_list
     * @tparam T
     * @param lst
     */
    template<class T>
    Vector<T>::Vector(const std::initializer_list<T>& lst) : Vector(iterator(lst.begin()), iterator(lst.end())) {};
    /**
     *
     * :)
     * @tparam T
     * @param other
     */
    template<class T>
    Vector<T>::Vector(const Vector<T> &other) : Vector(other.size(), other.capacity()) {
        auto it = other.begin();
        for (size_t i = 0; it != other.end(); ++it, ++i)
            m_buffer[i] = *it;
    }
    /**
     *
     * Destructor
     * @tparam T
     */
    template<class T>
    Vector<T>::~Vector() {
        delete[] m_buffer;
    }
    //<==============================end basic===============================>
    //<===============================operator===============================>
    /**
     *
     * Operator =
     * @tparam T
     * @param other
     * @return
     */
    template<class T>
    Vector<T> & Vector<T>::operator=(const Vector<T> &other) {
        return Vector(other);
    }
    /**
     *
     * Operator ==
     * @tparam T
     * @param other
     * @return
     */
    template<class T>
    bool Vector<T>::operator==(const Vector<T> &other) const {
        if (m_size != other.m_size)
            return false;
        for (size_t i = 0; i < other.m_size && i < m_size; i++)
            if (m_buffer[i] != other[i])
                return false;
        return true;
    }
    /**
     *
     * Operator !=
     * @tparam T
     * @param other
     * @return
     */
    template<class T>
    bool Vector<T>::operator!=(const Vector<T> &other) const {
        return !(this == other);
    }
    /**
     *
     * Operator <
     * @tparam T
     * @param other
     * @return
     */
    template<class T>
    bool Vector<T>::operator<(const Vector<T> &other) const {
        for (size_t i = 0; i < other.m_size && i < m_size; i++)
            if (m_buffer[i] < other[i])
                return true;
        if (m_size < other.m_size)
            return true;
        return false;

    }
    /**
     *
     * Operator >
     * @tparam T
     * @param other
     * @return
     */
    template <class T>
    bool Vector<T>::operator>(const Vector<T> &other) const {
        return !(this < other) && this != other;
    }
    /**
     *
     * Operator <=
     * @tparam T
     * @param other
     * @return
     */
    template <class T>
    bool Vector<T>::operator<=(const Vector<T> &other) const {
        return this < other || this == other;
    }
    /**
     *
     * Operator >=
     * @tparam T
     * @param other
     * @return
     */
    template <class T>
    bool Vector<T>::operator>=(const Vector<T> &other) const {
        return this > other || this == other;
    }
    //<=============================end operator=============================>
    //<==============================iterators===============================>
    /**
     *
     * Vector first element
     * @tparam T
     * @return
     */
    template<class T>
    T* Vector<T>::begin() const {
        return m_buffer;
    }
    /**
     *
     * Vector end element
     * @tparam T
     * @return
     */
    template<class T>
    T* Vector<T>::end() const {
        return m_buffer + m_size;
    }
    //<=============================end iterators============================>
    //<===============================capacity===============================>
    /**
     *
     * Get variable m_size
     * @tparam T
     * @return
     */
    template<class T>
    size_t Vector<T>::size() const {
        return m_size;
    }
    /**
     *
     * Get variable m_capacity
     * @tparam T
     * @return
     */
    template<class T>
    size_t Vector<T>::capacity() const {
        return m_capacity;
    }
    /**
     *
     * Check the obj is empty
     * @tparam T
     * @return
     */
    template<class T>
    bool Vector<T>::isEmpty() const {
        return m_size == 0;
    }

    /**
     *
     * Malloc size and set all value
     * @tparam T
     * @param size
     * @param value
     */
    template<class T>
    void Vector<T>::resize(size_t size, const T &value) {
        for (size_t i = m_size; i < size; ++i)
            push_back(value);
        m_size = size;
        m_capacity = size;
    }
    /**
     *
     * Malloc new capacity
     * @tparam T
     * @param size
     */
    template<class T>
    void Vector<T>::reserve(size_t size) {
        if (m_capacity < size) {
            T* temp = new T[size];
            memcpy(temp, m_buffer, m_size * sizeof(*m_buffer));
            delete[] m_buffer;
            m_buffer = temp;
            m_capacity = size;
        }
    }
    //<=============================end capacity=============================>
    //<============================element access============================>
    /**
     *
     * Get operator index
     * @tparam T
     * @param index
     * @return
     */
    template<class T>
    T & Vector<T>::operator[](size_t index) const {
        return m_buffer[index];
    }
    /**
     *
     * Get index
     * @tparam T
     * @param index
     * @return
     */
    template<class T>
    T & Vector<T>::at(size_t index) const{
        if (index > m_size)
            throw std::out_of_range("CBL::Vector");
        return m_buffer[index];
    }
    /**
     *
     * Get m_buffer
     * @tparam T
     * @return
     */
    template<class T>
    T * Vector<T>::data() const {
        return m_buffer;
    }
    //<==========================end element access==========================>
    //<===============================modifiers==============================>
    /**
     *
     * Push element in vector
     * @tparam T
     * @param value
     */
    template<class T>
    void Vector<T>::push_back(const T &value) {
        T* temp_buffer = new T[m_size + 1];
        memcpy(temp_buffer, m_buffer, m_size * sizeof(*m_buffer));
        delete[] m_buffer;
        m_buffer = temp_buffer;
        m_buffer[m_size] = value;
        m_capacity = m_size + 1;
        m_size = m_size + 1;
    }
    /**
     *
     * Delete element in vector
     * @tparam T
     */
    template<class T>
    void Vector<T>::pop_back() {
        if (m_size != 0)
            m_size--;
    }
    /**
     *
     * Insert value in iterator
     * @tparam T
     * @param pos
     * @param value
     * @return
     */
    template <class T>
    T* Vector<T>::insert(iterator pos, const T &value) {
        size_t i = pos - begin();
        size_t size = m_size;
        if (i > size) {
            resize(i + 1);
            size = i;
        } else
            push_back(0);
        for (size_t j = m_size; j > i; j--)
            m_buffer[j] = m_buffer[j - 1];
        m_buffer[i] = value;
        m_size = size + 1;
        return &(this->at(i));
    }
    /**
     *
     * Clear one element in vector iterator
     * @tparam T
     * @param pos
     * @return
     */
    template <class T>
    T* Vector<T>::erase(iterator pos) {
        if (begin() == end())
            return end();
        size_t i = pos - begin();
        while (i < m_size) {
            m_buffer[i] = m_buffer[i + 1];
            i++;
        }
        m_size--;
        if (pos == begin())
            return begin();
        if (m_size == i - 1)
            return end();
        return pos;
    }

    /**
     *
     * Clear many element in vector iterator
     * @tparam T
     * @param first
     * @param last
     * @return
     */
    template<class T>
    T* erase(T* first, T* last) {
        for (size_t i = 0; i < last - first; i++)
            erase(first);
        return first;
    }
    /**
     *
     * Clear vector
     * @tparam T
     */
    template<class T>
    void Vector<T>::clear() {
        for (auto i = 0; i < begin() - end(); i++)
            erase(begin());
    }
    //<============================end modifiers=============================>
} // end namespace CBL