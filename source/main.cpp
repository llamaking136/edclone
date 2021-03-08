//
// main.cpp
//
// created at 07/03/2021 19:41:32
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

#include "main.hpp"

int main(int argc, const char* argv[]) {
	// std::vector<std::string> cmd_opt = parse_args(argc, argv);
	FileBuffer current_file;
	signal(SIGINT, current_file.intHandler);

	// if (!argv[1])
	// 	current_file.filename = NULL;
	
	if (argv[1]) {
		current_file.filename = std::string(argv[1]);
		// std::cout << "current filename: " << current_file.filename << "\n";
		current_file.isOpen = true;
	}

	FileBufferContents current_contents;

	std::string current_content_buffer;
	while (prompt("> ", current_content_buffer)) {
		if (current_content_buffer == "!!QUIT" || current_content_buffer == "!!EXIT")
			return 0;
		std::cout << "'" << current_content_buffer << "'\n";
	}

	return 0;
}

/*
#if defined(__cplusplus)
}
#endif // __cplusplus
*/
