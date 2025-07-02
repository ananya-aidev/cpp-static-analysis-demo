#include <iostream>
#include <cstring>
#include <cstdlib>

void bufferOverflowExample(const char* input) {
    char buffer[10];
    strcpy(buffer, input);  // ❌ Flawfinder should flag this
    std::cout << "Buffer: " << buffer << std::endl;
}

void memoryLeakExample() {
    int* leak = new int[100];  // ❌ Cppcheck should flag memory leak
    leak[0] = 42;
    // forgot: delete[] leak;
}

void dangerousSystemCall() {
    system("ls");  // ❌ Flawfinder will warn this is dangerous
}

int main(int argc, char* argv[]) {
    if (argc > 1) bufferOverflowExample(argv[1]);
    memoryLeakExample();
    dangerousSystemCall();
    return 0;
}
