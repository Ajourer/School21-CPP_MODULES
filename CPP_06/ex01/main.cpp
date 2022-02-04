#include <iostream>

typedef struct Data {
	int	a;
	int	b;
} Data;

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main() {
	Data *ryan = new Data;
// Создаем переменную беззнакового типа, способную хранить указатель на данные
	uintptr_t ptr_storage; 
	Data *ryan_ptr;


	ryan->a = 1;
	ryan->b = 2;
	std::cout << "Struct data address in memory =: \t" << "\033[32m" << &ryan << "\033[0m" << std::endl;
	std::cout << "=======================================================" << std::endl;
    // Переводим структуру в последовательность байтов
	ptr_storage = serialize(ryan);
	std::cout << "Uintptr: \t\t\t\t" << "\033[32m" << ptr_storage << "\033[0m" << std::endl;
	std::cout << "=======================================================" << std::endl;
	// А потом обратно декодируем в структуру
	ryan_ptr = deserialize(ptr_storage);
	std::cout << "New data address with casts: \t\t" << "\033[32m" << ryan_ptr << "\033[0m" << std::endl;
	std::cout << "=======================================================" << std::endl;
	std::cout << ryan_ptr->a << std::endl << ryan_ptr->b << std::endl;
	return 0;
}
