Here is the **complete roadmap from absolute beginner to expert** — in proper sequential order:

---

## **PHASE 0 — Before You Write Code**
### *Duration: 1-2 weeks*

---

### **1. How Computers Work**
- Binary number system — 0 and 1
- Binary to decimal, decimal to binary conversion
- Hexadecimal — base 16
- Hex to binary conversion — `0xAF = 1010 1111`
- Octal — base 8 (less common but appears)
- Why computers use binary — transistors, on/off states
- Bits and bytes — 8 bits = 1 byte
- Kilobyte, megabyte, gigabyte — powers of 2
- ASCII — how characters stored as numbers
- Unicode — UTF-8, UTF-16, UTF-32
- How text files work — just bytes
- How images work — pixels, RGB values
- How programs work — instructions stored as numbers

### **2. Computer Architecture Basics**
- CPU — brain of computer
- RAM — temporary memory, loses on power off
- Storage (SSD/HDD) — permanent memory
- GPU — graphics processor
- Motherboard — connects everything
- Bus — data highway between components
- Clock speed — how fast CPU executes
- Cores — multiple CPUs on one chip
- Cache — small fast memory inside CPU
- How CPU executes instructions — fetch, decode, execute
- Operating system role — manages hardware, runs programs
- Process vs program — program is file, process is running program

### **3. How Software Works**
- Source code — human readable text
- Compilation — source → machine code
- Interpretation — run line by line
- Linker — combine compiled files
- Loader — load program into memory
- Libraries — reusable code collections
- API — Application Programming Interface
- Why different languages exist
- High level vs low level languages
- Compiled vs interpreted — tradeoffs

---

## **PHASE 1 — C Language Foundation**
### *Duration: 2-3 months*

---

### **4. Setup & Tools**
- Install Linux (Ubuntu) or WSL on Windows
- Terminal basics — `ls`, `cd`, `mkdir`, `cp`, `mv`, `rm`
- Text editor — VS Code or vim basics
- GCC compiler — `gcc hello.c -o hello`
- Running programs — `./hello`
- `gcc -Wall -Wextra` — enable warnings always
- `man` command — read documentation
- `--help` flag for any tool

### **5. First C Program**
```c
#include <stdio.h>
int main(void) {
    printf("Hello, World!\n");
    return 0;
}
```
- Every part of above — what each token means
- `#include` — preprocessor directive
- `<stdio.h>` — standard I/O header
- `int main(void)` — entry point
- `printf` — print formatted output
- `return 0` — success signal
- Compilation pipeline — preprocessing, compiling, assembling, linking

### **6. Variables and Data Types**
- `int` — integer
- `char` — single character
- `float` — decimal number
- `double` — double precision decimal
- `long` — larger integer
- `unsigned` — no negative values
- Variable declaration — `int x;`
- Variable initialization — `int x = 5;`
- Assignment — `x = 10;`
- `sizeof` operator
- Type limits — `INT_MAX`, `INT_MIN`
- `<limits.h>` and `<float.h>`

### **7. Operators**
- Arithmetic — `+ - * / %`
- Comparison — `== != < > <= >=`
- Logical — `&& || !`
- Bitwise — `& | ^ ~ << >>`
- Assignment — `= += -= *= /=`
- Increment/decrement — `++ --`
- Ternary — `condition ? a : b`
- Operator precedence — know the order
- Integer division — `7/2 = 3` not `3.5`
- Modulo — `7%3 = 1`

### **8. Input and Output**
- `printf` — format specifiers `%d %f %c %s %p %x`
- `scanf` — reading input
- `getchar` / `putchar`
- `fgets` — safe string input
- Format strings — width, precision, flags
- `fprintf` — write to file
- `stderr` — error output

### **9. Control Flow**
- `if` / `else if` / `else`
- `switch` / `case` / `break` / `default`
- `while` loop
- `do while` loop
- `for` loop
- `break` — exit loop
- `continue` — skip iteration
- `goto` — avoid but know it exists
- Nested loops
- Loop patterns — counting, accumulating, searching

