#pragma once
#include <stdexcept>
#include <string>
using std::string;
#include <vector>

	// A product represents one particular kind of product, such as apples
	// or cereal.
class Product {
public:
	
	// Create a product with a given code, name, and price.
	//
	// code is intended to be a UPC code (bar code) or PLU code in a
	// string.
	//
	// name may be any string.
	//
	// price is in units of dollars. It must be positive, or else this
	// function throws std::invalid_argument.
	Product(const std::string& code,
		const std::string& name,
		double price) {
			// TODO: implement this function properly

		if (price <= 0)
			throw std::invalid_argument("Price must positive");
		this->code = code;
		this->name = name;
		this->price = price;
		
	}

	

	Product() 
	{
		this->code = "";
		this->name = "";
		this->price = 0.0;
	}


	

	~Product() { }
	// Accessorss
	const std::string& getCode() const { return code; }
	const std::string& getName() const { return name; }
	const double getPrice() const { return price; }

	
private:
	std::string code;
	std::string name;
	double price;
};

// A catalog represents a collection of all of the products available
// at a store.
class Catalog {
public:
	// Create a new catalog.
	//
	// maxProducts is the maximum number of products that can be
	// stored. It must be positive, or else this function throws
	// std::invalid_argument.
	

	Catalog(int maxProducts) {
		
		// TODO: implement this function properly
		if (maxProducts <= 0)
		{
			throw std::invalid_argument("max products must be positive");
			return;
		}
		this->maxProducts = maxProducts;
		this->numProducts = 0;
	}

	

	~Catalog() {
		// TODO: implement this function properly
		if (maxProducts <= 0)
		{
			throw std::invalid_argument("max products must be positive");
			return;
		}
		delete[] productArray;
	}

	// Accessors.
	int getMaxProducts() const {
		if (maxProducts <= 0)
		// TODO: implement this function properly
		throw std::invalid_argument("max products must be positive");
		return maxProducts;
	}

	int getNumProducts() const {
		if (numProducts < 0)
		// TODO: implement this function properly
		throw std::invalid_argument("Number of Products must be positive");
		return numProducts;
	}

	// Return true when the catalog cannot fit any more products.
	bool isFull() const {
		if (maxProducts > numProducts)
			return 0;
		else {
			return 1;
			throw std::invalid_argument("not implemented yet");
		}
		// TODO: implement this function properly
	}

	// Add a new product to the catalog with a given code and name.
	//
	// code, name, and price have the same meaning as in a Product. If
	// price is invalid, throw std::invalid_argument.
	//
	// If this catalog is already full, throw overflow_error.
	//
	// Code must be different from all the product codes already in the
	// database. If it's not, throw std::invalid_argument.
	void addProduct(const std::string& code,
		const std::string& name,
		double price) {
		productArray[numProducts] = { code, name, price };
		numProducts++;
		if (this->code == code)
		{
			--numProducts;
			throw std::invalid_argument("code has the same product code from database");
			return;
		}
		this->code = code;
		this->name = name;
		this->price = price;
		if (numProducts > maxProducts)
		{
			throw std::overflow_error("Number of products can't exceed max products");
			return;
		}

		
		// TODO: implement this function properly
		
	}

	// Find a product by its code.
	//
	// code is a product code.
	//
	// Returns a const reference to the product with the matching code.
	//
	// Throw std::invalid_argument if no product with that code exists
	// in the catalog.
	
	const Product& findCode(const std::string& code) const {
		
		bool exist = false;

		throw std::invalid_argument("No such code as found");
	}

private:
	// TODO: add data members
	Product * productArray;
	int maxProducts;
	int numProducts;
	string name;
	string code;
	double price;
	
	
};
