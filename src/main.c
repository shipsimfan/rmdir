#include <stdio.h>
#include <string.h>
#include <los/filesystem.h>

int main(int argc, const char* argv[]) {
	if(argc != 2) {
		printf("Usage: %s directory_name\n", argv[0]);
		return 1;
	}

	int64_t status = remove_directory(argv[1]);
	if(status < 0) {
		printf("Error deleting %s: %s\n", argv[1], strerror(status));
		return 1;
	}

	return 0;
}
