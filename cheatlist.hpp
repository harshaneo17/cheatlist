#include <iostream>
#include <vector>
#include <variant>

template<typename... Types>
class AnyVector {
private:
    std::vector<std::variant<Types...>> data;

public:
    // Constructor
    AnyVector() {}

    // Add element to the vector
    template<typename T>
    void append(const T& item) {
        data.push_back(item);
    }

    // Get element by index
    template<typename T>
    T& get(size_t index) {
        return std::get<T>(data[index]);
    }

    // Get size of the vector
    size_t size() const {
        return data.size();
    }

    // Check if the vector is empty
    bool empty() const {
        return data.empty();
    }
};


