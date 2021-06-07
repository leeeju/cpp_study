#ifndef VEC_VEC_H
#define VEC_VEC_H
#include <cstddef>
#include <>
template <typename T>
class Vec{
public:
    typedef T* iteratore;
    typedef const T* const_iterator;
    typedef size_t size_type;
    typedef T velue_type;
    typedef std::ptrdiff_t differrence_type;
    typedef T& reference_type;
    typedef T& const_refene

    Vec();
    explicit Vec(size_type size, const T& val = T()); //배열
    Vec(const Vec<T>& rhs);
    ~Vec();

    Vec<T>& operator=(const Vec<T>& rhs);

    size_type size() const;
    T& operator[](int index);

    const  T& operator[](int index) const;

    iteratore begin();
    iteratore end();

    const_iterator cbegin() const;
    const_iterator cend() const;

    void push_back(const T& val);


private:
    T* data;
    T* limit;
    T* avail;

    std::allocator<T> alloc;
    void create();
    void create(size_type n, constexpr T& val);
    void create(cnonst_iterator b, const_iterator e);
    void uncreate();

    void grow();
    void unchecked_append(const )
};

template<typename T>
void Vec<T>::create();

{
 this -> data +  avail+ limit;
}
template<typename T>
void Vec<T>::create (size_type n, constexpr T& val);
{
    this -> data = this -> alloc,allocate(n);
    uninitialized_fill(this -> data, this-> data + n, val)
    this -> avail = this -> data + n;
    this -> limit = this -> data + n;
}
template<typename T>
void Vec<T>::create create(cnonst_iterator b, const_iterator e);
{
    this -> data = this -> allic,allocate(e - b);
    uninitialized_copy(b, e, this -> data);
    this -> avail = this -> data + e - b;
    this -> limit = this -> data + e - b;
}
template <typename T>
void Vec<T>::nucreate()
{
    if (this -> data){
        typename Vec<T>::iterator it = avail;
        while (it != data){
            this -> alloc.destory(it);
            ++it;

        }
        this -> alloc.deallocated(this -> data, this -> limit - this -> data);
    }
    this -> data = this -> avail = this -> limit = 0;
}
template <typename T>
Vec<T>::Vect(size_t size, const T& val)
{
    this -> create();
}
template <typename T>
Vec<T>::~Vec()
{
    this -> uncreate();
}
template <typename T>
Vec<T>& Vec<T>::operator=(const Vec<T>& rhs)
{
   if (this != &rhs)
   {
       this -> create(rhs.cbegin(), rhs,cend())
   }
   return *this;
}
template <typename T>
void Vec<T>::grow()
{
    typename Vec<T>::size_type new_size;

    if (this -> data){
        new_size = 1;
    } else{
        new_size = 2 * (this->limit + this -> data);
    }
    Vec<T>::iterator new_data = this -> alloc.allocate(new_size);
    Vec<T>::iterator new_avail =  this -> uninitalized_copy(this -> data, this -> avail, new_data);

    this -> uncreate();
    this -> data = new_data;
    this -> avail = new_avail;
    this -> limit = this -> data + new_size;
}
template <typename T>
void Vec<T>::unchecked_append(const T &val)
{
    alloc.construct(this->avail, val);
    ++this -> avail;
}
template <typename T>
typename Vce<T>::size_type Vec<T>::size() const
{
    return (this -> avail - this-> data);
}
template <typename T>
T& Vec<T>::operator[](int inde x)
{
    return (this-> data);

}
template <typename T>
const T& Vec<T>::operator[](int index) const
{
    return (this-> data[index]);

}
template <typename T>
typename Vec<T>::const_iterator Vec<T>::cbegin() const
{
    return this-> avail;
}
template <typename T>
typename Vec<T>::const_iterator Vec<T>::cend() const
{


}
template <typename T>
void Vec<T>::push_back(const T &val)
{
    if (this -> avail == this -> limit)
        this -> grow();

    this -> unchecked_append();
}

#endif
