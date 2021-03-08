//
// input.cpp
//
// created at 07/03/2021 20:23:43
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

#include "input.hpp"

bool prompt(std::string str, std::string& result) {
	std::cout << str;
	std::cout.flush();
	if (std::getline(std::cin, result)) {
		return true;
	} else {
		return false;
	}
}

/*
#if defined(__cplusplus)
}
#endif // __cplusplus
*/
