
// #include <iostream>

// template <class T>

// class circular_buffer{
//     public:

//     // "explicit" is used to mark constructors to not implicitly convert types 
//     // size_t is the type returned by sizeof operator
//     explicit circular_buffer(size_t size):
//         buf_(std::unique_ptr<T[]>(new T[size]));
//         {}

//     void put(T item);
//     T get();
//     void reset();
//     bool empty() const; // const means the foo is read-only
//     bool full() const;
//     size_t capacity() const;
//     size_t size() const;

//     private:
    
//     // mutex used to provide synchronization between threads that are accessing buffer
//     std::mutex mutex_;
// 	std::unique_ptr<T[]> buf_;
// 	size_t head_ = 0;
// 	size_t tail_ = 0;
// 	const size_t max_size_;
// 	bool full_ = 0;

// };
// #endif //circular_buffer