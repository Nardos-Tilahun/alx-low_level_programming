#include <elf.h>

#define BUFFER_SIZE 64

// Function to print an error message and exit with a specific code.
void error_exit(const char *msg, int code) {
    fprintf(stderr, "%s\n", msg);
    exit(code);
}

// Function to validate ELF file and read header.
void validate_and_read_elf_header(const char *filename, Elf64_Ehdr *header) {
    int fd = open(filename, O_RDONLY);

    if (fd == -1) {
        error_exit("Error: Unable to open the file", 98);
    }

    ssize_t bytes_read = read(fd, header, sizeof(Elf64_Ehdr));

    if (bytes_read == -1) {
        close(fd);
        error_exit("Error: Unable to read from the file", 98);
    }

    if (bytes_read != sizeof(Elf64_Ehdr) ||
        header->e_ident[EI_MAG0] != ELFMAG0 ||
        header->e_ident[EI_MAG1] != ELFMAG1 ||
        header->e_ident[EI_MAG2] != ELFMAG2 ||
        header->e_ident[EI_MAG3] != ELFMAG3) {
        close(fd);
        error_exit("Error: Not an ELF file", 98);
    }

    close(fd);
}

// Function to print the magic bytes from the ELF header.
void print_magic(Elf64_Ehdr *header) {
    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
}

// Function to print Class, Data, and Version from the ELF header.
void print_class_data_version(Elf64_Ehdr *header) {
    printf("Class:                              %s\n",
           header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
           header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid");

    printf("Data:                               %s\n",
           header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
           header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Invalid");

    printf("Version:                            %d (current)\n", header->e_ident[EI_VERSION]);
}

// Function to print OS/ABI and ABI Version from the ELF header.
void print_os_abi(Elf64_Ehdr *header) {
    printf("OS/ABI:                             ");
    switch (header->e_ident[EI_OSABI]) {
        // ... Cases for different OS/ABI values ...
        default:
            printf("Invalid\n");
            break;
    }

    printf("ABI Version:                        %d\n", header->e_ident[EI_ABIVERSION]);
}

// Main function.
int main(int argc, char *argv[]) {
    if (argc != 2) {
        error_exit("Usage: elf_info elf_filename", 98);
    }

    const char *filename = argv[1];
    Elf64_Ehdr elf_header;

    validate_and_read_elf_header(filename, &elf_header);
    print_magic(&elf_header);
    print_class_data_version(&elf_header);
    print_os_abi(&elf_header);

    return 0;
}