### **10. Functions**
- Function declaration (prototype)
- Function definition
- Parameters and arguments
- Return values
- `void` functions
- Recursive functions
- `main` function details
- Stack — how function calls work conceptually
- Local variables — exist only in function
- Global variables — accessible everywhere (avoid)

### **11. Arrays**
- Declaration — `int arr[10];`
- Indexing — starts at 0
- Initialization — `int arr[] = {1, 2, 3};`
- Array bounds — no automatic checking
- Multi-dimensional arrays — `int matrix[3][4];`
- Array as function parameter — decays to pointer
- `sizeof` with arrays
- Common algorithms — find max, reverse, sort

### **12. Strings**
- String — array of `char` ending with `\0`
- String literals — `"hello"` — in read-only memory
- `<string.h>` functions
- `strlen` — length
- `strcpy` / `strncpy` — copy
- `strcat` / `strncat` — concatenate
- `strcmp` / `strncmp` — compare
- `strchr` / `strstr` — search
- `sprintf` / `snprintf` — format to string
- Common string bugs — buffer overflow, missing null terminator

### **13. Pointers — First Contact**
- What a pointer is — stores address
- Declaration — `int* p;`
- Address-of operator — `&x`
- Dereference operator — `*p`
- `NULL` pointer
- Pointer to pointer — `int** pp`
- Pointer arithmetic
- Array and pointer relationship
- Pass by reference simulation — `void swap(int* a, int* b)`
- Common pointer bugs — null dereference, dangling pointer

### **14. Structures**
- `struct` definition
- Member access — `.` and `->`
- Struct initialization
- Struct as function parameter
- Struct with pointers
- Nested structs
- `typedef` — cleaner names
- Self-referential struct — linked list node

### **15. Memory Management**
- Stack vs heap
- `malloc(size)` — allocate
- `calloc(n, size)` — allocate and zero
- `realloc(ptr, size)` — resize
- `free(ptr)` — release
- Memory leaks — forgetting to free
- `valgrind` — detect memory errors
- Common bugs — double free, use after free

### **16. File I/O**
- `fopen` / `fclose`
- `fread` / `fwrite`
- `fgets` / `fputs`
- `fprintf` / `fscanf`
- File modes — `"r"`, `"w"`, `"a"`, `"rb"`, `"wb"`
- `fseek` / `ftell` / `rewind`
- `feof` / `ferror`
- Error handling — check every return value

### **17. Preprocessor**
- `#define` — constants and macros
- `#include` — file inclusion
- `#ifdef` / `#ifndef` / `#endif` — conditional compilation
- `#pragma once` — include guard
- Macro pitfalls — double evaluation, precedence
- Predefined macros — `__FILE__`, `__LINE__`, `__func__`

---

### **Projects at Phase 1 End**
- Calculator — arithmetic operations
- Student grade manager — arrays of structs
- Simple text file reader/writer
- Number guessing game
- Basic linked list — insert, delete, print
- String manipulation library

---

## **PHASE 2 — Intermediate C**
### *Duration: 2-3 months*

---

### **18. Pointers — Deep**
- Pointer arithmetic — exact rules
- Pointer to array vs array of pointers
- Function pointers — `int (*fp)(int, int)`
- Pointer to struct member
- `void*` — generic pointer
- `const` with pointers — all combinations
- `restrict` keyword
- Complex declarations — right-left rule
- `offsetof` macro
- `container_of` pattern

### **19. Advanced Structs and Unions**
- Memory layout and padding
- `offsetof` for layout inspection
- `#pragma pack` / `__attribute__((packed))`
- Bit fields — `unsigned int flag : 1`
- Unions — shared memory
- Tagged union — discriminated union pattern
- Anonymous struct/union (C11)
- Flexible array member — `int data[]`
- Struct tricks — opaque pointer, vtable simulation

