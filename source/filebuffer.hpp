//
// filebuffer.hpp
//
// created at 07/03/2021 20:01:04
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


#if !defined(FILEBUFFER_HPP)
#define FILEBUFFER_HPP

#include <vector>
#include <string>
#include <iostream>

typedef std::vector<std::string> FileBufferContents;

struct FileBuffer {
	std::string filename;
	FileBufferContents filecontents;
	static bool isOpen;

	void removeFromFileBuffer(int index);
	void addToFileBuffer(std::string contents);
	void addToFileBufferByIndex(std::string contents, int index);
	void printFileBuffer();
	static void intHandler(int sig);
};

#endif // FILEBUFFER_HPP
