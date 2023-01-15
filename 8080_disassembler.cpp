// Disassembler for the 8080 instruction set.
#include <fstream>
#include <iostream>

int main(int argc, char *argv[]) {
  // prepare to disassemble the 8080 program by reading it.
  std::ifstream program(argv[1]);

  if (program.is_open())
  {
    char program_instruction;
    program.read(&program_instruction, 1);
    std::cout << program_instruction << std::endl;

  } else {
    std::cout << "Failed to open the filename supplied." << std::endl; // TODO, more helpful error (e.g., file not found)
    return 1;
  }
	return 0;
}
