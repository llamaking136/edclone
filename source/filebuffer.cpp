//
// filebuffer.cpp
//
// created at 07/03/2021 20:14:55
// written by llamaking136
//

// Copyright 2021 llamaking136
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


/*
#if defined(__cplusplus)
extern "C" {
#endif // __cplusplus
*/

#include "filebuffer.hpp"

void FileBuffer::removeFromFileBuffer(int index) {
	filecontents.erase(filecontents.begin() + index);
}

void FileBuffer::addToFileBuffer(std::string contents) {
	filecontents.push_back(contents);
}

void FileBuffer::addToFileBufferByIndex(std::string contents, int index) {
	filecontents.insert(filecontents.begin() + index, contents);
}

void FileBuffer::printFileBuffer() {
	for (std::string contents : filecontents) {
		std::cout << contents << ", ";
	}
	std::cout << "\n";
}

void FileBuffer::intHandler(int sig) {
	if (isOpen) {
		char opt;
		std::cout << "You have unsaved file buffer contents, leave without saving? > ";
		std::cout.flush();

		std::cin >> opt;

		if (opt == 'y' || opt == 'Y') {
			exit(0);
		} else if (opt == 'n' || opt == 'N') {
			return;
		} else {
			std::cout << "Error: Did not input 'y' or 'n'\n";
			return;
		}
	}
}

/*
#if defined(__cplusplus)
}
#endif // __cplusplus
*/
