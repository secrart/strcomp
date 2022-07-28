#include<iostream>
#include<string>
#include<algorithm>

// Created by Secrart (2022)

// This is free and unencumbered software released into the public domain.

// Anyone is free to copy, modify, publish, use, compile, sell, or
// distribute this software, either in source code form or as a compiled
// binary, for any purpose, commercial or non-commercial, and by any
// means.

// In jurisdictions that recognize copyright laws, the author or authors
// of this software dedicate any and all copyright interest in the
// software to the public domain. We make this dedication for the benefit
// of the public at large and to the detriment of our heirs and
// successors. We intend this dedication to be an overt act of
// relinquishment in perpetuity of all present and future rights to this
// software under copyright law.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
// OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.

// For more information, please refer to <http://unlicense.org/>

void compare_strings(std::string s1, std::string s2);
void to_lower(std::string& convert); 

int main(int argc, const char** args) {

	if(argc < 3) {
		std::cerr << "Improper amount of arguments!" << std::endl;
		return 0; 
	}
	
	std::string s1(args[1]), s2(args[2]);

	if(argc > 3) {
		std::string param = std::string(args[3]);
		if(param != "-nc") {
			std::cerr << "Unknown argument " << param << std::endl;
			return 0;
		}	
		to_lower(s1);
		to_lower(s2);
	}
	
	compare_strings(s1, s2); 

	return 0; 

}

void compare_strings(std::string s1, std::string s2) {

	if(s1 == s2) {
		std::cout << "match" << std::endl; 
		return; 
	}

	std::cout << "mismatch" << std::endl;

}

void to_lower(std::string& convert) {

	std::transform(convert.begin(), convert.end(), convert.begin(), [](unsigned char c) { return std::tolower(c); });

}