### **20. Advanced Functions**
- Variadic functions — `va_list`, `va_arg`
- Implementing `printf`-like functions
- Function pointers as callbacks
- `qsort` and `bsearch` — standard library
- `inline` functions — C99
- `_Noreturn` — C11
- Recursion patterns — tree, divide and conquer
- Tail recursion — and when compiler optimizes it

### **21. Strings — Deep**
- String internals — null terminator, encoding
- Safe string functions — `snprintf`, `strlcpy`
- String to number — `strtol`, `strtod`
- Number to string — `sprintf`
- `strtok` / `strtok_r` — tokenizing
- Multi-byte strings — wide characters
- Handling Unicode — basics

### **22. Memory — Deep**
- Heap internals — how `malloc` works
- Memory fragmentation
- Arena allocator — implement from scratch
- Memory pools
- Stack memory — automatic, limited
- `alloca` — stack allocation (avoid)
- Memory debugging — AddressSanitizer
- Valgrind — full usage
- Common vulnerability patterns — buffer overflow, heap overflow

### **23. Data Structures in C**
- Linked list — singly, doubly, circular
- Stack — array and linked list implementations
- Queue — array (circular) and linked list
- Hash table — chaining and open addressing
- Binary search tree
- Generic data structures — using `void*`
- Intrusive data structures — embedded nodes
- Dynamic array — like C++ vector

### **24. Algorithms in C**
- Sorting — bubble, insertion, selection, merge, quick
- Binary search
- Time complexity — Big O notation
- Space complexity
- Recursion to iteration
- Dynamic programming basics
- Graph algorithms — BFS, DFS

### **25. Compilation and Linking**
- Multiple source files — separate compilation
- Header files — declarations
- Source files — definitions
- `extern` keyword
- `static` at file scope — internal linkage
- Object files — `.o`
- `ar` — creating static libraries
- `gcc -shared` — dynamic libraries
- `Makefile` — build automation
- `cmake` — modern build system

### **26. Error Handling Patterns**
- Return value convention — 0 success, negative error
- `errno` — standard error codes
- `perror` / `strerror`
- Error propagation — through call chain
- Cleanup on error — goto pattern
- Defensive programming — assert, validate inputs
- `assert` macro

### **27. C Standard Library — Deep**
- `<stdlib.h>` — memory, random, conversion, exit
- `<string.h>` — string and memory operations
- `<stdio.h>` — I/O
- `<math.h>` — math functions
- `<time.h>` — time functions
- `<ctype.h>` — character classification
- `<limits.h>` / `<float.h>` — type limits
- `<stdint.h>` — fixed-width integers
- `<stdbool.h>` — bool type
- `<stddef.h>` — `size_t`, `ptrdiff_t`, `NULL`, `offsetof`

---

### **Projects at Phase 2 End**
- Implement `malloc` — simple version
- Shell — parse and execute commands
- HTTP server — serve static files
- Database — in-memory key-value store
- JSON parser
- Compression — run-length encoding or Huffman
- Mini interpreter — calculator with variables

---

## **PHASE 3 — Systems Programming**
### *Duration: 3-4 months*

---

### **28. Linux System Calls**
- What system calls are
- `unistd.h` — POSIX interface
- File operations — `open`, `read`, `write`, `close`
- Process — `fork`, `exec`, `wait`, `exit`
- Memory — `mmap`, `mprotect`, `brk`
- `strace` — trace system calls
- `errno` and error handling
- POSIX vs Linux-specific

### **29. Processes**
- Process creation — `fork()`
- Copy-on-write after fork
- `exec` family — replace process image
- `wait` / `waitpid` — reap children
- Zombie processes — and how to prevent
- Orphan processes
- Process groups and sessions
- `getpid()`, `getppid()`
- Environment variables — `getenv`, `setenv`
- `/proc/PID/` — process information

