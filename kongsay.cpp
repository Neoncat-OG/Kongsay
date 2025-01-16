#include <iostream>
#include <string>
#include <cstring>

int main(int argc, const char* argv[]) {
	if(argc == 2) {
		size_t length = strlen(argv[1]) + 1;
		char und = '_';
		char spc = ' ';
		std::string space(length, spc);
		std::string line(length, und);
		std::cout << R"(
                               )" << line << R"(
                   /\  ____   /)" << space << R"(\
                   <> ( oo ) < )" << argv[1] << R"( |
                   <>_| ^^ |_ \)" << line << R"(/
                   <>   @    \
                  /~~\ . . _ |
                 /~~~~\    | |
                /~~~~~~\/ _| |
                |[][][]/ / [m]
                |[][][[m]
                |[][][]|
                |[][][]|
                |[][][]|
                |[][][]|
                |[][][]|
                |[][][]|
                |[][][]|
                |[][][]|
                |[|--|]|
                |[|  |]|
                ======== 
               ==========
               |[[    ]]|
               ==========)" << "\n";
	} else {
                                std::cerr << "Usage: " << argv[0] << " <text>";
		return 1;
	}
	return 0;
}
