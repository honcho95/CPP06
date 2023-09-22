#include "Serializer.hpp"
#include <iostream>

int main() 
{
    Data dataObject;
    dataObject.value = 42;

    uintptr_t serializedData = Serializer::serialize(&dataObject);
    Data* deserializedPointer = Serializer::deserialize(serializedData);

    if (&dataObject == deserializedPointer) {
        std::cout << "Serialization and Deserialization succeeded!" << std::endl;
        std::cout << "Original data value: " << dataObject.value << std::endl;
        std::cout << "Deserialized data value: " << deserializedPointer->value << std::endl;
    } else {
        std::cout << "Error in Serialization/Deserialization process." << std::endl;
    }

    return 0;
}