### **30. Signals**
- What signals are — asynchronous notifications
- Common signals — SIGINT, SIGTERM, SIGKILL, SIGSEGV, SIGCHLD
- `signal()` — simple handler registration
- `sigaction()` — proper handler registration
- `sigprocmask()` — blocking signals
- Async-signal-safety — what's safe in handlers
- `volatile sig_atomic_t` — safe signal flag
- `raise()`, `kill()` — sending signals
- Real-time signals

### **31. File System Programming**
- `open()`, `read()`, `write()`, `close()` — low level
- File descriptors — integers referencing kernel objects
- `stat()` / `lstat()` / `fstat()` — file metadata
- Directory operations — `opendir`, `readdir`, `closedir`
- `mkdir`, `rmdir`, `unlink`, `rename`
- Hard links vs symbolic links
- `readlink()` — read symlink target
- File permissions — `chmod`, `chown`
- `ioctl()` — device control
- `/proc` and `/sys` filesystems

### **32. Inter-Process Communication**
- Pipes — `pipe()` — unidirectional
- Named pipes (FIFOs) — `mkfifo`
- `dup()` / `dup2()` — redirect file descriptors
- Message queues — POSIX `mq_open`
- Shared memory — `shm_open`, `mmap`
- Semaphores — POSIX `sem_open`
- Unix sockets — `AF_UNIX`
- Choosing IPC mechanism — when to use what

### **33. Threads**
- `pthread_create` / `pthread_join`
- Thread attributes — stack size, detach state
- Mutex — `pthread_mutex_t`
- Condition variables — `pthread_cond_t`
- Read-write locks — `pthread_rwlock_t`
- Thread-local storage — `_Thread_local`
- Deadlock — causes and prevention
- Race conditions — detection with ThreadSanitizer
- Thread pools — implementation
- Atomic operations — `<stdatomic.h>`
- Memory ordering — acquire, release, seq_cst

### **34. Network Programming**
- BSD socket API
- TCP client and server — complete implementation
- UDP — datagram communication
- Address structures — `sockaddr_in`, `sockaddr_in6`
- `getaddrinfo` — modern name resolution
- Socket options — `SO_REUSEADDR`, `TCP_NODELAY`
- Non-blocking I/O — `O_NONBLOCK`
- `select` / `poll` — I/O multiplexing
- `epoll` — scalable I/O
- HTTP protocol — build simple HTTP server/client
- TLS basics — OpenSSL integration

### **35. Memory Management — Advanced**
- Virtual memory — how OS manages it
- `mmap` — memory mapped files
- Page faults — how they work
- `mprotect` — change page permissions
- `/proc/PID/maps` — view memory layout
- ASLR — address space layout randomization
- Stack vs heap — deep understanding
- Custom allocators — slab, buddy, arena
- Garbage collection concepts — even though C doesn't have it

### **36. Debugging and Profiling**
- `gdb` — full mastery
- Breakpoints, watchpoints, catchpoints
- Core dumps — analysis
- `valgrind` — all tools (memcheck, callgrind, helgrind)
- AddressSanitizer — `-fsanitize=address`
- UndefinedBehaviorSanitizer — `-fsanitize=undefined`
- ThreadSanitizer — `-fsanitize=thread`
- `perf` — CPU profiling
- `gprof` — function profiling
- `strace` / `ltrace` — system/library call tracing

---

### **Projects at Phase 3 End**
- Multi-threaded HTTP server — handle concurrent connections
- Redis-like server — in-memory key-value with persistence
- Shell with job control — foreground/background processes
- Simple database — B-tree or hash index
- Memory allocator — full `malloc`/`free` implementation
- Network proxy — TCP proxy with logging
- Simple container — namespaces and cgroups

---

## **PHASE 4 — Low Level & Bitwise Mastery**
### *Duration: 2-3 months*

---

