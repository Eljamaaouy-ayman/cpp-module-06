#include "Serialization.hpp"

int main(){
	Data data;
	data.name = "ayman";
	data.age = 21;
	Data *pd = &data;

	std::cout << "address of data: " << pd << std::endl;
	uintptr_t a = Serialization::serialize(pd);
	std::cout << "uintptr_t of data: " << a << std::endl;
	Data *pd1 = Serialization::deserialize(a);
	std::cout << "address of data1: " << pd1 << std::endl;
}
