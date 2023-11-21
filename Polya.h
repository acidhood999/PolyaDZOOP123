#pragma once

#include <iostream>
#include <cstring>

using namespace std;

class Pole {
private:
	int length;
	char* data;

public:
	Pole(const char* str) {
		length = strlen(str);
		data = new char[length + 1];
		strcpy_s(data, length + 1, str);
	}

	Pole(int len) {
		length = len;
		data = new char[length + 1];
		data[0] = '\0';
	}

	Pole(const Pole& other) {
		length = other.length;
		data = new char[length + 1];
		strcpy_s(data, length + 1, other.data);
	}

	~Pole() {
		delete[] data;
	}

	void print() {
		cout << data << endl;
	}

	void set(const char* str) {
		int newLength = strlen(str);
		if (newLength > length) {
			delete[] data;
			length = newLength;
			data = new char[length + 1];
		}
		strcpy_s(data, length + 1, str);
	}
};