### **37. Bitwise Operations — Complete**
- All operators — `& | ^ ~ << >>`
- Bit manipulation patterns — set, clear, toggle, test
- Common algorithms — popcount, CLZ, CTZ
- Bit tricks — power of 2, lowest set bit, parity
- Gray code, Morton code
- Rotate operations
- SWAR — SIMD Within A Register
- Endianness — byte swapping
- Floating point bit manipulation — fast inverse sqrt
- `<stdbit.h>` — C23 standard bit functions

### **38. Undefined Behavior — Complete**
- Signed integer overflow
- Strict aliasing violations
- Unsequenced modifications
- Out of bounds access
- Reading uninitialized memory
- Null pointer dereference
- Shift by negative or too large amount
- Compiler exploits UB for optimization — real examples
- `-fsanitize=undefined` — catching UB
- Writing UB-free code — discipline

### **39. C Memory Model**
- Object and effective type
- Strict aliasing — complete rules
- `restrict` — aliasing promises
- `volatile` — exact semantics
- `_Atomic` — C11 atomics
- Sequence points — C99
- Sequenced-before — C11
- Integer promotions — exact rules
- Usual arithmetic conversions

### **40. Compiler Internals**
- Compilation phases — all 9 phases
- Preprocessing — macro expansion in detail
- Tokenization — maximal munch
- Parsing — AST construction
- Optimization — what compiler does to your code
- Code generation — how C maps to assembly
- Reading compiler output — `gcc -S`
- Godbolt — online compiler explorer
- Compiler flags — optimization levels
- LTO — link time optimization
- PGO — profile guided optimization

### **41. Linker — Deep**
- Object file format — ELF sections
- Symbol table — defined and undefined
- Relocation — patching addresses
- Static linking — archive libraries
- Dynamic linking — shared libraries
- PLT and GOT — lazy binding
- Symbol visibility — `__attribute__((visibility))`
- Weak symbols — overridable defaults
- Linker scripts — custom memory layout
- `nm`, `objdump`, `readelf`, `ldd` — tools

### **42. ELF Format**
- ELF header — magic, type, machine
- Program headers — segments (runtime view)
- Section headers — sections (link-time view)
- `.text` — code
- `.data` — initialized data
- `.bss` — uninitialized data
- `.rodata` — read-only data
- `.symtab` — symbol table
- `.rela.text` — relocations
- DWARF — debugging information
- Build ID — binary identification

---

## **PHASE 5 — Assembly Language**
### *Duration: 2-3 months*

---

### **43. Assembly Fundamentals**
- Why learn assembly
- AT&T vs Intel syntax
- Registers — all x86-64 registers
- Register subsets — RAX/EAX/AX/AL
- RFLAGS — every bit
- Addressing modes — all forms
- Data sizes — byte, word, dword, qword
- Assembler directives — NASM
- First program — hello world using syscall

### **44. Core Instructions**
- Data movement — `mov`, `lea`, `push`, `pop`, `xchg`
- Arithmetic — `add`, `sub`, `mul`, `div`, `imul`, `idiv`
- Logic — `and`, `or`, `xor`, `not`, `test`
- Shifts — `shl`, `shr`, `sal`, `sar`, `rol`, `ror`
- Compare — `cmp`, `test`
- Jumps — all conditional jumps
- `cmov` — conditional move
- `setcc` — set byte on condition
- String instructions — `movsb`, `stosb`, `scasb`, `rep`

### **45. Stack and Functions**
- Stack mechanics — push, pop, RSP
- Calling convention — System V AMD64 ABI
- Function prologue and epilogue
- Frame pointer — RBP
- Local variables on stack
- Passing arguments — registers and stack
- Return values
- Callee vs caller saved registers
- Red zone — leaf function optimization
- `call` and `ret` — mechanics

### **46. Mixing C and Assembly**
- Inline assembly — GCC syntax
- Extended inline assembly — constraints, clobbers
- Writing functions in separate `.asm` file
- Calling assembly from C
- Calling C from assembly
- Debugging mixed code — GDB

