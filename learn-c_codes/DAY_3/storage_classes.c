#include <stdio.h>

// Extern variable declaration
int extern_var = 10;

// Simulated hardware register for embedded system use case
volatile int hardware_register = 0xFF; // Volatile to prevent compiler optimizations

void demonstrateStorageClasses() {
    // Auto storage class (default for local variables)
    auto int auto_var = 5; // not necessary to declare 'auto' explicitly in C
    printf("Auto variable: %d\n", auto_var);

    // Register storage class
    register int register_var = 15; // to optimize access speed
    printf("Register variable: %d\n", register_var);

    // Static storage class
    static int static_var = 0; // retains its value between function calls
    static_var++;
    printf("Static variable: %d\n", static_var);

    // Const storage qualifier
    const int const_var = 20;
    printf("Const variable: %d\n", const_var);

    // Volatile storage qualifier (embedded system use case)
    printf("Reading volatile hardware register: 0x%X\n", hardware_register);
    hardware_register = 0xAA; // Simulate a write to the hardware register
    printf("Updated volatile hardware register: 0x%X\n", hardware_register);
}

int main() {
    printf("Demonstrating storage classes in C:\n");

    // Call the function multiple times to show static behavior
    demonstrateStorageClasses();
    demonstrateStorageClasses();

    // Extern storage class
    printf("Extern variable: %d\n", extern_var);

    return 0;
}