### **47. SIMD — Vectorization**
- SSE registers — XMM0-XMM15
- Scalar vs packed operations
- SSE — float and integer operations
- AVX — 256-bit YMM registers
- AVX2 — integer extensions
- Auto-vectorization — compiler does it
- Manual vectorization — when and why
- Alignment requirements
- `_mm_` intrinsics — C interface to SIMD
- Performance measurement — before and after

### **48. Assembly Optimization**
- Instruction latency and throughput
- Port utilization — execution units
- Branch prediction — write predictable code
- False dependencies — break with xor
- Loop optimization — unrolling, counting down
- Memory access patterns — cache friendly
- Multiply vs divide — use multiply by reciprocal
- Branch-free code — cmov, bit tricks
- `agner.org` — instruction tables

---

## **PHASE 6 — Operating Systems & Kernel**
### *Duration: 3-4 months*

---

### **49. Operating System Concepts**
- Kernel vs userspace — privilege rings
- System call interface — how crossing works
- Virtual memory — page tables, TLB
- Process scheduler — CFS, real-time
- File systems — VFS, inode, dentry
- Device drivers — character, block, network
- Interrupt handling — IRQs, softirqs, tasklets
- Memory management — slab, buddy allocator
- Synchronization — spinlocks, mutexes, RCU

### **50. Bootloader**
- BIOS boot process — from power-on to your code
- Real mode — 16-bit, 1MB limit
- Write simple bootloader — hello world
- Protected mode — 32-bit, 4GB
- GDT — Global Descriptor Table
- Switching from real to protected mode
- Long mode — 64-bit
- UEFI — modern alternative to BIOS
- Paging setup — map virtual to physical

### **51. Kernel Development Basics**
- Linux kernel source — where to find, how to navigate
- Kernel modules — loadable kernel modules
- `insmod`, `rmmod`, `lsmod`, `modprobe`
- Writing hello world kernel module
- `printk` — kernel print
- Module parameters — `module_param`
- `proc` filesystem — create entries
- Kernel data structures — list, rbtree, hashtable
- Kernel memory — `kmalloc`, `vmalloc`, `kfree`
- GFP flags — `GFP_KERNEL`, `GFP_ATOMIC`

### **52. Character Device Drivers**
- Device files — `/dev/`
- Major and minor numbers
- `alloc_chrdev_region` — dynamic major
- `cdev_init`, `cdev_add`
- `file_operations` struct
- Implementing `open`, `read`, `write`, `release`, `ioctl`
- `copy_to_user`, `copy_from_user`
- `udev` — automatic device file creation
- Testing with `cat`, `echo`, custom test program

### **53. Interrupts and Concurrency in Kernel**
- Hardware interrupts — `request_irq`, `free_irq`
- Top half vs bottom half
- Tasklets — deferred work
- Workqueues — kernel threads for deferred work
- Spinlocks — interrupt context
- Mutexes — process context only
- Semaphores in kernel
- RCU — read-copy-update
- Atomic operations in kernel
- Memory barriers in kernel

### **54. Platform and Bus Drivers**
- Platform devices — device tree
- Device tree syntax and binding
- `platform_driver` — probe, remove
- I2C driver — `i2c_driver`, `i2c_client`
- SPI driver — `spi_driver`
- USB driver — `usb_driver`, URBs
- GPIO subsystem
- Clock framework
- Regulator framework
- Power management — runtime PM, system sleep

---

### **Projects at Phase 6 End**
- Bootloader — load second stage, enter long mode
- Tiny OS kernel — processes, scheduler, system calls
- Character device driver — interact with hardware
- I2C device driver — sensor on Raspberry Pi
- USB device driver — talk to USB device
- Virtual file system — implement simple FS

---

## **PHASE 7 — Design Patterns & Architecture**
### *Duration: 2 months*

---

### **55. Design Patterns in C**
- Creational — Singleton, Factory, Builder, Prototype, Object Pool
- Structural — Adapter, Bridge, Composite, Decorator, Facade, Flyweight, Proxy, Pimpl
- Behavioral — Observer, Strategy, Command, Iterator, State, Chain of Responsibility, Mediator, Visitor, Memento, Template Method
- C-specific — X-macro, Intrusive containers, Arena allocator, Opaque pointer, Tagged union
- Anti-patterns — God struct, Singleton abuse, Premature abstraction

### **56. Software Architecture**
- Layered architecture
- Event-driven architecture
- Pipeline pattern
- Reactor pattern — single-thread many connections
- Proactor pattern — async completion
- Plugin system — dynamic loading
- Module system — clear interfaces
- Dependency injection — without IoC container

### **57. API Design**
- Principle of least surprise
- Consistent naming conventions
- Error handling strategy — return codes vs output params
- Memory ownership — who allocates, who frees
- Opaque types — ABI stability
- Versioning — backward compatibility
- Documentation — what to document
- Testing — unit and integration tests

---

## **PHASE 8 — Advanced Specializations**
### *Choose 1-2 based on career goal*

---

### **58A — Embedded Systems**
- Microcontroller architecture — AVR, ARM Cortex-M
- No OS — bare metal programming
- Startup code — reset handler, vector table
- Memory-mapped I/O — peripheral registers
- Interrupts — NVIC on ARM
- Clock configuration — PLL, prescalers
- GPIO — input, output, alternate function
- UART — serial communication
- I2C, SPI — sensor communication
- ADC/DAC — analog interface
- RTOS — FreeRTOS basics
- Power management — sleep modes
- Watchdog timer
- Bootloader for microcontroller
- Linker script for embedded

### **58B — Security / Exploit Development**
- Buffer overflow — stack smashing
- Return-oriented programming (ROP)
- Format string vulnerabilities
- Heap exploitation — use-after-free, double free
- ASLR, stack canary, NX — mitigations
- Bypassing mitigations
- Shellcode writing
- `pwntools` — exploitation framework
- Reverse engineering — Ghidra, IDA Pro
- CTF challenges — practice
- Fuzzing — AFL, libFuzzer
- Symbolic execution — angr

### **58C — High Performance Computing**
- Cache optimization — access patterns, prefetching
- SIMD programming — AVX2, AVX-512
- Lock-free algorithms — CAS, hazard pointers
- Memory allocators — custom for HPC
- NUMA awareness — memory placement
- CPU affinity — pin threads to cores
- False sharing elimination
- Branch prediction optimization
- Compiler optimization flags — PGO, LTO
- Profiling — perf, VTune
- Benchmarking — methodology
- Network optimization — DPDK, io_uring, XDP

### **58D — Compiler / Language Development**
- Lexing — tokenization
- Parsing — recursive descent, Pratt, LR
- AST — abstract syntax tree
- Semantic analysis — type checking, symbol tables
- Intermediate representation — SSA, three-address code
- Optimization passes — constant folding, DCE, inlining
- Code generation — emit assembly or IR
- Register allocation — linear scan, graph coloring
- Write a language — from scratch
- LLVM — use as backend
- JIT compilation — generate machine code at runtime

### **58E — Networking / Systems**
- TCP/IP stack internals
- Socket programming — all advanced topics
- `epoll` / `io_uring` — high performance I/O
- Protocol design — binary protocol
- TLS implementation — understand handshake
- DNS — implement resolver
- HTTP/2, HTTP/3, QUIC
- Load balancer — implement basic one
- Proxy — forward and reverse
- `DPDK` — kernel bypass networking
- XDP — eBPF packet processing
- Network namespaces

---

## **PHASE 9 — Mastery & Beyond**
### *Ongoing — never ends*

---

### **59. Read Source Code**
- Linux kernel — start with simple subsystems
- Redis — excellent C code, clean architecture
- SQLite — single-file database, incredible engineering
- Nginx — event-driven web server
- OpenSSL — understand, don't write your own
- Git — C, version control internals
- CPython — Python interpreter
- QEMU — hardware emulation
- musl libc — clean C standard library

### **60. Read Standards and Specifications**
- C11 standard — ISO/IEC 9899:2011
- C17 standard — ISO/IEC 9899:2018
- C23 standard — latest
- POSIX standard — IEEE Std 1003.1
- x86-64 ABI — System V AMD64 ABI
- Intel Software Developer Manual — 3 volumes
- ARM Architecture Reference Manual
- Linux kernel documentation — `Documentation/`
- RFC documents — network protocols

### **61. Essential Books in Order**

**Beginner:**
- K&R — "The C Programming Language" — Kernighan & Ritchie
- "C Programming: A Modern Approach" — K.N. King

**Intermediate:**
- "Expert C Programming" — Peter van der Linden
- "C Interfaces and Implementations" — Hanson

**Systems:**
- "The Linux Programming Interface" — Kerrisk — BIBLE
- "Advanced Programming in the UNIX Environment" — Stevens
- "Unix Network Programming Vol 1" — Stevens

**Low Level:**
- "Computer Systems: A Programmer's Perspective" (CS:APP) — Bryant & O'Hallaron — MOST IMPORTANT
- "Modern X86 Assembly Language Programming" — Kusswurm
- "Computer Organization and Design" — Patterson & Hennessy

**Kernel:**
- "Linux Kernel Development" — Robert Love
- "Linux Device Drivers" — Corbet, Rubini, Kroah-Hartman (free online)
- "Understanding the Linux Kernel" — Bovet & Cesati

**Advanced:**
- "Hacker's Delight" — Warren — bit manipulation bible
- "The Art of Exploitation" — Erickson — security
- "Performance Analysis and Tuning on Modern CPUs" — Denis Bakhvalov

### **62. Practice Resources**
- `exercism.org` — C track — structured exercises
- `leetcode.com` — algorithms in C
- `codeforces.com` — competitive programming
- `pwn.college` — security challenges
- `os.phil-opp.com` — OS in Rust (concepts apply to C)
- `hackthebox.com` — security challenges
- `advent of code` — yearly programming challenges
- Write your own — malloc, shell, HTTP server, compiler

### **63. Community and Staying Current**
- `lwn.net` — Linux kernel news
- `phoronix.com` — Linux performance news
- `agner.org` — CPU optimization resources
- `godbolt.org` — compiler explorer
- `cppreference.com` — C/C++ reference
- Linux kernel mailing list — read discussions
- `reddit.com/r/C_Programming`
- `stackoverflow.com` — answer questions (teach to learn)
- Open source contribution — start small

---

## **Complete Roadmap Summary**

```
Phase 0 → How computers work (1-2 weeks)
Phase 1 → C basics (2-3 months)
Phase 2 → Intermediate C (2-3 months)
Phase 3 → Systems programming (3-4 months)
Phase 4 → Low level & bitwise (2-3 months)
Phase 5 → Assembly language (2-3 months)
Phase 6 → OS & kernel (3-4 months)
Phase 7 → Design patterns (2 months)
Phase 8 → Specialization (ongoing)
Phase 9 → Mastery (never ends)

Total to solid expertise: ~2 years of consistent study
Total to mastery: 5-10 years of real world experience
```

---

## **Key Principles Throughout Journey**

- **Build things** — reading is not enough — implement everything
- **Read error messages** — they tell you exactly what's wrong
- **Use the debugger** — `gdb` should be your best friend
- **Enable warnings** — `-Wall -Wextra -Werror` always
- **Use sanitizers** — ASan, UBSan, TSan during development
- **Read great code** — Linux, Redis, SQLite, Nginx
- **Understand before memorizing** — know why, not just what
- **Teach others** — explaining forces understanding
- **Be patient** — deep understanding takes years not weeks
- **Never stop questioning** — always ask "how does this actually work"

---

At the **end of this roadmap**, you will be the person who understands not just how to write C — but **how the entire stack from transistors to applications actually works**, which is the rarest and most valuable skill in software engineering. 