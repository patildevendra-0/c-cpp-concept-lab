Here are the most important C topics for a 5-6 year experienced developer:

**Core Fundamentals (Must be rock solid)**
- Pointers — pointer arithmetic, double pointers, function pointers
- Memory management — malloc, calloc, realloc, free, memory leaks
- Arrays & strings — manipulation, buffer handling
- Structures & unions — nested structs, bit fields, memory layout
- Preprocessor directives — macros, conditional compilation, include guards

**Intermediate Level**
- Dynamic memory allocation & heap vs stack
- File I/O — fopen, fread, fwrite, fseek, binary vs text files
- Linked lists, stacks, queues (implementation from scratch)
- Recursion & its memory implications
- Typedef and enum usage
- Scope, storage classes — auto, static, extern, register

**Advanced Level (Expected at 5-6 yrs)**
- Memory layout of a C program — text, data, BSS, heap, stack segments
- Volatile, const, restrict keywords
- Multithreading with pthreads — mutex, semaphore, race conditions
- Inter-Process Communication (IPC) — pipes, shared memory, message queues
- Socket programming basics
- Inline functions & compiler optimization hints
- Endianness and byte ordering
- Debugging — gdb, valgrind, address sanitizer
- Makefile & build systems
- Linking — static vs dynamic libraries, linker scripts basics

**System-Level (Differentiates senior devs)**
- System calls — fork, exec, wait, signal handling
- Memory-mapped files (mmap)
- Cache-friendly code & performance optimization
- Undefined behavior awareness
- Embedded C concepts — if applicable (register mapping, ISR, volatile usage)

**Most asked interview topics at this level:**
- Memory leak detection & prevention
- Dangling pointers vs memory leaks vs buffer overflow
- How `static` behaves in different contexts
- Explain `const int *p` vs `int * const p` vs `int const * const p`
- Process vs thread, and synchronization
- How does `printf` work internally (variadic functions)

Focus most on **pointers, memory management, system calls, and multithreading** — these are heavily tested for senior C roles.




For **Driver Development** (5-6 years experience), here are the most important topics:

---

**Linux Kernel Basics (Foundation)**
- Kernel architecture — monolithic vs microkernel
- Kernel space vs User space
- Kernel modules — insmod, rmmod, lsmod
- Writing & loading a basic LKM (Loadable Kernel Module)
- Kernel compilation & cross compilation

---

**Device Driver Core Concepts**
- Types of drivers — Character, Block, Network drivers
- Major & Minor numbers
- Device file creation — static vs dynamic (udev)
- File operations structure — open, read, write, ioctl, release
- `register_chrdev` / `alloc_chrdev_region`
- cdev structure & operations

---

**Memory Management in Kernel**
- kmalloc, kzalloc, vmalloc — differences & when to use
- GFP flags — GFP_KERNEL, GFP_ATOMIC
- Memory barriers
- ioremap — mapping hardware registers
- DMA — coherent vs streaming DMA
- mmap in driver context

---

**Interrupt Handling**
- IRQ registration — request_irq, free_irq
- Top half vs Bottom half
- Tasklets & Workqueues
- Softirqs
- Threaded IRQs
- Interrupt sharing

---

**Synchronization & Concurrency**
- Spinlocks vs Mutex — when to use which
- Semaphores in kernel
- RCU (Read-Copy-Update)
- Atomic operations
- Race condition handling in drivers

---

**Bus & Protocol Drivers (Very Important)**
- **I2C** — i2c_driver, i2c_client, probe/remove
- **SPI** — spi_driver, spi_transfer
- **UART/Serial** — tty framework
- **USB** — usb_driver, URBs (USB Request Blocks)
- **PCIe** — pci_driver, BAR registers
- **Platform drivers** — platform_driver, device tree binding

---

**Device Tree (DTS)**
- Device tree syntax & structure
- Writing device tree nodes
- Parsing DT in driver — of_property_read_u32, of_get_named_gpio etc.
- Compatible string matching
- Device tree overlays

---

**Kernel Debugging**
- printk & log levels (KERN_INFO, KERN_ERR etc.)
- dmesg usage
- debugfs & sysfs interfaces
- KGDB — kernel debugger
- ftrace & perf
- Oops & Panic analysis — reading a kernel oops message
- addr2line, objdump for crash analysis

---

**Sysfs & Procfs**
- Creating sysfs attributes — show/store
- kobject & kset
- procfs entries — proc_create
- Exposing driver info to userspace

---

**Power Management**
- Runtime PM — rpm_suspend, rpm_resume
- System sleep states — suspend/resume callbacks
- pm_ops structure
- Wakeup sources

---

**Embedded & Hardware Specific**
- GPIO subsystem — gpio_request, gpio_direction, gpiod APIs
- Pinctrl framework
- Clock framework — clk_get, clk_enable
- Regulator framework
- Watchdog drivers
- RTC drivers

---

**Advanced Topics (Senior Level)**
- IOMMU & SMMU concepts
- Zero-copy techniques
- Polling vs Interrupt driven design
- Driver porting across kernel versions
- IOCTL design best practices
- Firmware loading — request_firmware
- Character device vs Miscdevice framework

---

**Most Asked Interview Topics**
- Difference between kmalloc vs vmalloc vs malloc
- Spinlock vs Mutex — why spinlock in interrupt context?
- How does probe() get called?
- Explain DMA and why it's needed
- What happens when you do `cat /dev/yourdevice`
- Tasklet vs Workqueue
- How to debug a kernel panic / oops
- Explain device tree compatible matching flow

---

**Focus Priority Order:**
1. Character driver + file ops
2. Interrupt handling
3. I2C / SPI / Platform driver
4. Device Tree
5. Memory (kmalloc/DMA)
6. Debugging skills
7. Synchronization








For **C++ 7-10 years Hardcore Developer**, here are the most critical topics:

---

**Modern C++ (C++11/14/17/20) — Must Master**
- Move semantics — rvalue references, `std::move`, `std::forward`
- Perfect forwarding
- Universal references
- Copy elision & RVO/NRVO
- `noexcept` — when & why
- `constexpr` & `consteval` — compile time computation
- `if constexpr` — compile time branching
- Structured bindings (C++17)
- `std::optional`, `std::variant`, `std::any`
- Ranges & Views (C++20)
- Coroutines (C++20) — co_await, co_yield, co_return
- Concepts & Constraints (C++20)
- Modules (C++20)

---

**Template Metaprogramming (TMP) — Core Skill**
- Function templates & class templates
- Template specialization — full & partial
- Variadic templates — parameter packs, fold expressions
- SFINAE — Substitution Failure Is Not An Error
- `std::enable_if`, `std::void_t`, `std::decltype`
- Type traits — `std::is_same`, `std::is_base_of`, `std::decay` etc.
- CRTP — Curiously Recurring Template Pattern
- Policy-based design
- Expression templates
- Tag dispatching
- `if constexpr` replacing SFINAE
- Concept-based constraints replacing SFINAE (C++20)

---

**Memory Management — Deep Level**
- Custom allocators — `std::allocator`, PMR (std::pmr)
- Placement new & explicit destructor calls
- Memory pools & arena allocators
- Smart pointers internals — how `shared_ptr` ref count works
- Weak pointer & cyclic reference breaking
- `std::unique_ptr` with custom deleters
- Stack vs Heap allocation strategies
- Memory alignment — `alignas`, `alignof`, `std::aligned_storage`
- Cache-friendly data structures (SoA vs AoS)
- False sharing & cache line awareness

---

**Object Oriented — Advanced**
- Virtual dispatch internals — vtable, vptr layout
- Multiple inheritance & diamond problem — virtual base classes
- Object slicing & how to prevent it
- Pure virtual functions & abstract classes
- Covariant return types
- Non-virtual interface (NVI) pattern
- Liskov Substitution in practice
- Mixin pattern using templates

---

**Design Patterns & Idioms**
- RAII — Resource Acquisition Is Initialization
- Pimpl idiom — compilation firewall
- Type erasure — `std::function`, `std::any` internals
- Rule of Zero / Three / Five
- Copy-and-swap idiom
- Named parameter idiom
- Monostate pattern
- Factory, Builder, Strategy, Observer, Command
- Singleton — thread safe implementation
- Flyweight, Proxy, Decorator

---

**Concurrency & Multithreading**
- `std::thread`, `std::jthread` (C++20)
- `std::mutex`, `std::recursive_mutex`, `std::timed_mutex`
- `std::lock_guard`, `std::unique_lock`, `std::scoped_lock`
- `std::condition_variable`
- `std::atomic` — memory order (relaxed, acquire, release, seq_cst)
- Lock-free data structures
- Thread pool implementation
- `std::future`, `std::promise`, `std::async`
- `std::packaged_task`
- Memory model — happens-before, synchronizes-with
- Data race vs race condition
- Deadlock prevention strategies

---

**STL — Deep Internals**
- Container internals — how vector, deque, map, unordered_map work
- Iterator categories & iterator traits
- Allocator-aware containers
- Custom comparators & hash functions
- Algorithm complexity guarantees
- `std::span` (C++20)
- Parallel algorithms (C++17) — execution policies
- `std::string_view` — when to use vs std::string

---

**Performance & Optimization**
- Profiling — perf, gprof, Valgrind, VTune
- Compiler optimizations — O0/O1/O2/O3/Os
- Inlining — `__attribute__((always_inline))`, LTO
- Branch prediction hints — `[[likely]]`, `[[unlikely]]`
- SIMD intrinsics — SSE, AVX basics
- Zero-cost abstractions verification
- Benchmarking with Google Benchmark
- Avoiding unnecessary copies — move, ref, string_view
- Hot/cold path separation
- Data-oriented design (DOD)

---

**Exception Handling — Advanced**
- Exception safety guarantees — basic, strong, nothrow
- Writing exception-safe code
- `noexcept` impact on performance & move semantics
- Exception handling internals — stack unwinding
- When NOT to use exceptions — embedded/real-time systems

---

**Compile-time Programming**
- `constexpr` functions & constructors
- `consteval` — guaranteed compile time
- `constinit` (C++20)
- Static assertions — `static_assert`
- Compile-time sorting, searching, hashing
- `std::integral_constant`, `std::type_list` patterns

---

**Build Systems & Tooling**
- CMake — modern CMake (target-based)
- Conan / vcpkg — package managers
- Sanitizers — AddressSanitizer, ThreadSanitizer, UBSanitizer
- Static analysis — clang-tidy, cppcheck, PVS-Studio
- Clang compiler internals basics
- Precompiled headers & unity builds
- Link Time Optimization (LTO)

---

**Low Level & Systems Programming**
- ABI — Application Binary Interface
- Name mangling — extern "C"
- Calling conventions — cdecl, stdcall, fastcall
- Stack frame layout
- Inline assembly basics
- Undefined behavior — deep understanding
- Strict aliasing rule
- Bit manipulation & bitfields
- Endianness handling
- `volatile` in C++ vs C

---

**Advanced C++ Patterns (Differentiates 10yr devs)**
- Monadic operations on `std::optional` (C++23)
- Metaclasses concept (future C++)
- Reflection (upcoming)
- Static polymorphism vs dynamic polymorphism tradeoffs
- `std::execution` framework (C++26 direction)
- Heterogeneous lookup in associative containers
- Small buffer optimization (SBO) — how `std::string` uses it
- Type-safe state machines using `std::variant`
- Compile-time FSM (Finite State Machine)

---

**Most Asked Interview Topics at This Level**
- Explain move semantics & when copy elision happens
- How does `shared_ptr` work internally?
- SFINAE vs Concepts — which to prefer and why?
- Explain memory order in atomics
- How does vtable work in multiple inheritance?
- Write a thread-safe singleton
- Implement `std::unique_ptr` from scratch
- What is type erasure — implement a simple `std::function`
- Explain Rule of Five with a real example
- Lock-free queue implementation
- What is undefined behavior — give 5 examples

---

**Focus Priority Order:**
1. Move semantics & value categories
2. Template metaprogramming & SFINAE/Concepts
3. Memory model & concurrency
4. STL internals
5. Design patterns & idioms
6. Performance optimization
7. Modern C++17/20 features
8. Compile-time programming

---

At 7-10 years level, **you should not just know these topics — you should know WHY they work internally, their tradeoffs, and when NOT to use them.** That's what separates a senior from a principal/staff engineer.




Here are the **deep, unique, and commonly missed C++ topics** that most developers overlook even at senior level:

---

## **Value Categories — Deep Dive**
- lvalue, rvalue, xvalue, glvalue, prvalue — all 5 categories
- Why xvalue exists — "expiring value"
- `std::move` doesn't move — it just casts to xvalue
- `std::forward` — what it actually does internally
- Reference collapsing rules — `T& &` → `T&`, `T&& &` → `T&`
- Forwarding reference vs rvalue reference — subtle difference
- Implicit move in return statements (C++20 relaxed rules)
- Guaranteed copy elision (C++17) — prvalue never materializes
- Temporary materialization conversion — when & why

---

## **Object Lifetime — Deeply Misunderstood**
- Lifetime of temporaries — when exactly destroyed
- Lifetime extension via const reference binding
- Lifetime extension pitfalls — structured bindings, range-for
- Dangling reference from lifetime extension gone wrong
- Placement new — object lifetime without allocation
- `std::launder` — what it does & when needed
- Explicit destructor call — `p->~T()`
- Trivially destructible types — why matters for performance
- Reusing storage — when is it legal?
- Union — active member rules & undefined behavior
- `std::start_lifetime_as` (C++23) — type punning safely

---

## **Memory Model — Most Missed Topic**
- Sequential consistency vs relaxed memory model
- `std::memory_order_relaxed` — only atomicity, no ordering
- `std::memory_order_acquire` / `release` — synchronization pair
- `std::memory_order_acq_rel` — for RMW operations
- `std::memory_order_seq_cst` — default but expensive
- `std::memory_order_consume` — deprecated in practice, why?
- Happens-before relationship — formal definition
- Synchronizes-with relationship
- Release sequence — chains of RMW operations
- Data race — formal definition in C++ standard
- Benign data race — myth or reality?
- Fences — `std::atomic_thread_fence` vs atomic operations
- `std::atomic_signal_fence` — signal handler synchronization
- Out-of-thin-air values (OOTA) problem — theoretical issue

---

## **Undefined Behavior — Deep & Unique**
- Signed integer overflow — UB, compiler exploits this
- Null pointer dereference — not always a crash!
- Strict aliasing violation — the most dangerous silent UB
- Type punning via union — UB in C++, defined in C
- `reinterpret_cast` aliasing rules
- Out of bounds pointer arithmetic — even without dereference
- Modifying a const object — via const_cast
- Accessing inactive union member
- Unsequenced modifications — `i = i++`
- Infinite loop without side effects — compiler can remove it!
- Calling virtual function in constructor/destructor
- Using object after `std::move` — valid but unspecified state
- `memcpy` on non-trivially copyable types — UB
- Integer to pointer cast — implementation defined
- `setjmp/longjmp` with C++ objects — destructor not called
- Compiler exploits UB for optimization — examples from GCC/Clang

---

## **Template Metaprogramming — Rarely Known**
- Two-phase name lookup — dependent vs non-dependent names
- `typename` and `template` keywords in dependent contexts
- ADL (Argument Dependent Lookup) — detailed rules
- ADL hijacking — how it can break your code
- Koenig lookup in operator overloading
- Template template parameters — `template<template<typename> class>`
- Deduction guides (C++17) — CTAD customization
- Abbreviated function templates (C++20) — `auto` parameters
- `std::type_identity` — preventing deduction
- Lazy template instantiation — only instantiated when used
- Explicit instantiation — `template class MyClass<int>`
- Extern template — preventing instantiation in TU
- Template friends — tricky syntax
- Injected class name — `MyClass` inside `MyClass<T>`
- Dependent base class lookup — why `this->` needed
- Pack indexing (C++26)
- Recursive variadic template vs fold expression performance
- `__type_pack_element` — compiler intrinsic for pack indexing

---

## **SFINAE — Rarely Mastered**
- SFINAE only applies in immediate context
- Hard error vs SFINAE-friendly error
- `std::void_t` — detection idiom
- Detection idiom — `is_detected`, `detected_t`
- `std::experimental::is_detected` pattern
- Overload resolution ranking — exact match, promotion, conversion
- Tie-breaking in overload resolution — most specialized template
- Why `std::enable_if` in return type vs template param vs default arg
- Overload resolution with variadic templates
- SFINAE with constructors — tricky cases

---

## **Concepts — Deep (C++20)**
- Concept subsumption — more constrained wins overload
- Partial ordering of constraints
- Atomic constraints — how equivalence checked
- Requires expressions vs requires clauses — difference
- Nested requires
- `auto` in concept definitions
- Concept-based overloading replacing tag dispatch
- Abbreviated templates with concepts
- `std::same_as<T, U>` vs `std::is_same_v<T, U>` — subtle difference
- Concept satisfaction vs concept modeling

---

## **Coroutines — Deep (C++20, Mostly Missed)**
- Coroutine frame — heap allocation by compiler
- Promise type — customization point
- Awaitable & Awaiter — concepts
- `operator co_await` — customization
- Symmetric transfer — tail call optimization in coroutines
- Coroutine Handle — `std::coroutine_handle<>`
- `std::suspend_always` vs `std::suspend_never`
- Heap elision optimization (HALO)
- Coroutine destroys itself — final suspend
- Writing a custom generator from scratch
- Writing a custom task/future from scratch
- Coroutine + thread pool integration
- Stack overflow impossibility in coroutines — why

---

## **Type Erasure — Deep Patterns**
- `std::function` — typical SBO + vtable implementation
- Implementing `std::function` from scratch
- `std::any` internals — SBO + type info
- Manual vtable type erasure — no virtual keyword
- `dyno` library pattern — runtime concepts
- Concept-based polymorphism (Sean Parent style)
- Nonowning type erasure — `std::function_ref` (C++26)
- Fat pointer type erasure
- Type erased allocator pattern

---

## **ABI — Critical for Library Authors**
- What breaks ABI — adding virtual, changing layout, reordering members
- Itanium C++ ABI — the standard for Linux
- MSVC ABI differences
- Name mangling rules — demangling with `c++filt`
- Stable ABI techniques — pimpl, abstract interface, versioned inline namespaces
- `[[nodiscard]]`, `[[deprecated]]` — ABI safe additions
- Inline namespaces for ABI versioning
- Opaque pointer pattern
- ABI compatibility checkers — libabigail, abi-compliance-checker
- `extern "C"` — disables name mangling, C linkage rules

---

## **Linker & Compilation — Missed by Most**
- ODR — One Definition Rule — exact meaning
- ODR violation — silent UB, not always caught
- Inline functions & ODR — why inline required in headers
- `inline` keyword — doesn't mean inlining, means ODR exemption
- Internal vs external linkage — `static`, anonymous namespace
- Weak symbols — `__attribute__((weak))`
- COMDAT — how linker deduplicates template instantiations
- Two-phase linking
- Static initialization order fiasco (SIOF)
- SIOF solution — construct on first use idiom
- Dynamic initialization order across TUs — unspecified
- `constinit` (C++20) — prevents dynamic initialization
- Dead code elimination — linker vs compiler level
- Whole program optimization / LTO internals
- Symbol visibility — `__attribute__((visibility("hidden")))`
- `-fvisibility=hidden` — default hidden, explicit export

---

## **Allocators — Deep Level**
- `std::allocator_traits` — allocator customization point
- Stateful allocators — how containers propagate them
- `POCCA`, `POCMA`, `POCS` — propagation traits
- `std::pmr::memory_resource` — polymorphic allocators
- `std::pmr::monotonic_buffer_resource` — bump allocator
- `std::pmr::unsynchronized_pool_resource`
- `std::pmr::synchronized_pool_resource`
- Writing custom memory resource from scratch
- Allocator awareness in custom containers
- Small object optimization in allocators
- Fancy pointers — non raw pointer in allocators

---

## **Containers — Internal Implementation**
- `std::vector` — growth factor, reallocation, iterator invalidation rules exactly
- `std::deque` — chunk-based, why random access O(1) but slower than vector
- `std::list` — cache unfriendly, when actually useful
- `std::map` vs `std::unordered_map` — red-black tree vs hash table internals
- Hash collision handling — chaining vs open addressing (unordered_map uses chaining)
- `std::unordered_map` — bucket, load factor, rehashing
- Heterogeneous lookup — `find` with different type (C++14)
- Node handles (C++17) — extract & insert without reallocation
- `std::flat_map` (C++23) — sorted vector based map
- `std::flat_set` (C++23)
- Small vector optimization — common in LLVM (llvm::SmallVector)
- `std::inplace_vector` (C++26)

---

## **Exceptions — Internals**
- Zero-cost exception model — table-based unwinding
- `_Unwind_RaiseException` — under the hood
- LSDA — Language Specific Data Area
- Why exceptions are "zero cost" when not thrown
- Exception handling in destructors — `std::terminate` rules
- `std::uncaught_exceptions()` — plural, C++17
- Exception neutral code vs exception safe code
- Rethrowing — `throw;` vs `throw e;` — slicing issue
- `std::exception_ptr` — transporting exceptions across threads
- `std::current_exception`, `std::rethrow_exception`
- Exceptions in constructors — destructor not called, members are

---

## **Initialization — Deeply Confusing**
- Default init vs value init vs zero init vs direct init vs copy init
- `T x;` vs `T x{};` vs `T x = T();` — all different
- Most vexing parse — `T x(T())` — function declaration
- Aggregate initialization rules — changed every standard
- Designated initializers (C++20)
- `std::initializer_list` — copies elements, not references
- `initializer_list` lifetime — backing array lifetime
- Narrowing conversions in braced init — compile error
- `explicit` on constructors — prevents implicit conversion
- `explicit(bool)` (C++20) — conditional explicit

---

## **Operator Overloading — Tricky Parts**
- `operator<=>` spaceship operator (C++20)
- Partial vs weak vs strong ordering
- Compiler auto-generates `==` and `<` from `<=>`
- `operator[]` with multiple arguments (C++23)
- `operator()` — function call, stateful functors
- Hidden friend idiom — why better than member or free function
- `operator,` overloading — almost always a bad idea
- `operator&&` and `operator||` — lose short circuit when overloaded
- Conversion operators — `operator bool()` pitfalls
- `explicit` conversion operators
- `operator new` / `operator delete` — class specific & global overloading
- Placement new operator signature

---

## **Ranges & Views (C++20) — Missed Details**
- Lazy evaluation — views don't compute until iterated
- Range adaptors — composing with `|`
- `std::views::transform`, `filter`, `take`, `drop`, `join`, `zip`
- Dangling iterators from ranges — `std::ranges::dangling`
- `borrowed_range` concept
- Range vs View vs Viewable range — differences
- `std::ranges::to` (C++23) — materializing views
- Sentinel types — end doesn't have to be same type as begin
- Infinite ranges — `std::views::iota`
- `std::views::zip` (C++23)
- `std::views::enumerate` (C++23)
- Writing custom range adaptor from scratch

---

## **Formatting & I/O (C++20/23)**
- `std::format` — type safe printf replacement
- Custom formatter — `template<> struct std::formatter<T>`
- `std::print` / `std::println` (C++23)
- Compile time format string checking
- `std::format_to` — output iterator version
- Performance of `std::format` vs `printf` vs `std::cout`

---

## **Compile-time Programming — Rarely Explored**
- `constexpr` virtual functions (C++20)
- `constexpr` dynamic allocation (C++20) — new/delete in constexpr
- `constexpr` `std::vector`, `std::string` (C++20)
- `constexpr` try/catch (C++20)
- `std::is_constant_evaluated()` — branch at compile vs runtime
- Compile-time hash maps & lookup tables
- Compile-time string processing
- `constexpr` sorting algorithms
- `std::bit_cast` (C++20) — safe type punning, constexpr friendly
- `__builtin_constant_p` — GCC extension

---

## **Reflection & Introspection (Upcoming but important)**
- Static reflection (C++26 proposal)
- `^T` — reflection operator syntax proposal
- `std::meta` namespace
- Compile-time code generation
- Current workarounds — Boost.Hana, magic_get, pfr

---

## **Compiler Internals — Separates Principal Engineers**
- Phases of translation — 9 phases in standard
- How templates are compiled — two-phase lookup detail
- How vtable is laid out in memory — exactly
- Empty base optimization (EBO) — `[[no_unique_address]]` (C++20)
- Return value optimization — mandatory vs optional
- Devirtualization — compiler proving virtual call is monomorphic
- Constant folding & constant propagation
- Alias analysis — why strict aliasing matters for optimizer
- Profile Guided Optimization (PGO)
- Feedback Directed Optimization (FDO)
- Link Time Optimization (LTO) / Whole Program Optimization
- `__builtin_expect` — branch prediction hint
- `__builtin_unreachable` — tells compiler path never reached
- `[[assume(expr)]]` (C++23) — standard version of unreachable hint

---

## **Hidden & Surprising Language Rules**
- `static` local variable initialization — thread safe since C++11
- `thread_local` storage class — one per thread, lazy init
- Comma operator — sequencing & value
- Conditional operator — value category rules
- Ternary with different types — common type rules
- `decltype(auto)` vs `auto` — preserving references
- `decltype((x))` vs `decltype(x)` — extra parens = lvalue ref
- `auto` type deduction vs template type deduction — almost same, few diffs
- `auto` drops top-level cv-qualifiers and references
- Structured bindings — not always variables, binding to members
- Pointer to member — `T::*` syntax and usage
- Pointer to member function — calling via `.*` and `->*`
- `mutable` on lambda — allows modifying captured by value
- Lambda in unevaluated context (C++20) — `decltype(lambda)`
- Stateless lambda to function pointer conversion
- Generic lambda — `auto` param = abbreviated template
- Lambda IIFE pattern — immediately invoked

---

## **Design & Architecture Level**
- Policy-based design (Andrei Alexandrescu style)
- `std::tuple` based compile time dispatch
- Overloaded lambda visitor pattern for `std::variant`
- Static dispatch table — array of function pointers
- Type lists & type maps at compile time
- Compile time state machines
- Expression templates — lazy evaluation for math libraries
- Curiously Recurring Template Pattern (CRTP) — deep usage
- Barton-Nackman trick
- Mixin classes with CRTP
- Non-Virtual Interface (NVI) — why it's better
- Semantic compression — data-oriented design thinking

---

## **Security & Safety**
- Integer overflow sanitizer — `-fsanitize=integer`
- Stack protector — `-fstack-protector-strong`
- ASLR interaction with C++ code
- Format string vulnerabilities — printf with user data
- `std::span` — bounds-safe pointer + length
- `std::mdspan` (C++23) — multidimensional span
- Safe integer libraries — preventing overflow
- `-D_FORTIFY_SOURCE=2` — glibc hardening

---

## **Rarely Asked But Impressive Interview Topics**
- What is `std::launder` and when is it needed?
- Explain guaranteed copy elision vs NRVO
- What are the 5 value categories?
- Explain memory order consume and why it's broken in practice
- What is ODR violation and why is it UB?
- How does `std::function` implement type erasure internally?
- What is the static initialization order fiasco and how to fix it?
- Explain reference collapsing rules
- What does `inline` actually mean in C++?
- How does zero-cost exception handling work?
- What is `std::start_lifetime_as` and why was it added?
- What is COMDAT and how does linker use it?
- Explain POCCA POCMA POCS in allocators
- What is empty base optimization?
- Explain `[[no_unique_address]]`

---

At **7-10 year level**, knowing these separates you from someone who just **uses C++** vs someone who **understands C++ deeply** and can make **correct architectural decisions**, write **zero-UB code**, and **mentor others** on subtle traps.



Here are the **deep, unique, and commonly missed C topics** that most developers overlook even at senior level:

---

## **Undefined Behavior — Deep & Dangerous**
- Signed integer overflow — UB, compiler assumes it never happens
- Unsigned integer overflow — well defined (wraps modulo 2^n)
- Pointer overflow — even arithmetic past one-past-end is UB
- Strict aliasing violation — most dangerous silent UB in C
- `*(int*)float_ptr` — classic strict aliasing violation
- `-fno-strict-aliasing` — disabling for safety
- `char*` and `unsigned char*` — only types that can alias anything
- Accessing trap representation — UB on some platforms
- Unsequenced side effects — `a[i] = i++` — UB
- Reading uninitialized variable — UB, not just garbage value
- Calling function through wrong type pointer — UB
- Modifying string literal — UB (stored in read-only section)
- Out of bounds array access — UB even if memory is mapped
- Shift by negative or >= width — UB
- Division by zero — UB for integers
- `memcpy` with overlapping regions — use `memmove`
- Dereferencing NULL — UB, not guaranteed crash
- Infinite loop without side effects — compiler can delete it
- Compiler exploits UB — real examples from GCC/Clang optimization

---

## **Strict Aliasing — Most Missed**
- What strict aliasing rule exactly says (C11 §6.5)
- Effective type — how compiler tracks type of memory
- Why `*(int*)&f` is UB for float-to-int punning
- Legal type punning — only via `memcpy` or `unsigned char*`
- `union` type punning — defined in C, UB in C++
- `__attribute__((may_alias))` — GCC extension
- How TBAA (Type Based Alias Analysis) uses strict aliasing
- Real world bugs caused by strict aliasing violation
- Why Linux kernel uses `-fno-strict-aliasing`

---

## **Pointer Arithmetic & Representation**
- Pointer is not an integer — even same size
- `uintptr_t` vs `intptr_t` — round trip cast guarantee
- `ptrdiff_t` — signed difference of pointers
- Pointer comparison — only valid within same array/object
- One-past-end pointer — valid to create, not to dereference
- Fat pointers concept — bounds checking extensions
- Pointer provenance — formal model, why matters
- `__UINTPTR_MAX__` and pointer size assumptions
- Function pointer size — may differ from data pointer
- `void*` — generic pointer, cannot do arithmetic (C standard)
- GCC extension — `void*` arithmetic treats void as size 1
- Near/far pointers — segmented memory model (8086)
- Pointer to array vs pointer to first element — difference

---

## **Integer Types — Deep**
- `int` is not always 32 bits — only guaranteed >= 16 bits
- `char` signedness — implementation defined
- `signed char` vs `unsigned char` vs `char` — 3 distinct types
- Integer promotions — `char` and `short` promoted to `int` in expressions
- Usual arithmetic conversions — implicit type balancing rules
- Integer rank — ordering of integer types
- `_Bool` — 0 or 1 only, assigning 2 gives 1
- Bit fields — signedness of plain `int` bitfield is implementation defined
- Bit field of width 0 — forces next field to new storage unit
- `long` is not always 64 bits — depends on platform/ABI
- LP64 vs LLP64 vs ILP32 — data models
- `intmax_t` — largest signed integer type
- `__int128` — GCC extension, not standard
- Fixed width types — `int32_t` may not exist on all platforms
- `int_fast32_t`, `int_least32_t` — often ignored but important

---

## **C Memory Model — Deep**
- Object — region of storage, has address, size, type
- Effective type rules — how type of allocated memory determined
- `malloc` returns memory with no effective type — set by first write
- `calloc` — zero initialized, but is zero a valid representation for all types?
- `realloc` pitfalls — old pointer invalidated even on failure? No — only on success
- `realloc(ptr, 0)` — implementation defined (free or unique pointer)
- `free(NULL)` — defined, does nothing
- Double free — UB
- Use after free — UB, not just garbage
- Memory ownership — C has no built-in concept
- Flexible array member — `struct { int n; char data[]; }`
- Flexible array member rules — must be last, struct must have other members
- Allocating flexible array member correctly
- `alloca` — stack allocation, not standard, dangerous with large sizes
- VLA (Variable Length Array) — optional in C11, mandatory in C99
- VLA and stack overflow — no protection
- VLA lifetime — destroyed at end of block

---

## **Sequence Points & Evaluation Order**
- Sequence point — what it means formally
- Between sequence points — cannot read & modify same object twice
- C11 replaced sequence points with sequenced-before relation
- Sequenced-before, sequenced-after, unsequenced, indeterminately sequenced
- `f(a++, a++)` — UB, arguments unsequenced
- `a[i] = i++` — UB
- `i++ + i++` — UB
- Short circuit evaluation — `&&` and `||` are sequence points
- Comma operator — sequence point, left evaluated first
- Function call — sequence point before and after
- Order of evaluation of function arguments — unspecified (not UB)

---

## **Preprocessor — Deep & Tricky**
- Macro expansion order — rescan rules
- Self-referential macros — not expanded recursively
- Operator precedence in macros — always parenthesize
- Variadic macros — `__VA_ARGS__`, `__VA_OPT__` (C23)
- `#` stringification operator — converts token to string
- `##` token pasting — joining tokens
- Token pasting with empty argument — undefined behavior
- X-macro pattern — table driven code generation
- Computed includes — `#include MACRO`
- `_Pragma` operator — pragma in macro context
- Predefined macros — `__FILE__`, `__LINE__`, `__func__`, `__DATE__`, `__TIME__`, `__STDC_VERSION__`
- `__COUNTER__` — GCC extension, unique integer per expansion
- Include guard vs `#pragma once` — portability tradeoff
- Macro pitfalls — double evaluation, `MAX(x++, y++)`
- Function-like macro vs inline function — when to use which
- Stringification of macro argument — `#arg` before expansion

---

## **C Type System — Hidden Rules**
- Incomplete types — `struct T;` forward declaration
- Using incomplete type — only via pointer
- Completing incomplete type — definition later in TU
- Compatible types — across translation units
- Composite type — merging compatible types
- Lvalue vs rvalue in C — simpler than C++ but still matters
- Lvalue conversion — array to pointer decay, function to pointer decay
- `const` is shallow — `const int **` vs `int const **` confusion
- `restrict` keyword — pointer aliasing promise to compiler
- `restrict` and aliasing — allows aggressive optimization
- `restrict` UB — violating restrict promise
- Qualified and unqualified versions of types
- `_Atomic` types (C11) — atomic without explicit functions
- `_Atomic` and struct — entire struct becomes atomic
- `_Bool` conversions — any nonzero becomes 1
- Complex types — `_Complex`, `_Imaginary` (optional)

---

## **Structures & Padding — Deep**
- Padding — compiler inserts for alignment
- Why padding exists — hardware alignment requirements
- `sizeof(struct)` — includes padding
- Trailing padding — for array element alignment
- `#pragma pack` — remove padding, portability issues
- `__attribute__((packed))` — GCC, unaligned access UB risk
- Reading packed struct members — generates slow unaligned code
- Bit fields layout — implementation defined
- Bit fields across storage units — implementation defined
- Unnamed bit fields — for padding
- Bit field of type `_Bool`
- `offsetof` macro — cannot be used with bit fields
- Structure layout rules — members in order, no reordering
- Flexible array member interaction with sizeof
- Designated initializers — `{.x = 1, .y = 2}` — C99
- Compound literals — `(struct Point){1, 2}` — C99

---

## **Function Pointers & Calling Conventions**
- Function pointer syntax — `int (*fp)(int, int)`
- Typedef for function pointer — cleaner syntax
- Calling through function pointer — same as direct call
- Function pointer arrays — dispatch tables
- `qsort` and `bsearch` — using function pointers
- Callback pattern in C
- Signal handler restrictions — async-signal-safe functions only
- `signal` vs `sigaction` — sigaction is better, why
- Variadic functions — `va_list`, `va_start`, `va_arg`, `va_end`, `va_copy`
- Type of variadic argument — default argument promotions apply
- `vprintf`, `vfprintf`, `vsprintf`, `vsnprintf` — variadic wrappers
- Calling convention — cdecl, stdcall (Windows), differences
- No prototype vs prototype — different calling convention assumptions
- Old-style function definition — `f(a, b) int a; int b; {}`
- `void f()` vs `void f(void)` — different in C, same in C++

---

## **Linkage & Storage Classes — Misunderstood**
- Internal linkage — `static` at file scope
- External linkage — default for global functions & variables
- No linkage — local variables
- Tentative definition — `int x;` at file scope, multiple allowed
- Multiple tentative definitions — merged into one
- `extern` on variable — declaration not definition
- `extern` on function — redundant but valid
- `static` at block scope — static duration, no linkage
- `register` — hint only, cannot take address
- `auto` — default for local variables, rarely used explicitly
- `inline` function in C99 — different semantics from C++
- `inline` in C99 — must provide external definition somewhere
- `static inline` — common idiom for header functions
- `extern inline` — provides external definition for inline
- `_Thread_local` (C11) — thread local storage

---

## **Signals & Async Safety**
- Async-signal-safe functions — only these safe in signal handlers
- `volatile sig_atomic_t` — only safe type to read/write in handler
- Signal handler and `longjmp` — UB if modifies non-volatile locals
- `SIGFPE` from integer division — behavior depends on platform
- `SIGSEGV` — handler cannot safely return (UB on some platforms)
- Real-time signals — `SIGRTMIN` to `SIGRTMAX`
- `sigprocmask` vs `pthread_sigmask`
- Signal disposition inheritance across `fork`
- Signal mask inheritance across `exec`

---

## **setjmp / longjmp — Deep**
- `setjmp` saves execution context — registers, stack pointer
- `longjmp` restores context — unwinds stack without destructors
- Variables between setjmp and longjmp — `volatile` required to be stable
- Non-volatile locals — indeterminate after longjmp
- `longjmp` out of signal handler — implementation defined
- Cannot longjmp into a function — only back up call stack
- Use cases — error handling before exceptions existed
- Why dangerous — no cleanup, resource leaks

---

## **Volatile — Deeply Misunderstood**
- `volatile` is not for thread safety
- `volatile` prevents optimization of reads/writes
- Every access to volatile is observable side effect
- Ordering of volatile accesses — only relative to other volatiles
- `volatile` and hardware registers — correct use case
- `volatile` in signal handlers — correct use case
- `volatile` and `setjmp` — correct use case
- `volatile` does not imply atomic
- `volatile` does not prevent reordering with non-volatile
- `volatile` struct — all members become volatile
- `const volatile` — readable but not writable by software (MMIO)
- Platform specific — `volatile` semantics vary on embedded

---

## **IO & Streams — Rarely Deep Dived**
- `FILE*` internals — buffered I/O, buffer modes
- `setvbuf` — `_IOFBF` full, `_IOLBF` line, `_IONBF` no buffering
- `fflush(NULL)` — flushes all output streams
- `fflush` on input stream — UB in C, defined behavior on some platforms
- `feof` — only true after failed read, not predictive
- `ferror` vs `feof` — both needed to check after read failure
- `clearerr` — resets error and EOF flags
- `ungetc` — push back one character guarantee
- Text mode vs binary mode — `\r\n` translation on Windows
- `ftell` / `fseek` — may fail for streams, only reliable for binary files
- `fgetpos` / `fsetpos` — more reliable than ftell/fseek
- `tmpfile` — creates temp file, auto deleted on close
- `tmpnam` — race condition, prefer `mkstemp`
- POSIX `fileno` — get file descriptor from FILE*
- Mixing `read`/`write` with `fread`/`fwrite` — buffering issues

---

## **C11 / C17 / C23 — Missed Features**
- `_Static_assert` — compile time assertion (C11)
- `_Noreturn` / `[[noreturn]]` (C23) — function never returns
- `_Generic` — type-based dispatch at compile time (C11)
- `_Generic` for type-safe macros
- `_Alignas` / `_Alignof` (C11) — alignment control
- `_Atomic` (C11) — atomic types
- Atomic operations — `atomic_load`, `atomic_store`, `atomic_fetch_add`
- `atomic_compare_exchange_strong` vs `atomic_compare_exchange_weak`
- `memory_order` in C11 atomics
- Threads — `thrd_t`, `mtx_t`, `cnd_t` (C11 optional)
- `quick_exit` and `at_quick_exit` — C11
- Anonymous structs and unions (C11)
- `gets` removed in C11 — use `fgets`
- Bounds checking interfaces — `scanf_s`, `fopen_s` (Annex K, optional)
- `__STDC_LIB_EXT1__` — checking bounds checking availability
- `nullptr` keyword (C23)
- `true` / `false` as keywords (C23)
- `typeof` operator (C23)
- `auto` type inference (C23)
- `#embed` directive (C23) — embed binary data at compile time
- `#elifdef` / `#elifndef` (C23)

---

## **Compilation Pipeline — Deep**
- 9 translation phases — preprocessing through linking
- Translation unit — single `.c` file after preprocessing
- Separate compilation model — each TU compiled independently
- Compilation vs linking — what each does
- Object file format — ELF sections: `.text`, `.data`, `.bss`, `.rodata`
- `.bss` — zero initialized data, takes no space in file
- `.rodata` — string literals, const globals
- Symbol table — defined and undefined symbols
- Relocation entries — patched at link time
- Weak symbols — `__attribute__((weak))` — overridable defaults
- `nm` — list symbols in object file
- `objdump -d` — disassemble
- `readelf` — inspect ELF file
- `addr2line` — convert address to source line
- `ldd` — list dynamic dependencies
- `LD_PRELOAD` — inject shared library
- Interpositioning — replacing standard library functions

---

## **Linker Scripts & Memory Layout**
- Default linker script — controls memory layout
- Custom linker script — embedded systems
- SECTIONS command — placing sections
- MEMORY command — defining memory regions
- VMA vs LMA — virtual vs load address
- Startup code — `_start`, `crt0.o`
- `main` is not the first function called
- CRT (C Runtime) initialization — `__libc_start_main`
- `.init_array` / `.fini_array` — constructors/destructors for C
- `__attribute__((constructor))` / `__attribute__((destructor))`
- Priority of constructors — `__attribute__((constructor(101)))`

---

## **GCC/Clang Extensions — Commonly Used**
- `__attribute__((packed))` — remove padding
- `__attribute__((aligned(n)))` — force alignment
- `__attribute__((noinline))` — prevent inlining
- `__attribute__((always_inline))` — force inlining
- `__attribute__((noreturn))` — function never returns
- `__attribute__((format(printf, n, m)))` — format string checking
- `__attribute__((unused))` — suppress unused warning
- `__attribute__((deprecated))` — warn on use
- `__attribute__((visibility("hidden")))` — symbol visibility
- `__attribute__((section("name")))` — place in specific section
- `__attribute__((cold))` / `__attribute__((hot))` — branch hints
- `__builtin_expect(expr, val)` — branch prediction hint
- `__builtin_unreachable()` — tell compiler path unreachable
- `__builtin_offsetof` — offsetof implementation
- `__builtin_types_compatible_p` — type comparison
- `__builtin_choose_expr` — compile time selection
- `typeof` / `__typeof__` — get type of expression
- Statement expressions — `({ int x = 1; x + 1; })` — GCC
- Computed gotos — `void *label = &&myLabel; goto *label;`
- `__auto_type` — type inference before C23

---

## **Concurrency in C (C11 Atomics Deep)**
- Lock free programming — ABA problem
- ABA problem — compare-exchange succeeds incorrectly
- Solving ABA — tagged pointers, double-width CAS
- `atomic_compare_exchange_weak` in loop — spurious failure
- `atomic_compare_exchange_strong` — no spurious failure
- Memory order for CAS — success vs failure order
- `atomic_thread_fence` vs atomic operation with order
- `atomic_signal_fence` — only prevents compiler reorder
- Lock free stack implementation
- Lock free queue — Michael-Scott queue
- Progress guarantees — wait-free > lock-free > obstruction-free
- `ATOMIC_LOCK_FREE` macros — checking if type is lock free

---

## **Embedded C — Unique Topics**
- MMIO — Memory Mapped IO registers
- `volatile uint32_t*` for register access
- `const volatile` — write-only registers
- Bit manipulation for register fields — masking, setting, clearing
- Bitfield vs bitmask — portability tradeoffs
- Startup code — zero BSS, copy data section
- Stack pointer initialization
- ISR (Interrupt Service Routine) — `__attribute__((interrupt))`
- ISR constraints — no floating point if FPU state not saved
- Reentrancy — ISR and main sharing data
- Critical sections — disable/enable interrupts
- Linker script for embedded — flash, RAM regions
- Bootloader concepts — jump to application
- `volatile` for ISR-shared variables
- Watchdog timer interaction with loops
- Memory map of microcontroller
- Harvard vs Von Neumann architecture impact on C

---

## **Security in C — Critical**
- Buffer overflow — classic stack smashing
- Stack canary — `__stack_chk_fail`
- `gets` — never use, removed in C11
- `strcpy` — unsafe, use `strncpy` or `strlcpy`
- `sprintf` — unsafe, use `snprintf`
- Format string attack — `printf(user_input)` — never do this
- Integer overflow leading to buffer overflow
- Off-by-one errors — `<=` vs `<` in loops
- `strncpy` not null terminating — if src >= n
- `strlcpy` — BSD extension, always null terminates
- Heap overflow — overflowing heap allocation
- Use after free exploitation
- Double free exploitation
- ASLR — Address Space Layout Randomization
- PIE — Position Independent Executable
- Stack executable protection — NX bit
- RELRO — Relocation Read-Only
- Fortify source — `_FORTIFY_SOURCE=2`
- SafeStack — Clang extension

---

## **Debugging & Analysis — Deep**
- GDB — `watch`, `rwatch`, `awatch` — data watchpoints
- GDB — `catch syscall` — break on system call
- GDB — `set follow-fork-mode child`
- GDB — `info proc mappings` — memory map
- Core dump analysis — `gdb binary core`
- Valgrind — `--track-origins=yes` — find uninitialized use
- Valgrind — `--leak-check=full --show-leak-kinds=all`
- AddressSanitizer — stack/heap/global overflow detection
- UBSanitizer — undefined behavior detection
- ThreadSanitizer — data race detection
- MemorySanitizer — uninitialized read detection
- `mtrace` — malloc tracing
- `strace` — system call tracing
- `ltrace` — library call tracing
- `/proc/PID/maps` — memory mapping
- `/proc/PID/smaps` — detailed memory info
- `electric fence` — malloc debugging library
- `dmalloc` — debug malloc library

---

## **Rarely Asked But Impressive Interview Topics**
- What is effective type and why does it matter?
- Explain strict aliasing with a real example
- What is the difference between `void f()` and `void f(void)` in C?
- What is a tentative definition?
- Explain integer promotions and usual arithmetic conversions
- What is the difference between `int` bitfield and `unsigned int` bitfield?
- Why is `char` signedness implementation defined?
- What does `restrict` do and what UB does it enable?
- Explain `_Generic` with an example
- What is a flexible array member and how to allocate it?
- What is `volatile sig_atomic_t` and why needed?
- Why is `realloc(ptr, 0)` dangerous?
- Explain pointer provenance
- What is `std::launder` equivalent in C? (`memcpy` for type punning)
- What are sequence points and what replaced them in C11?
- Explain the ABA problem in lock-free programming
- What is `.bss` section and why doesn't it take space in binary?
- How does `_Generic` enable type-safe macros?
- What is `__builtin_unreachable` and how does compiler use it?
- Explain computed goto and a use case

---

At **senior C level**, the difference is not knowing syntax — it's understanding **why the language behaves the way it does**, knowing **exactly what is UB and why**, writing **correct concurrent code**, and being able to **reason about what the compiler does** with your code.


Here are the **deepest, most rarely known C topics** that even senior developers miss:

---

## **Pointer Provenance — Formal Model**

- Pointer provenance — every pointer has an "origin" object
- Two pointers with same address but different provenance — not interchangeable
- PNVI model — Provenance Not Via Integers
- PNVI-ae-udi — provenance model in WG14 research
- `intptr_t` round trip — cast to integer and back may lose provenance
- `__builtin_launder` equivalent in C — no standard solution
- Why provenance matters — compiler can assume pointers dont alias if different provenance
- Concrete example — pointer to freed memory, same address reallocated — still UB to use old pointer
- C standards committee active work — N2676, N3005 papers
- Implications for memory allocator implementation
- `memcpy` and provenance — does it copy provenance?
- Provenance and `union` — accessing via different member
- CHERI architecture — hardware enforced provenance
- Capability pointers — fat pointers with hardware bounds

---

## **Object Model — Exact Standard Rules**

- Object — region of data storage, contiguous bytes, has value
- Byte — addressable unit, `CHAR_BIT` bits, minimum 8
- `CHAR_BIT` may be 16 on DSPs — affects everything
- Padding bytes — never examined, indeterminate value
- Trap representations — bit pattern that causes UB when read
- `_Bool` trap representation — any bit pattern other than 0/1 on some platforms
- Integer trap representations — ones complement, sign magnitude (historical)
- Floats — NaN, signaling NaN behavior
- Indeterminate value — either unspecified value or trap representation
- Unspecified value — valid value of type, but which one not specified
- Reading indeterminate value — UB if trap representation possible
- `unsigned char` — no padding bits, no trap representations — only safe type to inspect bytes
- Object representation vs value representation
- `memcmp` on structs — may compare padding, unreliable
- `memcpy` copies object representation including padding
- Copying indeterminate value with `memcpy` — defined (copies bytes)
- Copying indeterminate value with assignment — UB

---

## **Compilation Phases — Exact 9 Phases**

- Phase 1 — trigraph replacement (`??=` → `#`)
- Phase 2 — line splicing (backslash newline removal)
- Phase 3 — tokenization, comments replaced by space
- Phase 4 — preprocessing, macro expansion, `#include`
- Phase 5 — character set conversion (source → execution charset)
- Phase 6 — string literal concatenation `"a" "b"` → `"ab"`
- Phase 7 — compilation, semantic analysis
- Phase 8 — linking of instantiated templates (C++ concept, in C — library linking)
- Phase 9 — program startup
- Trigraphs removed in C23
- Line splicing in phase 2 — before tokenization — affects macro behavior
- String literal concatenation in phase 6 — allows mixing encoding prefixes carefully
- Character set conversion — source charset vs execution charset — EBCDIC systems
- `__STDC__`, `__STDC_VERSION__` — set during phase 4

---

## **Tokenization Rules — Maximal Munch**

- Maximal munch rule — longest valid token consumed greedily
- `a+++++b` — parsed as `a++ ++ +b` — UB
- `a+++++b` not `a++ + ++b`
- `->*` — in C++ is one token, in C separate tokens
- `0x1E+1` — tokenized as `0x1E` `+` `1` not `0x1` `E+1`
- Whitespace sometimes required — `int*p` vs `int *p`
- Adjacent string literals — same type required in C, mixed in C23
- `u8"hello" "world"` — concatenation rules
- Token pasting `##` creates new token — must be valid token
- Invalid result of `##` — UB in preprocessing

---

## **Integer Conversion Rules — Exact**

- Integer conversion rank — `_Bool` < `char` < `short` < `int` < `long` < `long long`
- Integer promotion — types of lower rank than `int` promoted to `int`
- If `int` can represent all values — promote to `int`, else `unsigned int`
- `char` + `char` — both promoted to `int` before addition
- `unsigned char` + `unsigned char` — result is `int` not `unsigned char`
- Usual arithmetic conversions — both operands converted to common type
- If same type — no conversion
- If same signedness — lower rank converted to higher rank
- If unsigned rank >= signed rank — signed converted to unsigned
- If signed can represent all values of unsigned — unsigned converted to signed
- Otherwise — both converted to unsigned version of signed type
- Signed to unsigned — modulo 2^n, well defined
- Unsigned to signed — implementation defined if value not representable
- `(unsigned int)-1` — well defined, gives `UINT_MAX`
- `-1 < 0U` — evaluates to `0` (false) — signed -1 converted to unsigned!
- Classic bug — `if (length - 1 >= 0)` where length is unsigned

---

## **Floating Point — Deep C Standard Rules**

- C uses IEEE 754 but doesn't require it — `__STDC_IEC_559__`
- `FLT_EVAL_METHOD` — intermediate precision
- `FLT_EVAL_METHOD = 2` — all float evaluated as long double (x87)
- Excess precision — intermediate results may have more precision
- `#pragma STDC FP_CONTRACT` — allow/disallow fused operations
- `#pragma STDC FENV_ACCESS` — tell compiler you're using FPU flags
- `#pragma STDC CX_LIMITED_RANGE` — complex math optimizations
- `fenv.h` — floating point environment
- `fegetround` / `fesetround` — rounding mode
- `fetestexcept` — check floating point exceptions
- `FE_OVERFLOW`, `FE_UNDERFLOW`, `FE_INEXACT`, `FE_DIVBYZERO`, `FE_INVALID`
- `-ffast-math` — violates IEEE 754, breaks `fenv.h` usage
- Negative zero — `0.0` vs `-0.0` — equal but different
- `1.0 / 0.0` vs `1.0 / -0.0` — different infinities
- NaN comparisons — always false including `NaN == NaN`
- `isnan()`, `isinf()`, `isfinite()`, `signbit()` — from `math.h`
- Subnormal numbers — gradual underflow
- `DBL_TRUE_MIN` — smallest positive double (subnormal)
- Floating point contraction — `a*b+c` → fma, may change result

---

## **Conversions — Every Kind**

- Lvalue conversion — lvalue to rvalue, array to pointer, function to pointer
- Array to pointer decay — loses size information completely
- `sizeof array` vs `sizeof pointer` — common bug
- Function to pointer — `f` and `&f` are equivalent in C
- Integer to pointer — implementation defined
- Pointer to integer — implementation defined  
- Pointer to `void*` and back — round trip guaranteed
- `void*` to any object pointer — always valid
- Function pointer to `void*` — not guaranteed by C standard
- POSIX guarantees function to `void*` round trip
- `NULL` — implementation defined, `(void*)0` or `0`
- Null pointer constant — integer constant 0, or `(void*)0`
- Null pointer representation — not necessarily all-zero bits
- Comparing pointer to 0 — implicitly converts 0 to null pointer

---

## **Sequence Points Replaced — C11 Sequencing Rules**

- Old: sequence points (C89/C99)
- New: sequenced-before / sequenced-after partial order (C11)
- Side effect — modifying object, accessing volatile, I/O operation
- Value computation — computing value of expression
- Sequenced-before is strict partial order — irreflexive, transitive
- If neither A before B nor B before A — they are unsequenced
- Unsequenced with conflicting side effects — UB
- Indeterminately sequenced — one before other, but unspecified which
- Function arguments — indeterminately sequenced (not UB but unspecified order)
- `f(i++, i++)` — UB (unsequenced modifications)
- `f(g(), h())` — UB if both modify same object, otherwise fine
- `i = i++` — was UB in C99, still UB in C11
- `i++ + i++` — UB
- Full expression — expression not part of larger expression, sequenced-before next full expression
- Comma operator creates sequence — `(a++, a++)` — defined, but almost always a mistake

---

## **N-Dimensional Arrays — Deep**

- `int a[3][4]` — array of 3 arrays of 4 ints, contiguous in memory
- `a[i][j]` — same as `*(*(a+i)+j)` — but types differ
- `a` decays to `int (*)[4]` — pointer to array of 4 ints
- `int (*p)[4] = a` — correct type
- `int **p = a` — wrong type, different pointer arithmetic
- Passing 2D array to function — must specify all dimensions except first
- `void f(int a[][4])` vs `void f(int (*a)[4])` — same thing
- VLA 2D array — `void f(int n, int m, int a[n][m])`
- Row major order — C uses row major
- Cache implications of row vs column traversal
- Array of pointers vs 2D array — completely different memory layout
- `int *a[3]` vs `int (*a)[3]` — pointer precedence rules

---

## **String Internals — Deep**

- String — array of `char` terminated by `\0` null byte
- `\0` is char with value 0, same as `'\0'` same as `0` cast to char
- `strlen` — O(n), doesn't count null terminator
- `sizeof "hello"` — 6 (includes null terminator)
- `strlen("hello")` — 5
- String literal storage — `.rodata` section, static duration
- Identical string literals — may or may not share storage (implementation defined)
- `char *p = "hello"` — modifying through p is UB
- `char a[] = "hello"` — copy into array, modifiable
- `strncpy` does not null terminate if src >= n — silent truncation bug
- `strncpy` pads with null bytes if src < n — performance issue
- `strncat` — n is max chars from src, not total buffer size — confusing
- `snprintf` return value — number of chars that WOULD be written — not written
- `snprintf` truncation detection — `ret >= sizeof buf`
- `strtol`, `strtod` — better than `atoi`, `atof` — detect errors
- `strtol` with `endptr` — detecting invalid input
- `strchr` vs `memchr` — strchr stops at null, memchr doesn't
- `memmem` — POSIX, find byte sequence in memory
- Multibyte strings — `mbstowcs`, `wcstombs`
- `wchar_t` — wide characters, `wchar.h`

---

## **Preprocessor — Deepest Level**

- Rescanning — after expansion, result rescanned for more macros
- Blue painting — expanded macro not re-expanded (prevents infinite recursion)
- Self-referential macro — `#define X (X+1)` — X in expansion not expanded
- Recursive macro simulation — using deferred expansion
- `DEFER(MACRO)` pattern — two-level expansion trick
- Macro argument prescan — arguments expanded before substitution (except `#` and `##`)
- `#` operator — arguments not expanded before stringification
- `##` operator — arguments not expanded before pasting
- Workaround — `#define STR(x) #x` vs `#define XSTR(x) STR(x)`
- `XSTR(MACRO)` expands MACRO first, then stringifies
- `__VA_OPT__(,)` (C23) — optional token if varargs not empty
- `__VA_ARGS__` with zero arguments — was UB, fixed in C23
- Macro overloading by argument count — using `__VA_ARGS__` counting trick
- Counting arguments trick — `COUNT(a,b,c)` using `__VA_ARGS__`
- `_Pragma("GCC diagnostic ignore \"-Wunused\"")`  in macro
- Computed inclusion — `#include HEADER_NAME_MACRO`
- `__has_include` (C23) — check if header exists
- `__has_c_attribute` (C23) — check attribute support
- Predefined macro `__INCLUDE_LEVEL__` — GCC, nesting depth

---

## **Alignment — Complete Picture**

- Alignment — every type has alignment requirement
- `_Alignof(T)` — alignment of type T
- `_Alignas(n)` — specify alignment of variable
- `_Alignas(T)` — align same as type T
- `malloc` — returns memory aligned for any fundamental type
- `malloc` alignment — at least `_Alignof(max_align_t)`
- `max_align_t` — largest fundamental alignment
- Over-aligned types — alignment greater than `max_align_t`
- `aligned_alloc(align, size)` — C11, allocate with specific alignment
- `size` must be multiple of `align` — common mistake
- Misaligned pointer dereference — UB (not just slow)
- Misaligned `int*` — UB even if hardware supports it
- Packed struct member access — generates misaligned access
- `__builtin_assume_aligned(ptr, n)` — GCC hint
- Natural alignment — type aligned to its own size
- Structure alignment — determined by most aligned member
- Cache line alignment — 64 bytes typical, `_Alignas(64)`
- Page alignment — 4096 bytes, for `mmap`, `mprotect`
- SIMD alignment — 16/32/64 bytes for SSE/AVX

---

## **Calling Conventions — Deep**

- cdecl — caller cleans stack, varargs possible
- stdcall — callee cleans stack, no varargs (Win32 API)
- fastcall — first args in registers (ECX, EDX on x86)
- x86-64 System V ABI — first 6 int args in RDI RSI RDX RCX R8 R9
- x86-64 Windows ABI — first 4 args in RCX RDX R8 R9
- Float args — XMM0-XMM7 on System V
- Return value — RAX for integers, XMM0 for floats
- Large struct return — hidden pointer argument
- Red zone — 128 bytes below stack pointer, signal handlers must not use
- Frame pointer — RBP, optional with `-fomit-frame-pointer`
- Stack alignment — 16 bytes required on x86-64 before call
- `__attribute__((cdecl))`, `__attribute__((stdcall))` — GCC
- Naked functions — `__attribute__((naked))` — no prologue/epilogue
- Interrupt handlers — different calling convention, must save all regs
- ARM AAPCS — procedure call standard
- ARM64 AAPCS64 — 8 integer args (X0-X7), 8 float args (V0-V7)

---

## **ELF Format — Deep**

- ELF header — magic, class (32/64), endianness, type, machine
- Program headers — segments, used by loader
- Section headers — sections, used by linker
- Segment vs section — segments for runtime, sections for linking
- `PT_LOAD` segment — loaded into memory
- `PT_DYNAMIC` segment — dynamic linking info
- `PT_INTERP` segment — path to dynamic linker
- `PT_GNU_STACK` — stack executable flag
- `PT_GNU_RELRO` — read-only after relocation
- `SHT_SYMTAB` — symbol table
- `SHT_DYNSYM` — dynamic symbol table
- `SHT_REL` / `SHT_RELA` — relocation tables
- `SHT_STRTAB` — string table
- `SHT_NOTE` — build ID, ABI notes
- `STB_GLOBAL` vs `STB_LOCAL` vs `STB_WEAK` — symbol binding
- `STT_FUNC` vs `STT_OBJECT` — symbol type
- `SHN_COMMON` — uninitialized global, like .bss but before linking
- DWARF — debugging information format embedded in ELF
- `.debug_info`, `.debug_line`, `.debug_frame` — DWARF sections
- Build ID — hash of binary, `readelf --notes`
- `eu-readelf`, `llvm-readelf` — alternatives to `readelf`

---

## **Dynamic Linking — Internals**

- `LD_LIBRARY_PATH` — runtime library search path
- `DT_RPATH` vs `DT_RUNPATH` — embedded library paths
- `rpath` vs `runpath` — search order difference
- PLT — Procedure Linkage Table — lazy binding
- GOT — Global Offset Table — address table
- Lazy binding — function resolved on first call
- `LD_BIND_NOW=1` — resolve all symbols at startup
- `-z now` — link flag for eager binding (more secure)
- RELRO + now — full RELRO, GOT made read-only
- `dlopen` / `dlclose` / `dlsym` / `dlerror` — runtime loading
- `RTLD_LAZY` vs `RTLD_NOW` — lazy vs eager resolution
- `RTLD_GLOBAL` vs `RTLD_LOCAL` — symbol visibility
- `RTLD_DEEPBIND` — local symbols preferred
- Symbol interposition — `LD_PRELOAD` overriding symbols
- `__attribute__((visibility("default")))` vs `"hidden"`
- Versioned symbols — `foo@GLIBC_2.17`
- `__asm__(".symver foo, foo@MYLIB_1.0")` — version script
- `ifunc` — indirect function, resolve at load time
- `__attribute__((ifunc("resolver")))` — select implementation at runtime
- ASLR effect on shared libraries — PIE required

---

## **System Calls — Deep C Interface**

- `syscall(SYS_write, fd, buf, len)` — raw syscall
- `errno` — not a simple variable, macro expanding to `(*__errno_location())`
- `errno` is thread local — separate per thread
- Setting errno — only meaningful after failed call
- Some functions don't set errno — must check docs
- `perror` vs `strerror` vs `strerror_r`
- `strerror` — not thread safe, use `strerror_r`
- `EINTR` — interrupted by signal, must retry
- `SA_RESTART` — auto-restart syscalls on signal
- Slow vs fast syscalls — slow can be interrupted
- `EAGAIN` vs `EWOULDBLOCK` — same value on Linux
- `select` vs `poll` vs `epoll` — scalability differences
- `epoll` — O(1) for events regardless of fd count
- `EPOLLET` — edge triggered vs level triggered
- `io_uring` — newest Linux async I/O interface
- `splice`, `sendfile` — zero copy between fds
- `mmap` vs `read` — tradeoffs for file access
- `madvise` — hint kernel about memory usage pattern
- `MADV_SEQUENTIAL`, `MADV_RANDOM`, `MADV_WILLNEED`, `MADV_DONTNEED`
- `posix_fadvise` — similar hints for file I/O

---

## **Memory Mapped Files — Deep**

- `mmap(NULL, size, PROT_READ, MAP_PRIVATE, fd, 0)` — map file
- `MAP_PRIVATE` — copy on write, changes not written back
- `MAP_SHARED` — changes written back to file
- `MAP_ANONYMOUS` — not backed by file, memory allocation
- `MAP_FIXED` — map at exact address (dangerous)
- `MAP_FIXED_NOREPLACE` — fail if address occupied (Linux 4.17)
- `PROT_READ | PROT_WRITE | PROT_EXEC` — permissions
- `mprotect` — change permissions after mapping
- `msync` — flush changes to file
- `munmap` — unmap region
- `mremap` — resize mapping (Linux extension)
- Huge pages — `MAP_HUGETLB`, `madvise(MADV_HUGEPAGE)`
- Transparent huge pages — kernel managed
- `MAP_POPULATE` — pre-fault pages at mmap time
- Demand paging — pages loaded on first access
- Page fault handling in kernel — minor vs major fault
- Memory mapped IO in userspace — `PROT_WRITE` on device

---

## **Process Memory Layout — Exact**

- Virtual address space — 128TB on x86-64 Linux (user)
- Canonical addresses — 47-bit user, 47-bit kernel on x86-64
- Stack — grows down, starts at high address
- Stack size limit — `ulimit -s`, default 8MB
- Stack guard page — unmapped page, catches overflow
- Heap — grows up via `brk`/`sbrk`
- `mmap` region — between heap and stack
- `malloc` — uses `brk` for small, `mmap` for large (glibc threshold 128KB)
- `MALLOC_MMAP_THRESHOLD_` — tunable
- `mallopt` — tune malloc behavior
- Text segment — `.text`, `.rodata`
- Data segment — `.data`, `.bss`
- VDSO — Virtual Dynamic Shared Object — kernel maps into process
- `vsyscall` — legacy, fixed address syscalls (now VDSO)
- VDSO contains `gettimeofday`, `clock_gettime` — no kernel entry needed
- `/proc/PID/maps` — exact layout visible here
- ASLR randomizes — stack, heap, mmap regions

---

## **Cache & Memory Performance — Deep C**

- Cache line — 64 bytes on modern x86
- False sharing — two threads modifying different variables same cache line
- `_Alignas(64)` to separate hot variables to different cache lines
- Padding struct to cache line size — avoid false sharing
- Prefetching — `__builtin_prefetch(addr, rw, locality)`
- `rw=0` read prefetch, `rw=1` write prefetch
- `locality=0` no temporal locality, `locality=3` all cache levels
- Cache associativity — set associative, conflict misses
- Power-of-2 stride access — may cause conflict misses (pathological case)
- NUMA — Non Uniform Memory Access
- `numa_alloc_onnode` — allocate on specific NUMA node
- `numactl --membind=0` — bind memory to node
- TLB — Translation Lookaside Buffer
- TLB miss cost — expensive, hundreds of cycles
- Huge pages reduce TLB pressure
- `perf stat -e cache-misses,cache-references` — measure cache behavior
- `perf mem` — memory access profiling
- Cache warming — first access always slow

---

## **Compile Time Computation — C Specific**

- `_Generic` — type generic expressions (C11)
- `_Generic(x, int: "int", float: "float", default: "other")`
- `_Generic` for type-safe math macros — `tgmath.h` uses this
- `tgmath.h` — type generic math, `sin(x)` works for float/double/long double
- Constant expressions — evaluated at compile time
- Integer constant expression — strict rules on what qualifies
- `__builtin_constant_p(x)` — check if expression is compile time constant
- Bit tricks evaluated at compile time — popcount, bit reversal
- `static const` vs `#define` vs `enum` — only enum guaranteed no storage
- `enum` for compile time integer constants — classic C idiom
- `sizeof` in preprocessor — not possible, `sizeof` is compile time not preprocessor
- `offsetof` — may be evaluated at compile time
- Constant folding — compiler evaluates arithmetic at compile time
- Strength reduction — compiler replaces expensive op with cheaper

---

## **Obscure Standard Library — Deep**

- `<fenv.h>` — floating point environment control
- `<tgmath.h>` — type generic math
- `<complex.h>` — complex arithmetic
- `<stdnoreturn.h>` — `noreturn` macro (C11)
- `<stdatomic.h>` — atomic operations (C11)
- `<threads.h>` — threading (C11, optional)
- `<uchar.h>` — Unicode character types (C11) — `char16_t`, `char32_t`
- `<stdalign.h>` — alignment macros (C11)
- `<stdbit.h>` — bit manipulation (C23) — `stdc_count_ones`, `stdc_leading_zeros`
- `<stdckdint.h>` — checked integer arithmetic (C23) — `ckd_add`, `ckd_mul`
- `ckd_add(&result, a, b)` — returns true if overflow
- `bsearch` — binary search, comparison function must be consistent
- `qsort` — not guaranteed stable until C23 (C23 adds `qsort_s` stability requirement)
- `qsort_r` — POSIX, reentrant with user data
- `lsearch` / `lfind` — linear search (POSIX)
- `tsearch` / `tfind` / `tdelete` / `twalk` — binary tree (POSIX)
- `hsearch` / `hcreate` / `hdestroy` — hash table (POSIX, only one table!)
- `hcreate_r` — reentrant version (GNU)
- `strfmon` — format monetary values
- `strptime` — parse time string (POSIX)
- `timegm` — inverse of `gmtime` (GNU, not standard)
- `clock_gettime(CLOCK_MONOTONIC)` — monotonic clock
- `CLOCK_PROCESS_CPUTIME_ID` — CPU time for process
- `CLOCK_THREAD_CPUTIME_ID` — CPU time for thread

---

## **C and Assembly Interface**

- `asm volatile("" ::: "memory")` — compiler memory barrier
- `asm volatile("mfence")` — hardware memory fence
- Inline assembly constraints — `"r"`, `"m"`, `"i"`, `"=r"`, `"+r"`
- Input/output operands — `"=r"(out), "r"(in1), "r"(in2)`
- Clobber list — `"cc"` for condition codes, `"memory"` for memory
- Symbolic names — `"=r"(result) [result]`
- `__asm__` vs `asm` — `__asm__` available in strict mode
- Early clobber — `"=&r"` — output written before inputs read
- Specific register constraint — `"a"` for EAX/RAX
- Extended asm in loops — compiler may not know about side effects
- Naked functions — entire body is asm
- CPUID example — `asm("cpuid" : "=a"(eax), "=b"(ebx), "=c"(ecx), "=d"(edx) : "a"(leaf))`
- Read TSC — `rdtsc` for cycle counting
- Atomic operations via asm — `lock xadd`, `cmpxchg`

---

## **Sanitizers — Deep Usage**

- ASan shadow memory — 1 byte shadow for 8 bytes application memory
- ASan overhead — ~2x memory, ~2x time
- ASan detects — heap/stack/global overflow, use-after-free, use-after-return
- `__asan_poison_memory_region` — manually poison memory
- `__asan_unpoison_memory_region` — unpoison
- `__attribute__((no_sanitize("address")))` — exclude function
- UBSan checks — overflow, shift, misaligned, null, bounds
- `-fsanitize=undefined,integer,nullability` — combined
- UBSan trap mode — `-fsanitize-trap=all` — no runtime, just trap
- MSan — uninitialized reads — requires ALL code compiled with MSan
- MSan origin tracking — `--track-origins=2`
- TSan shadow memory — 4 words shadow per 8 bytes
- TSan overhead — 5-15x slowdown, 5-10x memory
- Coverage sanitizer — `--coverage` or `-fsanitize=coverage`
- `-fsanitize-coverage=trace-pc-guard` — SanitizerCoverage for fuzzing
- LibFuzzer integration — coverage guided fuzzing
- AFL++ — another fuzzer using sanitizers

---

## **Weak Symbols & Linker Tricks**

- `__attribute__((weak))` — symbol can be overridden
- Weak symbol default implementation — library provides fallback
- Strong symbol overrides weak — without error
- `__attribute__((weak, alias("other_func")))` — weak alias
- `__attribute__((alias("real_func")))` — strong alias
- Checking if weak symbol exists — compare to NULL
- `if (weak_func) weak_func();` — call if defined
- Wrap feature — `--wrap=malloc` linker flag
- `__wrap_malloc` — your implementation called instead
- `__real_malloc` — calls original
- Useful for testing, mocking, intercepting
- Constructor priority — `__attribute__((constructor(65535)))` — run last
- Destructor priority — `__attribute__((destructor(100)))` — run last to exit (low priority = runs later)
- `.init_array` and `.fini_array` sections — arrays of function pointers

---

## **Most Impressive Interview Questions at Deepest Level**

- What is pointer provenance and why does it matter for optimization?
- Explain effective type and how `malloc` memory gets its type
- What happens when you read an uninitialized `unsigned char` vs `int`?
- Why is `(unsigned)-1 > 0` true? Explain the conversion
- What is `FLT_EVAL_METHOD` and how does it affect your float code?
- Explain maximal munch with an example that changes meaning
- What is the difference between indeterminate value and unspecified value?
- Explain VDSO and why `clock_gettime` doesn't always do a syscall
- Why does `malloc` use `mmap` for large allocations?
- What is COMDAT and how does the linker use it?
- What is lazy binding and how does PLT/GOT work?
- Explain why `errno` is a macro and not a variable
- What is the red zone in x86-64 ABI?
- How do you correctly do type punning in C?
- Why is `char* + char*` addition impossible but `char* - char*` valid?
- What is `__builtin_unreachable` and how can it cause security bugs?
- Explain `_Atomic` struct — what does making entire struct atomic mean?
- What is `ckd_add` in C23 and why was it needed?
- Explain phase 2 line splicing and how it affects macros

---

At the **deepest C level**, you're not just a programmer anymore — you're operating at the boundary between **language, compiler, linker, OS, and hardware**. This is the level where you understand exactly **what your C code becomes** at every stage and can reason about correctness, security, and performance simultaneously.



Here is the **deepest possible dive into pointers in C**:

---

## **Pointer Fundamentals — Exact Standard Definition**

- Pointer — object whose value is address of another object
- Pointer is not an integer — even if same size
- Pointer has type — `int*` and `float*` are different types
- Pointer size — implementation defined, not always same as `int`
- `sizeof(int*)` may differ from `sizeof(void*)`— NOT guaranteed same
- On x86-64 — all data pointers same size (8 bytes)
- Function pointer size — may differ from data pointer size
- POSIX guarantees `void*` and function pointer same size — C standard does not
- Null pointer — does not point to any object
- Null pointer representation — not necessarily all-zero bits
- Null pointer constant — integer constant `0` or `(void*)0`
- Converting `0` to pointer type gives null pointer
- `(void*)0` — null pointer of type `void*`
- `NULL` macro — expands to null pointer constant, implementation defined exact form
- Testing null — `if (ptr)` same as `if (ptr != NULL)`
- Null pointer comparison — any null pointer equals any other null pointer
- Two null pointers of different types are equal
- Invalid pointer — not null, not pointing to valid object — reading is UB
- Indeterminate pointer — uninitialized pointer variable — using is UB

---

## **Pointer Types — Complete List**

- `T*` — pointer to object of type T
- `T**` — pointer to pointer to T
- `T***` — triple pointer, rarely needed, usually design smell
- `void*` — generic pointer, no type information
- `const T*` — pointer to const T — cannot modify through pointer
- `T* const` — const pointer to T — cannot change pointer itself
- `const T* const` — const pointer to const T
- `volatile T*` — pointer to volatile T
- `T* restrict` — restricted pointer — only way to access T in scope
- `T (*)[N]` — pointer to array of N elements of type T
- `T (*)(params)` — pointer to function returning T
- `T* (*)(params)` — pointer to function returning pointer to T
- `void (*)(void)` — pointer to function taking nothing returning nothing
- `T* (*[N])(params)` — array of N pointers to functions
- Reading complex declarations — right-left rule

---

## **Right-Left Rule — Reading Complex Declarations**

- Start at identifier
- Go right until `)` or end
- Go left until `(` or start
- Repeat expanding outward
- `int *p` — p is pointer to int
- `int *p[5]` — p is array of 5 pointers to int
- `int (*p)[5]` — p is pointer to array of 5 ints
- `int *f()` — f is function returning pointer to int
- `int (*f)()` — f is pointer to function returning int
- `int (*f[5])()` — f is array of 5 pointers to functions returning int
- `int *(*f[5])()` — f is array of 5 pointers to functions returning pointer to int
- `void (*signal(int, void(*)(int)))(int)` — signal is function taking int and pointer to function, returning pointer to function
- `cdecl` tool — translates C declarations to English
- `__attribute__` placement — goes after type, before name or after declaration

---

## **Pointer Arithmetic — Exact Rules**

- Only valid on pointers into arrays (including one-past-end)
- `ptr + n` — advances by `n * sizeof(*ptr)` bytes
- `ptr - n` — retreats by `n * sizeof(*ptr)` bytes
- `ptr1 - ptr2` — number of elements between, type is `ptrdiff_t`
- `ptrdiff_t` — signed integer type, in `<stddef.h>`
- `ptr1 - ptr2` only valid if both point into same array
- Pointer subtraction of unrelated pointers — UB
- `ptr + 0` — valid, returns same pointer
- Incrementing past one-past-end — UB
- One-past-end pointer — valid to create, invalid to dereference
- One-past-end + 1 — UB
- Pointer before start of array — UB even without dereference
- Comparing unrelated pointers with `<`, `>` — UB
- Comparing unrelated pointers with `==`, `!=` — implementation defined (not UB)
- `NULL + 0` — UB technically (but commonly accepted)
- Arithmetic on `void*` — UB in standard, GCC treats `void` as size 1
- Arithmetic on function pointers — UB

---

## **Pointer Conversion — Complete Rules**

- Any object pointer to `void*` — always valid, no cast needed
- `void*` to any object pointer — always valid, no cast needed
- `int*` to `float*` — implementation defined, usually requires cast
- Casting pointer to incompatible type — UB to dereference
- Pointer to `char*` or `unsigned char*` — always valid (aliasing rule)
- `char*` can alias any type — inspect bytes of any object
- Pointer to integer — `(uintptr_t)ptr` — round trip guaranteed
- `uintptr_t` — unsigned integer same size as pointer
- `intptr_t` — signed version
- Integer to pointer — `(int*)(uintptr_t)value` — implementation defined
- Round trip integer→pointer→integer — `(uintptr_t)(void*)ptr` — guaranteed
- Round trip pointer→integer→pointer — guaranteed only via `uintptr_t`
- Pointer to `_Bool` — any non-null pointer converts to `1`
- Function pointer to data pointer — UB in C standard, POSIX allows it
- `void (*fp)(void)` to `void*` — not standard C but POSIX guarantees it
- Alignment — converting to pointer of stricter alignment — UB if misaligned

---

## **Pointer Aliasing — Deep**

- Aliasing — two pointers pointing to same memory
- Strict aliasing rule — accessing object through incompatible type pointer — UB
- Compatible types — same type, qualified versions, signed/unsigned versions
- `int*` and `unsigned int*` — may alias (compatible types)
- `int*` and `float*` — may NOT alias (strict aliasing violation)
- `char*` and `unsigned char*` — can alias anything
- `int*` and `struct { int x; }*` — may alias (struct containing same type) — actually no, only aggregate containing the type
- Effective type rule — determines what type memory "has"
- `malloc` memory — no effective type until written
- Writing `int` to `malloc` memory — effective type becomes `int`
- Reading back as `float` — strict aliasing violation
- Correct type punning — `memcpy` only
- `memcpy` between `int*` and `float*` — defined, copies bytes
- `__attribute__((may_alias))` — GCC, mark type as may-alias
- `-fno-strict-aliasing` — disable strict aliasing optimization
- Linux kernel uses `-fno-strict-aliasing` — extensive type punning
- TBAA — Type Based Alias Analysis — compiler optimization using aliasing rules

---

## **restrict Keyword — Deep**

- `restrict` — promise that pointer is only way to access that memory in scope
- `restrict` enables aggressive optimization
- `void f(int* restrict a, int* restrict b)` — a and b don't alias
- Compiler can keep `*a` in register — no need to reload after `*b` write
- `memcpy` declaration — `void* restrict dest, const void* restrict src`
- `memmove` — no restrict — handles overlap
- Violating restrict — UB — silent wrong results
- Restrict on local pointer — `int* restrict p = arr`
- Restrict and arrays — `void f(int a[restrict 10])`
- Restrict and return value — function result pointer doesn't restrict
- Restrict and struct members — restrict on struct member pointer
- Restrict and aliasing with globals — globals may alias restrict params if not derived from them
- Formally — object X accessed through restrict pointer P — all accesses to X must be through P or derived from P
- Derived pointer — `p + 1`, `p + i`, copy of p — all derived
- Non-derived access to X — violates restrict
- Restrict in C vs C++ — C++ doesn't have restrict (uses `__restrict__`)

---

## **void Pointer — Deep**

- `void*` — can hold any data pointer value
- `void*` — cannot be dereferenced
- `void*` — cannot do arithmetic (standard)
- `void*` — no alignment requirement imposed by pointer itself
- Converting from `void*` — programmer must know correct type
- `malloc` returns `void*` — assigned to typed pointer without cast in C
- In C++ — explicit cast required (C++ is stricter)
- `void**` — pointer to void pointer — NOT generic pointer to pointer
- `int**` to `void**` — not safe, requires explicit cast
- `void**` common mistake — `void* p; void** pp = &p;` — ok
- `int* p; void** pp = (void**)&p;` — technically UB (aliasing)
- Generic swap using `void*` — `void swap(void* a, void* b, size_t size)`
- `qsort` uses `void*` — comparison function receives `const void*`
- `bsearch` uses `void*` similarly
- Function accepting `void*` — loses type safety

---

## **Function Pointers — Complete Deep Dive**

- Declaration — `int (*fp)(int, int)`
- Typedef — `typedef int (*BinaryOp)(int, int)`
- Assigning — `fp = add` or `fp = &add` — both valid, `&` optional
- Calling — `fp(1, 2)` or `(*fp)(1, 2)` — both valid
- Dereferencing — `*fp` gives function designator, decays back to pointer
- NULL function pointer — calling is UB
- Comparing function pointers — `fp1 == fp2` — valid
- Comparing to NULL — `if (fp)` — valid
- Array of function pointers — dispatch table
- `void (*table[256])(void)` — 256 function pointers
- Function pointer and `void*` — not guaranteed same size in C standard
- Casting function pointer to different type — calling through wrong type is UB
- Using `dlsym` — returns `void*`, must cast to function pointer
- `*(void**)(&fp) = dlsym(...)` — POSIX workaround for strict compilers
- Signal handler type — `void (*)(int)`
- `atexit` — `void (*)(void)` — no parameters
- `qsort` comparator — `int (*)(const void*, const void*)`
- Inline functions vs function pointers — inlining impossible through pointer
- Virtual dispatch simulation using function pointers in struct

---

## **Pointer to Array — vs Pointer to Element**

- `int a[5]` — `a` decays to `int*` — pointer to first element
- `&a` — pointer to entire array — type is `int (*)[5]`
- `a` and `&a` — same address, different types
- `a + 1` — advances by `sizeof(int)` — 4 bytes
- `&a + 1` — advances by `sizeof(int[5])` — 20 bytes
- `int (*p)[5] = &a` — pointer to array
- `(*p)[3]` — access element 3 through array pointer
- `p[1]` — next array of 5 ints — 20 bytes ahead
- Used for 2D array parameter — `void f(int (*a)[5])`
- VLA array pointer — `int (*p)[n]` — runtime size
- Array of array pointers — rarely needed, complex syntax
- `sizeof(*p)` where p is `int(*)[5]` — gives 20, not 4

---

## **Pointer to Struct Member — Deep**

- `&s.member` — address of member
- `offsetof(struct S, member)` — byte offset of member
- `(char*)&s + offsetof(struct S, x)` — compute member address manually
- Container_of macro — given member pointer, get struct pointer
- `container_of(ptr, type, member)` — `((type*)((char*)(ptr) - offsetof(type, member)))`
- Used extensively in Linux kernel
- Accessing struct through member pointer — type safe with correct types
- `struct S* s = container_of(list_ptr, struct S, list)`
- Intrusive linked list — embed list node in struct
- Pointer to bit field — cannot take address of bit field
- `&s.bitfield` — compile error
- Why — bit fields may not start at byte boundary

---

## **Pointer to Pointer — Deep Patterns**

- `int** pp` — pointer to pointer to int
- `*pp` — gives `int*`
- `**pp` — gives `int`
- Modifying pointer from function — must pass `int**`
- `void alloc(int** pp) { *pp = malloc(...); }`
- Linked list modification — `node** to modify head`
- Classic linked list delete — `node** curr = &head` — avoids special case
- `int* arr[5]` vs `int (*arr)[5]` — array of pointers vs pointer to array
- Array of strings — `char* arr[]` — each element is `char*`
- `char** argv` — pointer to first element of `char*` array
- `argv[0]` same as `*argv`
- `argv[i]` same as `*(argv + i)`
- `NULL` terminated pointer arrays — `environ`, `argv`
- Triple pointer — `char*** — rarely justified, usually design problem
- Handle pattern — `void** handle` — generic double pointer

---

## **Dangling Pointers — Every Case**

- Pointer to freed memory — use after free — UB
- Pointer to stack variable after function returns — dangling
- Returning address of local variable — dangling immediately
- Returning address of `static` local — valid (static duration)
- Pointer to element of reallocated array — dangling if realloc moved
- `realloc` invalidates old pointer even if same address returned — technically
- Pointer to element of `vector` after push (C++ concept — in C, any reallocated array)
- Pointer invalidation after `qsort` — sort may move elements but pointer still valid (same array)
- `setjmp/longjmp` — local variables between setjmp and longjmp may be dangling if not volatile
- Thread stack pointer — accessing another thread's local via pointer — dangerous
- Dangling pointer in struct — struct copied but pointer member points to original's local data
- Self-referential struct — pointer to own member — valid while struct lives

---

## **Aliasing Through Union — C vs C++**

- Union type punning — reading inactive member
- In C — explicitly allowed by C99 TC3 and C11 (footnote 95 / 6.5.2.3)
- In C++ — technically UB (strict aliasing violation)
- `union { float f; uint32_t u; } pun; pun.f = 1.0f; use(pun.u)` — defined in C
- Common pattern for float bit manipulation
- `memcpy` version — defined in both C and C++
- `memcpy(&u, &f, sizeof f)` — copy bytes, defined everywhere
- Compiler generates same code as union punning — with optimization
- `__attribute__((may_alias))` — GCC C++ alternative
- `std::bit_cast` — C++20 alternative, constexpr friendly
- Union and pointer aliasing — pointer to union member may alias pointer to other member

---

## **Pointer Provenance — Formal Deep Dive**

- Every pointer has provenance — the allocation it came from
- Two pointers equal address but different provenance — distinct pointers
- Compiler tracks provenance for optimization
- Example — `free(p); q = malloc(same_size); if (p == q)` — p still invalid despite equal address
- Pointer through integer — `(int*)(uintptr_t)p` — may lose provenance
- Compiler may assume — pointers derived from different allocations don't alias
- PNVI — Provenance Not Via Integers — proposed model
- PNVI-ae — provenance via address exposed
- `__builtin_launder` (C++) — restore provenance, no C equivalent
- `memcpy` — copies bytes, unclear if copies provenance
- WG14 active discussion — N2676, N2862, N3005, N3006
- CHERI hardware — hardware enforced provenance
- Capability pointer — contains address + bounds + permissions + tag
- Capability sealed — cannot be modified or forged
- CHERI C — subset of C that runs on capability hardware

---

## **Pointer and const — Every Combination**

- `int* p` — pointer to int — can change both pointer and value
- `const int* p` — pointer to const int — can change pointer, not value
- `int const* p` — same as above — east const style
- `int* const p` — const pointer to int — cannot change pointer, can change value
- `const int* const p` — cannot change either
- `int** p` — pointer to pointer to int
- `const int** p` — pointer to pointer to const int
- `int* const* p` — pointer to const pointer to int
- `int** const p` — const pointer to pointer to int
- `const int* const* const p` — all const
- Passing `int*` where `const int*` expected — implicit conversion OK
- Passing `int**` where `const int**` expected — NOT safe, requires cast
- Why `int**` to `const int**` is unsafe — classic C FAQ question
- `const` casting away — `(int*)const_ptr` — UB to modify through result
- `const_cast` equivalent in C — explicit cast, programmer responsibility

---

## **Pointer in Structs — Deep Patterns**

- Self-referential struct — `struct Node { int val; struct Node* next; }`
- Opaque pointer — `struct Impl; typedef struct Impl* Handle;`
- Pimpl in C — hide implementation details
- Function pointer in struct — vtable simulation
- `struct Ops { int (*read)(void*); void (*write)(void*, int); }`
- Simulating inheritance — first member is base struct
- `struct Base { struct Ops* ops; };`
- `struct Derived { struct Base base; int extra; }`
- Casting `Derived*` to `Base*` — valid because first member
- Flexible array member pointer — `struct { int n; int* data; }` vs `struct { int n; int data[]; }`
- Pointer vs flexible array — pointer requires separate allocation
- Sentinel pointer — special pointer value as terminator
- `(void*)-1` or `(void*)1` — sometimes used as sentinel (platform specific)

---

## **Pointer Tricks & Patterns — Advanced**

- XOR linked list — store `prev XOR next` in single pointer
- `node->both = (uintptr_t)prev ^ (uintptr_t)next`
- Traverse — `next = (node*)(prev ^ node->both)`
- Saves one pointer per node — cache friendly
- Technically UB in C standard — XOR of pointers not defined
- Tagged pointers — use low bits of aligned pointer for flags
- `int*` aligned to 4 bytes — low 2 bits always zero
- Store tag in low bits — `ptr = (int*)((uintptr_t)real_ptr | tag)`
- Extract pointer — `real_ptr = (int*)((uintptr_t)ptr & ~3)`
- Used in — garbage collectors, lock-free data structures
- LLVM uses tagged pointers extensively
- Intrusive data structures — embed pointers inside user data
- Linux kernel `list_head` — embed in every listable struct
- `container_of` to get back to enclosing struct
- Pointer compression — store offset instead of full pointer
- 32-bit offset from base — 4GB addressable with 4 bytes
- Used in JVM, V8, LuaJIT

---

## **Pointer and Memory Allocation — Deep**

- `malloc(0)` — returns non-null unique pointer or null — implementation defined
- `malloc(0)` result — cannot be dereferenced
- `free(malloc(0))` — always valid
- `free(NULL)` — always valid, no-op
- `realloc(NULL, size)` — same as `malloc(size)`
- `realloc(ptr, 0)` — implementation defined — may free and return NULL or unique pointer
- `realloc` failure — returns NULL, original pointer STILL VALID
- Common bug — `ptr = realloc(ptr, size)` — on failure, ptr = NULL, original lost
- Correct pattern — `tmp = realloc(ptr, size); if(tmp) ptr = tmp;`
- `calloc(n, size)` — checks for overflow in `n * size`
- `malloc(n * size)` — no overflow check — use `calloc` or check manually
- `posix_memalign(&ptr, align, size)` — aligned allocation
- `aligned_alloc(align, size)` — C11 standard aligned allocation
- `free` on `aligned_alloc` result — use regular `free`
- Memory from different allocators — cannot mix free/delete
- Allocator internals — metadata before allocation (typically)
- Chunk header — size, prev_size, flags
- Off-by-one into chunk header — corrupts allocator metadata

---

## **Pointer and Const Correctness — Discipline**

- Always use `const T*` when not modifying pointee
- Propagates const correctness through call chains
- `strlen` takes `const char*` — because it doesn't modify
- Returning `const char*` to string literal — prevents modification
- `const` in API design — communicate ownership and modification intent
- Stripping const — `(char*)const_ptr` — code smell, often UB
- `strtok` takes `char*` not `const char*` — modifies string — cannot use on literal
- `strtok_r` — reentrant, still modifies string
- Const and pointer to pointer propagation rules — one of C's gotchas

---

## **Near/Far/Huge Pointers — Historical**

- 8086 segmented memory — 16-bit segment + 16-bit offset
- Near pointer — 16-bit offset only, within current segment
- Far pointer — 32-bit, segment + offset, can address any location
- Huge pointer — normalized far pointer, no aliasing issues
- `__near`, `__far`, `__huge` — compiler keywords (Turbo C, Watcom)
- Far pointer arithmetic — offset wraps within segment (far)
- Huge pointer arithmetic — renormalizes across segments
- Modern x86-64 — flat memory model, all pointers same size
- Still relevant — embedded systems with segmented memory
- MSP430X — extended addressing, 20-bit pointers
- PIC microcontrollers — separate code and data pointers (Harvard)

---

## **Pointer Internals on x86-64**

- Virtual address — 48 bits used (256TB), canonical form
- Bits 63-48 — must be sign extension of bit 47
- Non-canonical address — causes general protection fault
- Kernel space — bits 63-48 all 1s — high half
- User space — bits 63-48 all 0s — low half
- Pointer tagging — bits 63-48 unused in user space
- ARM MTE — Memory Tagging Extension — top byte used for tag
- ARM TBI — Top Byte Ignore — hardware ignores top byte
- SPARC ADI — Application Data Integrity
- Future x86 — 5-level paging, 57-bit addresses
- LA57 — 128 PB virtual address space
- Pointer in register — just a 64-bit value in general purpose register
- `lea` instruction — compute address without memory access
- Pointer chase — `mov rax, [rax]` — load value at address in rax

---

## **Pointer Safety Extensions**

- Bounds checking — not in standard C
- `-fbounds-checking` — GCC experimental, rarely used
- SafeStack — separate safe and unsafe stacks
- SoftBound+CETS — research, adds bounds metadata to pointers
- CCured — research, inferring pointer kinds
- Checked C — Microsoft research extension, `_Ptr<T>`, `_Array_ptr<T>`
- `_Ptr<T>` — single object pointer, null checked
- `_Array_ptr<T>` — array pointer with bounds
- `_Nt_array_ptr<T>` — null terminated array pointer
- Rust borrows — ownership prevents dangling (different language but relevant comparison)
- Cyclone — safe C dialect, regions and tagged unions
- `__counted_by(n)` — Clang attribute for bounds
- `__ended_by(end)` — Clang attribute
- `-fbounds-safety` — Clang experimental flag (Apple silicon)

---

## **Pointer Anti-patterns — Every One**

- Returning pointer to local variable — dangling
- Storing pointer to stack in longer-lived structure
- Not checking `malloc` return — null dereference
- Losing original pointer — memory leak
- Double free — from two owners of same pointer
- Using pointer after `realloc` — may be dangling
- Casting `int*` to `char(*)[4]` — aliasing violation
- Assuming pointer size equals `int` size — 64-bit bug
- Using `%d` to print pointer — use `%p`
- Comparing function pointers from `dlsym` directly — may not work across shared libs
- Pointer arithmetic on `void*` — non-standard
- Ignoring pointer alignment — misaligned dereference UB
- Shallow copy of struct with pointer members — aliasing ownership
- `memset(ptr, 0, sizeof ptr)` — zeros the pointer variable, not the memory it points to — use `sizeof *ptr` or the actual size
- Null terminator missing — `strncpy` trap
- `sizeof` array decayed to pointer — classic size loss bug

---

## **Most Impressive Interview Questions**

- What is the difference between `int *a[5]` and `int (*a)[5]`?
- Why is converting `int**` to `const int**` unsafe?
- What does `restrict` mean and what UB does violating it cause?
- Explain pointer provenance with a concrete example
- What is a tagged pointer and is it defined behavior?
- Why is `void*` arithmetic undefined in C standard?
- What is the difference between null pointer and pointer to address 0?
- Can two pointers be equal but not interchangeable?
- Why can `char*` alias any pointer type?
- What is container_of and how does it work?
- Explain XOR linked list and its UB
- What happens to a pointer after `realloc` succeeds?
- What is effective type and how does it affect pointer casts?
- How do you correctly implement type punning in C?
- What is `ptrdiff_t` and when can pointer subtraction overflow it?
- Why is `malloc(0)` implementation defined?
- Explain function pointer calling convention — what makes wrong-type call UB?
- What is pointer aliasing and how does compiler exploit it?
- What are near and far pointers?
- How does CHERI enforce pointer safety in hardware?

---

At the **deepest level**, pointers in C are not just "addresses" — they are **typed, provenanced, aligned, aliasing-restricted, lifetime-bounded** objects that interact with the **compiler's optimizer, the hardware's memory model, and the OS's virtual memory system** simultaneously. Mastering all these dimensions is what makes a true C systems expert.


Here is the **deepest possible dive into bitwise operations in C**:

---

## **Fundamentals — Exact Standard Rules**

- Bitwise operators — `&`, `|`, `^`, `~`, `<<`, `>>`
- Operate on integer types only — not float, not pointer
- Integer promotions applied first — `char` and `short` promoted to `int`
- `~` on `unsigned char` — result is `int` not `unsigned char`
- `unsigned char c = 0xFF; ~c` — gives `0xFFFFFF00` not `0x00` on 32-bit int
- Bitwise vs logical — `&` vs `&&`, `|` vs `||`
- `&` and `|` — no short circuit evaluation
- `&&` and `||` — short circuit, sequence point
- Bitwise on signed integers — implementation defined for some operations
- `>>` on negative signed integer — implementation defined (arithmetic or logical shift)
- `<<` on negative signed integer — UB
- `<<` producing value not representable in result type — UB
- C23 — finally defines `>>` on signed as arithmetic shift
- All bitwise on unsigned — fully defined, well specified
- Recommendation — always use unsigned for bitwise operations

---

## **Representation of Integers — Deep**

- Two's complement — modern universal representation
- C99/C11 — allowed ones' complement and sign-magnitude
- C23 — mandates two's complement for signed integers
- Two's complement — negate by invert all bits then add 1
- `~x + 1 == -x` — true for two's complement
- `-INT_MIN == INT_MIN` — overflow, UB for signed
- `-(unsigned)INT_MIN` — well defined, gives correct positive value
- Ones' complement — negate by inverting all bits
- Ones' complement — has negative zero (`-0`)
- Sign-magnitude — MSB is sign bit, rest is magnitude
- Sign-magnitude — also has negative zero
- Two's complement range — `-2^(n-1)` to `2^(n-1) - 1`
- Asymmetric range — one more negative than positive
- `INT_MIN = -2147483648`, `INT_MAX = 2147483647` for 32-bit
- `UINT_MAX = 4294967295` for 32-bit
- `CHAR_BIT` — bits per byte, minimum 8, may be 16 or 32 on DSPs
- All arithmetic ultimately operates on these bit patterns

---

## **Shift Operations — Every Rule**

- `x << n` — shift left by n bits
- `x >> n` — shift right by n bits
- Left shift — fills vacated bits with zero
- Right shift on unsigned — fills with zero (logical shift)
- Right shift on signed — implementation defined (C99/C11)
- Right shift on signed — arithmetic shift on all modern platforms
- Arithmetic right shift — fills with sign bit
- Logical right shift — fills with zero
- Shift by negative amount — UB
- Shift by amount >= bit width — UB
- `1 << 31` on 32-bit int — UB (signed overflow)
- `1U << 31` — defined, gives `0x80000000`
- `1ULL << 63` — defined, gives `0x8000000000000000`
- Shift and promotion — `(unsigned char)x << 8` — promoted to int first
- Result type of shift — type of left operand after promotion
- `uint16_t x = 0xFFFF; x << 1` — result is `int`, may be negative!
- Correct — `(uint32_t)x << 1` or `(unsigned)x << 1`
- Power of 2 multiply — `x << n` same as `x * 2^n` for non-negative
- Power of 2 divide — `x >> n` same as `x / 2^n` for unsigned
- Signed right shift divide — rounds toward negative infinity, not zero
- `-7 >> 1` — gives `-4` not `-3` (arithmetic shift)
- `-7 / 2` — gives `-3` (truncates toward zero)
- Difference matters — use division for arithmetic, shift for bit manipulation

---

## **AND Operation — Deep Patterns**

- `a & b` — bit is 1 only if both bits are 1
- Test bit n — `(x >> n) & 1` or `x & (1U << n)`
- Clear bit n — `x & ~(1U << n)`
- Mask lower n bits — `x & ((1U << n) - 1)`
- Mask lower n bits — `x & (n_bit_mask)` where mask has n ones
- Check if power of 2 — `x > 0 && (x & (x-1)) == 0`
- Clear lowest set bit — `x & (x - 1)`
- Isolate lowest set bit — `x & (-x)` or `x & (~x + 1)`
- `x & (-x)` — works because `-x` in two's complement flips bits and adds 1
- Round down to multiple of power of 2 — `x & ~(align - 1)`
- `ptr & ~63` — align down to 64-byte boundary
- Check if all bits in mask set — `(x & mask) == mask`
- Check if any bit in mask set — `(x & mask) != 0`
- Check if no bit in mask set — `(x & mask) == 0`
- Extract bit field — `(x >> start) & ((1U << len) - 1)`
- AND to check even/odd — `x & 1` — 0 if even, 1 if odd
- AND with 0 — clears all bits
- AND with all ones — identity operation

---

## **OR Operation — Deep Patterns**

- `a | b` — bit is 1 if either bit is 1
- Set bit n — `x | (1U << n)`
- Set multiple bits — `x | mask`
- OR with 0 — identity operation
- OR with all ones — sets all bits
- Combine bit fields — `(field1 << offset1) | (field2 << offset2)`
- Build flags — `FLAG_A | FLAG_B | FLAG_C`
- Convert lowercase to uppercase — `c & ~0x20` (ASCII only)
- Convert uppercase to lowercase — `c | 0x20` (ASCII only)
- ASCII letter difference — bit 5 (0x20) — upper=0, lower=1
- OR cannot clear bits — only set or leave unchanged
- Idempotent — `x | x == x`

---

## **XOR Operation — Deep Patterns**

- `a ^ b` — bit is 1 if bits differ
- Toggle bit n — `x ^ (1U << n)`
- Toggle multiple bits — `x ^ mask`
- XOR with 0 — identity
- XOR with all ones — bitwise NOT
- XOR with self — `x ^ x == 0` — always zero
- Swap without temp — `a ^= b; b ^= a; a ^= b`
- Swap proof — `a1=a^b, b1=a1^b=a^b^b=a, a2=a1^b1=a^b^a=b`
- Swap pitfall — `a ^= a` if a and b are same variable — gives 0
- Must check `&a != &b` before XOR swap
- XOR swap vs temp — temp is faster on modern CPUs (no dependency chain)
- XOR linked list — `node->both = prev_addr ^ next_addr`
- Find missing number — XOR all 1..n and all array elements
- Find single non-duplicate — XOR all elements, pairs cancel
- Find two non-duplicates — XOR all, split by set bit, XOR each group
- Parity — XOR all bits of a number, 1 if odd number of set bits
- `x ^ y` — bits that differ between x and y
- Detect changed bits — `old_state ^ new_state`
- Conditional toggle — `x ^ (condition ? mask : 0)`
- XOR encryption — simple Vernam cipher, `plaintext ^ key`
- XOR checksum — quick data integrity check
- Gray code — `n ^ (n >> 1)` converts binary to Gray code
- Gray code to binary — iterative XOR process

---

## **NOT Operation — Deep**

- `~x` — flip all bits
- `~0` — all ones, value is `-1` for signed, `UINT_MAX` for unsigned
- `~0U` — all ones unsigned — portable all-ones mask
- `~0ULL` — 64-bit all ones
- `~x + 1 == -x` — two's complement negation
- `~x == -x - 1` — identity
- `~(x-1) == -x` — alternative negation form
- NOT is not logical NOT — `~0` is `0xFFFFFFFF` not `0`
- `!x` is logical NOT — gives 0 or 1
- `~` operates on all bits — `!` gives boolean result
- Complement mask — `~mask` flips which bits are selected
- `x & ~mask` — clear bits in mask
- NOT and promotion — `~(unsigned char)x` promotes to int first

---

## **Bit Fields in Structs — Deep**

- `struct { unsigned int flag : 1; unsigned int value : 7; }`
- Width specified after colon
- Cannot take address of bit field
- Bit field width 0 — forces next field to new storage unit
- Unnamed bit field — padding
- `unsigned int x : 1` — 0 or 1
- `int x : 1` — -1 or 0 (signed, only 1 bit for value + sign)
- `signed int x : 2` — -2, -1, 0, 1
- Storage order — implementation defined (could be LSB or MSB first)
- Packing across storage units — implementation defined
- Bit fields not portable across platforms — different byte order, different packing
- Bit field spanning storage unit boundary — implementation defined
- `_Bool` bit field — 0 or 1, width must be 1
- Cannot use `volatile` bit field portably — implementation defined behavior
- Bit fields in union — unusual but valid
- Hardware register mapping — tempting but not portable
- Better alternative — explicit masks and shifts for hardware registers
- Bit field size — `sizeof` not applicable to bit fields, `sizeof` struct includes padding

---

## **Common Bit Manipulation Algorithms**

### **Count Set Bits (Popcount)**
- Naive — loop checking each bit — O(n) where n is bit width
- Brian Kernighan — `while(x) { count++; x &= x-1; }` — O(set bits)
- Lookup table — 256-entry table for 8-bit chunks
- Parallel bit counting — SWAR algorithm
- `x = x - ((x >> 1) & 0x55555555)` — pairs
- `x = (x & 0x33333333) + ((x >> 2) & 0x33333333)` — nibbles
- `x = (x + (x >> 4)) & 0x0F0F0F0F` — bytes
- `(x * 0x01010101) >> 24` — sum bytes via multiply
- `__builtin_popcount(x)` — GCC, maps to hardware instruction
- `__builtin_popcountll(x)` — 64-bit version
- x86 `POPCNT` instruction — single cycle
- C23 `stdc_count_ones(x)` — standard function

### **Count Leading Zeros (CLZ)**
- Naive — loop from MSB
- Binary search method — halving
- `__builtin_clz(x)` — GCC, maps to `BSR`/`LZCNT` on x86
- `__builtin_clzll(x)` — 64-bit
- UB if x == 0 — must check first
- `__builtin_clz(0)` — undefined behavior
- C23 `stdc_leading_zeros(x)` — handles zero
- Used for — floor log2, normalization, finding highest set bit

### **Count Trailing Zeros (CTZ)**
- `__builtin_ctz(x)` — GCC
- `__builtin_ctzll(x)` — 64-bit
- UB if x == 0
- `__builtin_ctz(x & -x)` — find lowest set bit position
- C23 `stdc_trailing_zeros(x)`
- x86 `BSF` / `TZCNT` instruction
- Used for — finding alignment, iterating set bits

### **Bit Reversal**
- Naive — loop shifting out LSB and shifting into result
- Swap nibbles, then bytes, then words — parallel
- `x = ((x & 0xF0F0F0F0) >> 4) | ((x & 0x0F0F0F0F) << 4)`
- `x = ((x & 0xFF00FF00) >> 8) | ((x & 0x00FF00FF) << 8)`
- `x = (x >> 16) | (x << 16)`
- Lookup table — 256-entry reverse table
- x86 no single instruction for bit reversal (unlike byte reversal)
- ARM `RBIT` instruction — single cycle bit reversal
- `__builtin_bitreverse32` — Clang extension

### **Next Power of Two**
- Round up to next power of 2
- `x--; x|=x>>1; x|=x>>2; x|=x>>4; x|=x>>8; x|=x>>16; x++;`
- Works by filling all bits below highest set bit, then adding 1
- 64-bit version needs `x|=x>>32` added
- `1U << (32 - __builtin_clz(x-1))` — using CLZ
- Edge case — x=0 gives 0, x=1 gives 1

### **Previous Power of Two**
- Round down to previous power of 2
- `1U << (31 - __builtin_clz(x))` for x > 0
- Or fill bits then shift: `x|=x>>1; x|=x>>2; x|=x>>4; x|=x>>8; x|=x>>16; x = x - (x>>1);`

### **Log2 Floor**
- `31 - __builtin_clz(x)` for 32-bit x > 0
- `63 - __builtin_clzll(x)` for 64-bit
- Used for — hash table sizing, tree height

### **Parity**
- XOR all bits — 1 if odd number of set bits
- `x ^= x >> 16; x ^= x >> 8; x ^= x >> 4; x ^= x >> 2; x ^= x >> 1; result = x & 1`
- `__builtin_parity(x)` — GCC
- Used for — error detection, Hamming codes

### **Rotate Left/Right**
- `rotl(x, n) = (x << n) | (x >> (32 - n))`
- Must handle n=0 — shift by 32 is UB
- Safe version — `n &= 31; if(n) return (x << n) | (x >> (32 - n));`
- C23 `stdc_rotate_left` / `stdc_rotate_right` — standard
- Compiler recognizes rotate pattern — emits `ROL`/`ROR` instruction
- `__builtin_rotateleft32` — Clang extension
- Used in — hash functions, cryptography (AES, SHA)

---

## **Bit Tricks — Rare & Clever**

- Sign of integer — `(x >> 31)` — 0 if positive, -1 if negative (arithmetic shift)
- Absolute value — `mask = x >> 31; (x + mask) ^ mask`
- `(x ^ mask) - mask` — alternative
- No branch absolute value — avoids misprediction penalty
- Min without branch — `y ^ ((x ^ y) & -(x < y))`
- Max without branch — `x ^ ((x ^ y) & -(x < y))`
- `-1` as mask — using sign bit to create all-ones mask
- Conditional negate — `(x ^ -flag) + flag` where flag is 0 or 1
- Extend sign bit — from n-bit to 32-bit
- `(x << (32-n)) >> (32-n)` — shift up then arithmetic shift down
- Or — `struct { signed int x : n; } s; s.x = raw; result = s.x`
- Merge two values — `(a & ~mask) | (b & mask)`
- Swap nibbles — `((x & 0x0F) << 4) | ((x & 0xF0) >> 4)`
- Interleave bits (Morton code) — combine x and y coords into Z-order
- Deinterleave bits — extract x and y from Morton code
- Saturating add — add without overflow, clamp to max
- `unsigned sat_add(unsigned a, unsigned b) { unsigned r = a+b; r |= -(r < a); return r; }`
- Check same sign — `(x ^ y) >= 0` — MSB is 0 if same sign
- Check opposite sign — `(x ^ y) < 0`
- Turn off rightmost string of 1s — `x & (x+1)`
- Turn on rightmost string of 0s — `x | (x-1)`
- `x & (x-1)` — clears rightmost 1 bit
- `x | (x+1)` — sets rightmost 0 bit
- `x ^ (x-1)` — mask from LSB to rightmost 1 bit inclusive
- `x ^ (x+1)` — mask from LSB to rightmost 0 bit inclusive

---

## **Bit Manipulation for Data Structures**

### **Bitset / Bit Array**
- Store N booleans in N/64 64-bit integers
- Index calculation — `word = index / 64`, `bit = index % 64`
- Faster — `word = index >> 6`, `bit = index & 63`
- Set bit — `arr[word] |= (1ULL << bit)`
- Clear bit — `arr[word] &= ~(1ULL << bit)`
- Test bit — `(arr[word] >> bit) & 1`
- Toggle bit — `arr[word] ^= (1ULL << bit)`
- Count all set bits — sum `__builtin_popcountll` over all words
- Find first set — iterate words, `__builtin_ctzll` on first nonzero word
- AND two bitsets — element-wise AND — intersection
- OR two bitsets — element-wise OR — union
- XOR two bitsets — element-wise XOR — symmetric difference
- NOT bitset — complement each word, mask last word
- Iterating set bits — `while(word) { bit = __builtin_ctzll(word); process(bit); word &= word-1; }`

### **Bloom Filter**
- Probabilistic set membership
- K hash functions map element to K bit positions
- Set — set all K bits
- Test — check all K bits set
- False positives possible — false negatives impossible
- Bit manipulation core — all operations are bitset operations
- Optimal K — `(m/n) * ln2` where m=bits, n=elements
- Counting bloom filter — use nibbles instead of bits

### **Trie with Bitmaps**
- HAT-trie, HAMT — use popcount for indexing
- Popcount-based index — count set bits below position
- `index = __builtin_popcount(bitmap & ((1U << pos) - 1))`
- Space-efficient sparse arrays

---

## **Bit Manipulation in Cryptography**

- XOR — fundamental cipher operation
- Feistel network — XOR with round keys
- S-box — substitution via lookup table
- P-box — permutation via bit manipulation
- AES MixColumns — operations in GF(2^8)
- SHA-256 uses — `ROTR`, `SHR`, `Ch`, `Maj`, `Sigma`
- `Ch(x,y,z) = (x & y) ^ (~x & z)` — choose
- `Maj(x,y,z) = (x & y) ^ (x & z) ^ (y & z)` — majority
- Multiply in GF(2^8) — xtime function — `(x << 1) ^ (x & 0x80 ? 0x1b : 0)`
- Carry-less multiplication — XOR instead of addition
- `PCLMULQDQ` — x86 instruction for GF multiplication
- Bit slicing — implement cipher operating on multiple blocks simultaneously
- SIMD bit manipulation — process 256 bits at once with AVX2

---

## **Endianness & Byte Order — Deep**

- Little endian — LSB at lowest address — x86, ARM (default)
- Big endian — MSB at lowest address — network byte order, PowerPC
- Bi-endian — ARM, MIPS — can be either
- `int x = 0x12345678` — bytes in memory differ by endianness
- Little endian — `78 56 34 12`
- Big endian — `12 34 56 78`
- Detecting endianness at runtime
- `union { uint32_t i; uint8_t b[4]; } u; u.i = 1; u.b[0] == 1` — little endian
- Byte swap 16-bit — `((x & 0xFF) << 8) | ((x >> 8) & 0xFF)`
- Byte swap 32-bit — `((x & 0xFF) << 24) | ((x & 0xFF00) << 8) | ((x >> 8) & 0xFF00) | ((x >> 24) & 0xFF)`
- `__builtin_bswap16`, `__builtin_bswap32`, `__builtin_bswap64` — GCC
- x86 `BSWAP` instruction — single cycle byte reversal
- Network byte order — big endian — `htonl`, `ntohl`, `htons`, `ntohs`
- `htobe32`, `le32toh` — Linux endian conversion macros
- `<endian.h>` — Linux, `<machine/endian.h>` — BSD
- Mixed endian — PDP-endian — `34 12 78 56` — rare
- Bit endianness — within byte, MSB first vs LSB first — matters for protocols
- CAN bus — big endian bit ordering for multi-byte fields

---

## **Floating Point Bit Manipulation**

- IEEE 754 single — 1 sign, 8 exponent, 23 mantissa
- IEEE 754 double — 1 sign, 11 exponent, 52 mantissa
- Sign bit — MSB
- Exponent — biased by 127 (float) or 1023 (double)
- Mantissa — implicit leading 1 (except denormals)
- Accessing bits — only via `memcpy` or union (C)
- `uint32_t bits; memcpy(&bits, &f, 4)` — legal type punning
- Fast inverse square root — `0x5f3759df` magic constant
- `i = 0x5f3759df - (i >> 1)` — Newton-Raphson approximation
- IEEE 754 properties that enable this trick
- Absolute value of float — clear sign bit — `bits & 0x7FFFFFFF`
- Negate float — toggle sign bit — `bits ^ 0x80000000`
- Copy sign — `(x & 0x7FFFFFFF) | (y & 0x80000000)`
- Check NaN — exponent all 1s, mantissa nonzero — `(bits & 0x7FFFFFFF) > 0x7F800000`
- Check infinity — exponent all 1s, mantissa zero — `(bits & 0x7FFFFFFF) == 0x7F800000`
- Check denormal — exponent all 0s — `(bits & 0x7F800000) == 0`
- Float comparison via integer — for positive floats, integer comparison gives same order
- NaN != NaN — only value not equal to itself
- `isnan(x)` — `x != x` also works but may be optimized away

---

## **SIMD Bit Operations**

- SSE2 — 128-bit registers — `_mm_and_si128`, `_mm_or_si128`, `_mm_xor_si128`
- AVX2 — 256-bit registers — `_mm256_and_si256`
- AVX-512 — 512-bit registers — `_mm512_and_si512`
- Bitwise NOT — no single instruction — XOR with all ones
- `_mm_andnot_si128(a, b)` — `~a & b` — AND NOT
- Mask registers — AVX-512 has dedicated k registers for masks
- `_mm_cmpeq_epi32` — compare 4 x 32-bit integers, result is mask
- Using mask for conditional — `_mm_blendv_epi8`
- POPCNT on SIMD — `_mm512_popcnt_epi64` — AVX-512 VPOPCNTDQ
- Bit manipulation throughput — 1 cycle latency, 0.33 cycle throughput on modern CPUs
- Vectorized bitset operations — process 256 bits per cycle with AVX2

---

## **Hardware Bit Instructions — x86**

- `AND`, `OR`, `XOR`, `NOT` — basic, 1 cycle
- `TEST` — AND without storing result, sets flags
- `BT` — bit test — `BT reg, bit_index` — sets CF
- `BTS` — bit test and set
- `BTR` — bit test and reset
- `BTC` — bit test and complement
- `BSF` — bit scan forward — find LSB position
- `BSR` — bit scan reverse — find MSB position
- `LZCNT` — leading zero count — defined for 0 input
- `TZCNT` — trailing zero count — defined for 0 input
- `POPCNT` — population count
- `ROL`/`ROR` — rotate left/right
- `RCL`/`RCR` — rotate through carry
- `SHL`/`SHR`/`SAR` — shift left, logical right, arithmetic right
- `SHLD`/`SHRD` — double precision shift
- `BEXTR` — bit field extract (BMI1)
- `BLSI` — extract lowest set bit — `x & -x` (BMI1)
- `BLSMSK` — mask up to lowest set bit — `x ^ (x-1)` (BMI1)
- `BLSR` — reset lowest set bit — `x & (x-1)` (BMI1)
- `ANDN` — `~a & b` (BMI1)
- `BZHI` — zero high bits (BMI2)
- `MULX` — multiply without affecting flags (BMI2)
- `PDEP` — parallel bits deposit (BMI2)
- `PEXT` — parallel bits extract (BMI2)
- `PDEP`/`PEXT` — scatter/gather bits according to mask

---

## **PDEP and PEXT — Underused Instructions**

- `PEXT(x, mask)` — extract bits from x at positions specified by mask
- `PDEP(x, mask)` — deposit bits from x into positions specified by mask
- `PEXT(0b11001010, 0b10110011)` — extracts bits 0,1,4,5,7 from x
- Compressing sparse bits to dense
- Decompressing dense bits to sparse positions
- Used in — chess engines (magic bitboards), data compression
- Simulating with software — `__builtin_ia32_pext_u32` / `_pext_u32`
- AMD Zen 2 and earlier — PDEP/PEXT are slow (microcode, 18 cycles)
- AMD Zen 3+ — fast PDEP/PEXT (3 cycles)
- Intel Haswell+ — fast (3 cycles)
- Check `CPUID` BMI2 flag before using

---

## **Bit Manipulation in Specific Domains**

### **Networking**
- IP address manipulation — bit shifting for subnet
- CIDR mask — `~0U << (32 - prefix_len)`
- Check if IP in subnet — `(ip & mask) == (network & mask)`
- Port number byte swapping — `htons(port)`
- TCP flags — SYN=0x02, ACK=0x10, FIN=0x01, RST=0x04
- `flags & TCP_SYN` — check SYN flag
- Ethernet frame type field — big endian

### **Embedded / Hardware Registers**
- Read-modify-write — `REG = (REG & ~FIELD_MASK) | (value << FIELD_OFFSET)`
- Set field macro — `SET_FIELD(reg, field, val)`
- Get field macro — `GET_FIELD(reg, field)`
- Status register — test individual bits for error flags
- Control register — set bits to enable features
- Interrupt enable register — each bit enables one interrupt
- GPIO — each bit is one pin
- `volatile uint32_t* const GPIO = (volatile uint32_t*)0x40020000`
- Atomic bit manipulation — needed to prevent race with ISR

### **Graphics**
- Pixel packing — RGBA in 32-bit integer
- `pixel = (r << 24) | (g << 16) | (b << 8) | a`
- Extract red — `(pixel >> 24) & 0xFF`
- Alpha blending — bit manipulation for fast approximation
- Color space conversion — shifting for fixed-point arithmetic
- Texture coordinates — fixed point with bit shifting

### **Chess Engines**
- Bitboard — 64-bit integer represents piece positions
- One bit per square — LSB is a1, MSB is h8
- `white_pawns & rank4` — pawns on rank 4
- Move generation — shift bitboards for attack patterns
- `pawns << 8` — single push (black perspective)
- `pawns << 16 & ~occupied` — double push
- `pawns << 7 & ~file_a` — capture left
- Kogge-Stone fill — flood fill using shifts
- Magic bitboards — PEXT/PDEP for sliding piece attacks

---

## **Portable Bit Manipulation — C23 stdbit.h**

- `stdc_leading_zeros(x)` — count leading zeros
- `stdc_leading_ones(x)` — count leading ones
- `stdc_trailing_zeros(x)` — count trailing zeros
- `stdc_trailing_ones(x)` — count trailing ones
- `stdc_first_leading_zero(x)` — position of first leading zero
- `stdc_first_leading_one(x)` — position of first leading one
- `stdc_first_trailing_zero(x)` — position of first trailing zero
- `stdc_first_trailing_one(x)` — position of first trailing one
- `stdc_count_zeros(x)` — count zero bits
- `stdc_count_ones(x)` — popcount
- `stdc_has_single_bit(x)` — true if exactly one bit set (power of 2)
- `stdc_bit_floor(x)` — largest power of 2 <= x
- `stdc_bit_ceil(x)` — smallest power of 2 >= x
- `stdc_bit_width(x)` — minimum bits to represent x
- `stdc_rotate_left(x, n)` — rotate left
- `stdc_rotate_right(x, n)` — rotate right
- All functions work on any unsigned type — generic via `_Generic`

---

## **Checked Integer Arithmetic — C23 stdckdint.h**

- `ckd_add(&result, a, b)` — returns true if overflow
- `ckd_sub(&result, a, b)` — checked subtraction
- `ckd_mul(&result, a, b)` — checked multiplication
- Works on any integer type — signed and unsigned
- `bool ckd_add(type1 *result, type2 a, type3 b)`
- No UB — detects overflow before it happens
- Replaces common overflow detection tricks
- `if (a > INT_MAX - b)` — old way, error prone
- GCC `__builtin_add_overflow(a, b, &result)` — pre-C23 version
- Used in — memory allocators, security-critical size calculations
- `calloc` internally checks `n * size` overflow

---

## **Bit Manipulation UB — Every Case**

- Left shift of negative value — UB
- Left shift by negative amount — UB
- Left shift by >= bit width — UB
- Left shift producing unrepresentable signed value — UB
- Right shift by negative amount — UB
- Right shift by >= bit width — UB
- Right shift of negative signed — implementation defined (not UB)
- Bitwise NOT of signed — defined (result may be negative)
- XOR/AND/OR of signed — defined (bitwise on representation)
- Promotion pitfall — `~(unsigned char)x` gives `int` not `unsigned char`
- Compiler exploits shift UB — can assume shift amount is valid
- `1 << -1` — UB, compiler may assume this never happens
- Safe shift macro — `#define LSHIFT(x,n) ((n) < sizeof(x)*CHAR_BIT ? (x)<<(n) : 0)`

---

## **Most Impressive Interview Questions**

- What is the result of `~0` and why?
- Why should bitwise operations use unsigned types?
- How does `x & (x-1)` clear the lowest set bit?
- How does `x & -x` isolate the lowest set bit?
- What is the difference between arithmetic and logical right shift?
- Is right shift on negative signed integer UB?
- How do you check if a number is a power of 2 in O(1)?
- Implement popcount without hardware instruction
- What is PDEP and PEXT?
- How does fast inverse square root work?
- What is a bitboard and how used in chess engines?
- How do you swap two integers without a temporary using XOR?
- What is the XOR swap pitfall?
- How do you extract a bit field of length L starting at bit S?
- What is `stdc_leading_zeros` and what does C23 add?
- What is gray code and how to convert?
- How do you detect integer overflow without UB?
- What is carry-less multiplication and where is it used?
- How do you iterate all set bits of an integer efficiently?
- What is false sharing and how does it relate to bitfields?
- Explain `SHLD`/`SHRD` instructions and when needed
- What happens to shift operations after integer promotion?
- Why is `uint16_t x = 0xFFFF; x << 1` potentially negative?

---

At the **deepest level**, bitwise operations in C connect **language semantics, hardware instructions, number theory, cryptography, and performance optimization** into one unified skill. A true expert does not just know the operators — they know **exactly what the hardware does, what the compiler generates, what is UB, and how to exploit bit patterns for maximum efficiency**.


Here is the **deepest possible dive into structures and unions in C**:

---

## **Structure Fundamentals — Exact Standard Rules**

- Struct — aggregate type containing sequence of members
- Members — accessed via `.` operator (direct) or `->` operator (pointer)
- Members stored in declaration order — guaranteed by standard
- No reordering by compiler — unlike local variables
- Each member at increasing address — guaranteed
- Struct itself has address of first member — `&s == (void*)&s.first_member`
- Struct size — at least sum of member sizes plus padding
- Struct alignment — alignment of most strictly aligned member
- Struct may have trailing padding — to satisfy alignment in arrays
- `sizeof(struct S)` — includes all padding
- Empty struct — `struct S {}` — UB in C standard, size 0 in GCC extension
- Struct with only zero-length array — implementation defined
- Struct tag — `struct Tag` — in separate namespace from variables
- Can have struct variable same name as struct tag — `struct foo foo;`
- Struct tag forward declaration — `struct Node;` — incomplete type
- Incomplete type — can declare pointer to it, cannot dereference or sizeof
- Completing incomplete type — provide full definition later in TU
- Self-referential struct — must use pointer to self — `struct Node { struct Node* next; }`
- Cannot contain instance of itself — would be infinite size
- Struct definition — creates new type
- Two structs with same members — different incompatible types
- Struct assignment — memberwise copy (shallow)
- Struct comparison — no `==` operator — must compare memberwise or `memcmp`
- `memcmp` on structs — unreliable due to padding bytes

---

## **Memory Layout — Deep**

- Member offset — `offsetof(struct S, member)` — from `<stddef.h>`
- `offsetof` — result type is `size_t`
- `offsetof` cannot be used on bit field members — compile error
- First member — always at offset 0
- Subsequent members — at offset satisfying their alignment
- Alignment of member — `_Alignof(member_type)`
- Padding — inserted before member if needed for alignment
- Example — `struct { char a; int b; }` — 3 bytes padding after `a`
- Total size — rounded up to multiple of struct alignment
- Trailing padding — `struct { int a; char b; }` — 3 bytes after `b`
- Trailing padding purpose — ensures correct alignment in arrays
- `struct S arr[2]` — `arr[1]` must be aligned — requires trailing padding
- Visualizing layout — draw each member with its size and alignment
- Platform differences — layout may differ across platforms
- ABI specifies layout — must be consistent across compilation units
- `__attribute__((packed))` — removes all padding — may cause misaligned access
- Misaligned access — UB, or slow, or fault depending on hardware
- ARM strict alignment — older ARM faults on misaligned access
- x86 — handles misaligned but slower

---

## **Padding — Every Rule**

- Internal padding — between members
- Trailing padding — after last member
- Why padding — hardware requires aligned access
- `int` on x86 — must be at 4-byte aligned address
- `double` — must be at 8-byte aligned address
- `struct { char a; double b; }` — 7 bytes padding after `a`
- `struct { double a; char b; }` — 7 bytes trailing padding
- Both are 16 bytes total
- `struct { char a; char b; int c; }` — 2 bytes padding between `b` and `c` — 8 bytes total
- `struct { int a; char b; char c; }` — no internal padding, 2 bytes trailing — 8 bytes total
- Reordering members — can reduce size significantly
- Sort members largest to smallest — minimizes padding
- `struct { double d; int i; char c; }` — 16 bytes
- `struct { char c; int i; double d; }` — 16 bytes (padding shifts)
- `struct { char c; double d; int i; }` — 24 bytes (most wasteful)
- Padding is not initialized — indeterminate value
- `memcmp` on structs with padding — may compare uninitialized padding
- Zeroing struct — `memset(&s, 0, sizeof s)` — zeros padding too
- Designated initializer — `struct S s = {.a = 1}` — unspecified members zero initialized, padding still indeterminate
- `= {0}` — zero initializes all members, padding still indeterminate

---

## **Alignment — Deep**

- `_Alignof(T)` — alignment requirement of type T
- `_Alignof(struct S)` — alignment of struct, equals max of member alignments
- `_Alignas(n)` — specify alignment of variable or member
- `_Alignas(16) struct S s` — align s to 16 bytes
- `_Alignas(16) int arr[4]` — SIMD-ready array
- `struct { _Alignas(16) char buf[16]; int x; }` — buf aligned to 16
- Over-aligned struct — alignment greater than `max_align_t`
- `max_align_t` — largest fundamental alignment (usually 8 or 16)
- `malloc` — returns memory aligned to `max_align_t`
- Over-aligned struct with malloc — need `aligned_alloc`
- `aligned_alloc(alignof(S), sizeof(S))` — correct allocation
- `posix_memalign` — POSIX alternative
- Alignment and arrays — array element must be aligned, so sizeof includes trailing padding
- Cache line alignment — `_Alignas(64)` — prevents false sharing
- Page alignment — `_Alignas(4096)` — for `mmap` or DMA

---

## **Struct Initialization — Every Form**

- Default initialization — `struct S s;` — indeterminate (automatic storage)
- Zero initialization — `struct S s = {0}` — all members zero
- Aggregate initialization — `struct S s = {1, 2, 3}` — in order
- Designated initializers (C99) — `struct S s = {.b = 2, .a = 1}`
- Designated initializer — any unspecified members zero initialized
- Designated initializer — order doesn't matter, can skip members
- Designated initializer — later overrides earlier for same member
- `struct S s = {.a = 1, .a = 2}` — valid, a = 2
- Nested designated initializer — `{.inner.x = 5}`
- Array member designated — `{.arr[2] = 7}`
- Compound literal — `(struct S){.a = 1, .b = 2}` — unnamed struct object
- Compound literal lifetime — automatic storage duration if in function
- Compound literal at file scope — static storage duration
- Compound literal is lvalue — can take address
- `&(struct S){.a = 1}` — valid, pointer to compound literal
- Passing compound literal to function — `f((struct S){1, 2})`
- Modifying compound literal — allowed (it's an lvalue, not const)
- `const struct S* p = &(const struct S){1, 2}` — const compound literal

---

## **Flexible Array Member — Deep**

- `struct S { int n; int data[]; }` — flexible array at end
- Flexible array — must be last member
- Struct must have at least one other member
- `sizeof(struct S)` — does not include flexible array, only up to it
- `sizeof` gives size as if flexible array has 0 elements
- Allocating — `malloc(sizeof(struct S) + n * sizeof(int))`
- Accessing — `s->data[i]` — valid for i < n
- Flexible array member in initializer — not allowed
- Copying struct with flexible array — `memcpy` with correct size
- Assignment of struct with FAM — copies only fixed part — UB if FAM accessed
- Nested struct with FAM — outer struct cannot contain inner struct with FAM (except as last member via pointer)
- FAM and `sizeof` — `sizeof s` gives fixed part only
- Old style — `int data[1]` at end — "struct hack" — UB but widespread
- FAM introduced in C99 — clean solution to struct hack
- FAM in C++ — not standard, but GCC/Clang support as extension

---

## **Bit Fields — Complete Deep Dive**

- `struct S { unsigned int flag : 1; unsigned int value : 7; }`
- Bit field width — after colon, must be constant expression
- Width 0 — forces next field to new storage unit
- Unnamed bit field — `unsigned int : 4` — padding
- Unnamed width 0 — `unsigned int : 0` — align to next storage unit
- Bit field types — `int`, `unsigned int`, `_Bool` — only standard guaranteed types
- `int` bit field signedness — implementation defined (may be signed or unsigned)
- Use `unsigned int` or `signed int` explicitly — not plain `int`
- `_Bool` bit field — 0 or 1, width must be 1 (or compiler may allow more)
- Bit field width > type width — constraint violation
- Cannot take address of bit field — `&s.bf` — compile error
- Cannot use bit field with `offsetof` — compile error
- `sizeof` not applicable to bit field expression
- Storage unit — usually `unsigned int` size (4 bytes)
- Bit fields within storage unit — layout is implementation defined
- LSB first or MSB first — implementation defined
- Bit field spanning two storage units — implementation defined (may or may not)
- Adjacent bit fields of same type — may be merged into one storage unit
- Adjacent bit fields of different types — implementation defined if merged
- `volatile` bit field — implementation defined behavior
- Atomic bit field — not directly supported
- Bit fields and endianness — interact in complex implementation-defined ways
- Portability — bit fields are not portable across platforms/compilers
- Use for — flags in struct, compact representation when portability not needed
- Avoid for — hardware register mapping, network protocols — use explicit masks instead

---

## **Struct and Functions**

- Passing struct by value — copies entire struct onto stack
- Large struct by value — expensive, prefer pointer
- Returning struct by value — compiler may use hidden pointer (RVO)
- NRVO — Named Return Value Optimization — eliminates copy
- ABI specifies when struct returned in registers vs memory
- System V AMD64 ABI — struct <= 16 bytes may be in registers
- Struct with 2 ints — returned in RAX:RDX
- Struct with double — returned in XMM0
- Struct > 16 bytes — caller allocates, passes hidden pointer
- `volatile struct` — all accesses treated as volatile
- `const struct` — all members treated as const
- Function returning pointer to local struct — dangling pointer
- Function returning static local struct — valid, but not thread safe
- Struct in variadic function — default argument promotions don't apply to struct
- Passing struct to variadic function — behavior well defined but receiver must know type

---

## **Struct Pointers & Patterns**

### **Opaque Pointer / Handle Pattern**
- `typedef struct Impl* Handle`
- Forward declare struct in header — `struct Impl;`
- Full definition only in `.c` file
- Users cannot access members directly
- Hides implementation — ABI stable
- `Handle h = create(); use(h); destroy(h);`
- Cannot stack allocate — size unknown
- Pimpl idiom in C

### **Intrusive Lists**
- Embed `struct list_node` inside user struct
- `struct list_node { struct list_node *prev, *next; }`
- `struct MyData { int val; struct list_node list; }`
- `container_of(ptr, struct MyData, list)` — get back to MyData
- Linux kernel uses this extensively
- No separate allocation for list node
- Multiple lists — embed multiple `list_node` members

### **Vtable / Interface Pattern**
- `struct Animal_ops { void (*speak)(struct Animal*); void (*move)(struct Animal*); }`
- `struct Animal { struct Animal_ops* ops; }`
- `struct Dog { struct Animal base; char name[32]; }`
- `animal->ops->speak(animal)` — polymorphic call
- vtable shared among all instances of same type
- Static initialization of ops — `static struct Animal_ops dog_ops = { dog_speak, dog_move }`

### **Inheritance Simulation**
- First member is base struct
- `struct Dog { struct Animal base; ... }`
- `(struct Animal*)dog_ptr` — valid cast (first member rule)
- `(struct Dog*)animal_ptr` — valid if known to be Dog
- Single inheritance — first member technique
- Multiple inheritance — cannot use first member for both, need offsets
- `container_of` — for non-first-member base

### **Generic / Type-Erased Container**
- Store `void*` — lose type information
- Store with type tag — `enum Type type; void* data;`
- Tagged union — `union` + `enum` discriminant
- `struct Any { enum Type type; union { int i; double d; char* s; } val; }`

---

## **Union — Fundamentals & Standard Rules**

- Union — all members share same storage
- Size of union — size of largest member (plus possible padding)
- All members start at same address — address of union
- Only one member "active" at a time — standard
- Reading inactive member — defined in C (type punning), UB in C++
- Union alignment — alignment of most strictly aligned member
- Union initialization — only first member initialized by default
- `union U u = {1}` — initializes first member
- Designated initializer — `union U u = {.f = 1.0f}` — initializes f
- Union assignment — copies entire union (all bytes)
- Union size — includes padding if needed
- `union { char c; int i; }` — size 4 (sizeof int), alignment 4
- `union { char c[5]; int i; }` — size 8 (rounded to alignment 4)
- Accessing any member — reads from same memory, interprets differently
- Union in struct — anonymous or named
- Struct in union — named or anonymous

---

## **Union Type Punning — Deep & Complete**

- Type punning — accessing object as different type
- Via union — standard C allows this (C99 TC3, footnote in C11)
- Exact rule — "if the union contains a structure that shares a common initial sequence"... and reading through union is defined
- C11 6.5.2.3 footnote 95 — explicitly permits reading inactive union member
- GCC relies on this — strict aliasing does not apply to union members
- `union { float f; uint32_t u; } pun`
- `pun.f = 3.14f; uint32_t bits = pun.u;` — defined in C
- Via `memcpy` — always defined, both C and C++
- `memcpy(&u, &f, sizeof f)` — copies bytes, no aliasing violation
- Via pointer cast — `*(uint32_t*)&f` — strict aliasing violation, UB
- `char*` cast — `(unsigned char*)&f` — reading bytes always defined
- `std::bit_cast` (C++20) — C++ type punning solution
- Compiler generates same code for union punning and memcpy (with optimization)
- Do not use pointer cast for type punning — UB despite "working"

---

## **Common Initial Sequence — Deep**

- Two structs have common initial sequence if leading members have compatible types
- `struct A { int x; int y; double z; }`
- `struct B { int x; int y; char c; }`
- Common initial sequence — `int x; int y;` — first two members
- Union containing both — reading common initial members through either struct — defined
- `union { struct A a; struct B b; } u`
- `u.a.x = 5; u.b.x` — defined (common initial sequence)
- `u.a.z = 1.0; u.b.c` — NOT defined (beyond common initial sequence)
- Used in — generic programming in C, tagged unions
- Requires — union declaration visible at point of access
- Critical for — implementing polymorphism in C

---

## **Anonymous Struct and Union (C11)**

- Anonymous union — union without tag or variable name, inside struct
- Members of anonymous union accessible directly
- `struct S { int type; union { int i; float f; double d; }; }`
- Access — `s.i`, `s.f`, `s.d` directly — no union variable name needed
- Anonymous struct — struct without tag, inside union
- `union U { struct { int x; int y; }; float coords[2]; }`
- Access — `u.x`, `u.y` directly
- Anonymous struct/union cannot have tags or members with linkage
- GCC allows anonymous struct/union as extension in C99
- C11 made it standard
- Used for — tagged unions, variant types, coordinate structs

---

## **Tagged Union Pattern — Complete**

```
enum Type { TYPE_INT, TYPE_FLOAT, TYPE_STRING };

struct Value {
    enum Type type;
    union {
        int i;
        float f;
        char* s;
    };
};
```

- Discriminated union — tag tells which member is active
- Switch on tag before accessing
- Type safe if discipline maintained
- No automatic enforcement — programmer must maintain invariant
- Setting — `v.type = TYPE_INT; v.i = 42;`
- Getting — `if (v.type == TYPE_INT) use(v.i);`
- Pattern matching in C — verbose switch statements
- Variant type — implement `std::variant` in C
- Optional type — `struct Optional { bool has_value; union { T value; }; }`
- Result type — `struct Result { bool ok; union { T value; Error err; }; }`
- Nesting tagged unions — recursive variant types

---

## **Union Size & Padding — Every Rule**

- Union size — size of largest member
- Union size — rounded up to alignment
- `union { char c; int i; }` — size 4 (largest is int, align 4)
- `union { char c[3]; int i; }` — size 4
- `union { char c[5]; int i; }` — size 8 (5 < 8, round up to multiple of 4 = 8)
- `union { char c[6]; double d; }` — size 8 (6 < 8, align 8, round to 8)
- `union { char c[9]; double d; }` — size 16 (9 < 16, align 8, round to 16)
- Union with struct member — struct brings its own padding
- `union { struct { char a; int b; } s; char c[8]; }` — struct is 8 bytes, char[8] is 8 bytes, union is 8
- Padding within union member structs — present
- Union itself has no internal padding concept — all members at offset 0
- Trailing padding in union — to satisfy alignment

---

## **Union and Endianness**

- Classic endianness check
```c
union { uint32_t i; uint8_t b[4]; } u;
u.i = 0x01020304;
if (u.b[0] == 0x01) /* big endian */
else /* little endian */
```
- Reading bytes of integer through char array member — defined
- `uint8_t` member array — inspect any byte
- Writing through one member, reading byte-by-byte — defined
- Used in — network protocol implementations, serialization
- Danger — results differ on big vs little endian platforms
- Must account for endianness in cross-platform code

---

## **Struct Hacks & Historical Patterns**

### **Struct Hack (Pre-C99)**
- `struct S { int n; int data[1]; }` — last member array of 1
- Allocate extra — `malloc(sizeof(S) + (n-1)*sizeof(int))`
- Access `s->data[i]` for i >= 1 — technically UB
- Widely used before C99 flexible array members
- GCC supports with `-fms-extensions`
- Replace with proper FAM in C99+

### **Zero-Length Array (GCC Extension)**
- `struct S { int n; int data[0]; }` — GCC only
- Not standard C
- `sizeof` gives size without array
- Used same as FAM
- Prefer standard FAM `int data[]` in C99+

### **Container_of Macro**
```c
#define container_of(ptr, type, member) \
    ((type*)((char*)(ptr) - offsetof(type, member)))
```
- Get pointer to containing struct from member pointer
- `char*` cast — arithmetic on byte level
- `offsetof` — compile time constant
- Defined behavior — pointer arithmetic within object
- Linux kernel — used everywhere
- `list_entry`, `hlist_entry` — wrappers in kernel

### **Intrusive Red-Black Tree (Linux rbtree)**
- `struct rb_node { ulong rb_parent_color; struct rb_node *rb_right, *rb_left; }`
- `rb_parent_color` — stores parent pointer AND color in low bit (tagged pointer)
- Color in bit 0 — red=0, black=1 (pointer aligned to at least 4 bytes)
- Extract parent — `rb_parent_color & ~3`
- Extract color — `rb_parent_color & 1`
- Space efficient — no separate color field

---

## **Struct and Cache Performance**

- Hot/cold splitting — separate frequently and rarely accessed members
- Hot struct — `struct S_hot { int frequently_used1; int frequently_used2; }`
- Cold struct — `struct S_cold { char rarely_used[256]; }`
- Combined — `struct S { struct S_hot hot; struct S_cold* cold; }`
- Array of Structs (AoS) vs Struct of Arrays (SoA)
- AoS — `struct Point { float x, y, z; } points[N]`
- SoA — `struct Points { float x[N], y[N], z[N]; }`
- SIMD prefers SoA — process N x values at once
- Cache locality prefers AoS — all data for one point together
- False sharing — two threads accessing different members of same struct
- `_Alignas(64)` — pad struct to cache line to prevent false sharing
- Padding between hot members accessed by different threads
```c
struct Counter {
    _Alignas(64) long count1; /* thread 1 */
    _Alignas(64) long count2; /* thread 2 */
};
```
- Member ordering — most accessed members first (cache line)
- Prefetching struct members — `__builtin_prefetch(&s->next_member)`

---

## **Struct Serialization & Deserialization**

- Cannot `fwrite` struct directly across platforms — padding, endianness
- Must serialize field by field
- Or use packed struct with explicit endianness conversion
- `__attribute__((packed))` — removes padding for wire format
- Still need endianness conversion — `htonl`, `ntohl`
- Protocol buffer style — field tag + length + value
- XDR — External Data Representation — POSIX standard
- ASN.1 — telecom standard
- `memcpy` into buffer — portable way
- Avoid pointer members in serialized structs — meaningless across processes
- Versioning — add new members at end, check size
- Magic number + version — first members for format detection

---

## **Struct Copying — Deep**

- Assignment — `s1 = s2` — shallow copy, copies all bytes including padding
- `memcpy(&s1, &s2, sizeof s1)` — same effect
- Padding bytes — copied (whatever values they have)
- Pointer members — copied (addresses, not pointed-to data)
- Array members — copied entirely
- Const members — cannot assign to struct with const member after initialization
- `volatile` struct assignment — reads/writes all members as volatile
- Partial copy — `memcpy` with `offsetof` to copy only certain members
- Deep copy — must copy each pointer member separately
- Clone function pattern — `struct S* clone(const struct S* src)`
- Returning struct from function — may be optimized by compiler (RVO/NRVO)
- Passing struct by value to function — full copy pushed onto stack

---

## **Struct Comparison — Deep**

- No `==` operator for structs
- `memcmp(&s1, &s2, sizeof s1)` — unreliable (padding)
- Zero padding first — `memset` before setting members — then `memcmp` works
- Or — `(struct S){0}` then fill members — zero initializes padding
- Correct comparison — compare field by field
- Pointer members — compare addresses or compare pointed-to data?
- String members — `strcmp` not `==`
- Floating point members — `==` may fail for NaN
- Generating comparison function — tedious, error prone
- Consider using `{0}` initialization always — then memcmp is reliable
- Sorting structs — `qsort` with comparison function on key members

---

## **Union in Embedded Systems**

- Hardware register as union
```c
union StatusReg {
    uint32_t raw;
    struct {
        uint32_t ready : 1;
        uint32_t error : 3;
        uint32_t mode  : 4;
        uint32_t data  : 24;
    } bits;
};
volatile union StatusReg* reg = (volatile union StatusReg*)0x40001000;
```
- `reg->raw = value` — write all at once
- `reg->bits.ready` — read specific field
- Portability warning — bit field layout implementation defined
- Endianness affects which bits correspond to which fields
- Some teams use explicit masks instead for full portability
- Union gives convenient named access — tradeoff

---

## **Struct in Concurrent Programming**

- Struct accessed by multiple threads — need synchronization
- Mutex per struct — coarse grained
- Per-member atomic — fine grained
- `_Atomic int count` — member can be atomic
- Entire struct atomic — `_Atomic struct S` — all or nothing atomicity
- `_Atomic struct S` — may use lock internally (not always lock-free)
- `atomic_is_lock_free` — check at runtime
- Lock-free struct update — use CAS on pointer to struct
- Copy struct, modify copy, CAS pointer — compare-and-swap technique
- Read-copy-update (RCU) — for mostly read data
- False sharing in struct — `_Alignas(64)` padding between hot-per-thread members
- Immutable struct — const, shared among threads safely
- Writer copies entire struct — readers see old or new, never partial

---

## **Advanced Union Patterns**

### **Type-Safe Union with Accessor Macros**
```c
#define GET_INT(v)   (assert(v.type == T_INT), v.u.i)
#define GET_FLOAT(v) (assert(v.type == T_FLOAT), v.u.f)
```
- Runtime check on access
- Debug builds catch wrong access
- Release builds — `assert` disabled, same as direct access

### **Recursive Union (Tree Nodes)**
```c
struct Expr {
    enum { NUM, ADD, MUL } type;
    union {
        int num;
        struct { struct Expr* left; struct Expr* right; } binop;
    };
};
```
- Cannot embed struct Expr directly — infinite size
- Must use pointer for recursive reference
- Allocate nodes on heap

### **Union for Endian-Independent Access**
```c
union U16 {
    uint16_t val;
    struct { uint8_t lo, hi; } bytes; /* little endian assumption */
};
```
- Convenient byte access
- Platform specific — only correct on little endian

### **Union Implementing Optional**
```c
struct Optional_int {
    bool has_value;
    union { int value; char _dummy; };
};
```
- Avoid accessing value when has_value is false
- In C++ this is `std::optional<int>`

---

## **Struct Tricks — Rare & Clever**

### **Compile-Time Size Check**
```c
_Static_assert(sizeof(struct Packet) == 20, "Packet size wrong");
_Static_assert(offsetof(struct Packet, data) == 4, "Wrong offset");
```
- Ensure layout matches expected
- Catches accidental layout changes

### **Sentinel / Poison Member**
```c
struct Node {
    int val;
    struct Node* next;
    int _magic; /* always 0xDEADBEEF */
};
```
- Detect corruption — check magic before use
- Freed node — overwrite magic with different value

### **Intrusive Reference Counting**
```c
struct RefCounted {
    _Atomic int refcount;
    void (*destroy)(struct RefCounted*);
};
struct MyObj {
    struct RefCounted rc; /* first member */
    int data;
};
```
- `retain` / `release` via base pointer
- `container_of` to get full object

### **X-Macro for Struct Definition**
```c
#define FIELDS \
    X(int,   id)     \
    X(float, value)  \
    X(char*, name)

struct Record {
#define X(type, name) type name;
    FIELDS
#undef X
};
```
- Define struct and related functions from one list
- Generates struct, print function, compare function, etc.

### **Packed Struct for Protocol**
```c
struct __attribute__((packed)) EthernetHeader {
    uint8_t  dst[6];
    uint8_t  src[6];
    uint16_t ethertype;
};
_Static_assert(sizeof(struct EthernetHeader) == 14, "");
```
- Exactly 14 bytes — no padding
- Direct overlay on received packet
- Must handle misaligned fields carefully

---

## **GCC / Clang Struct Extensions**

- `__attribute__((packed))` — remove padding
- `__attribute__((aligned(n)))` — force alignment
- `__attribute__((transparent_union))` — union usable where any member type expected
- `__attribute__((may_alias))` — struct may alias other types
- `__attribute__((designated_init))` — require designated initializers
- `__attribute__((warn_if_not_aligned(n)))` — warn if not aligned enough
- `__attribute__((cleanup(fn)))` — call fn when variable goes out of scope
- Zero-length array — `int data[0]` — GCC extension
- Anonymous struct/union — GCC extension pre-C11
- `typeof(s.member)` — get type of member expression
- `__builtin_offsetof` — underlying builtin for offsetof
- `__builtin_types_compatible_p(struct A, struct B)` — check compatibility

---

## **Struct Reflection & Iteration (Without Language Support)**

- C has no reflection — must simulate
- X-macro — iterate members at compile time
- Designated initializer counting — count members with compound literal trick
- `sizeof(struct S) / sizeof(first_member_type)` — wrong, includes padding
- Manual metadata — array of `{name, offset, size, type_tag}`
- Serialization framework — use metadata array
- Debug printing — iterate metadata, print each field
- JSON/XML serialization — walk metadata
- Libraries — `libcstruct`, `cstruct`, various approaches
- DWARF debug info — has full struct metadata — used by debuggers
- Clang AST — can extract struct layout at compile time (offline tools)

---

## **Most Impressive Interview Questions**

- Why is `memcmp` unreliable for struct comparison?
- What is trailing padding and why does it exist?
- Explain `offsetof` and what it cannot be used on
- What is a flexible array member and how to allocate correctly?
- What is the common initial sequence rule?
- Why is union type punning defined in C but UB in C++?
- What does `__attribute__((packed))` do and what are the risks?
- Explain the container_of macro and why it works
- How do you simulate inheritance in C using structs?
- What is anonymous struct/union and when was it standardized?
- Why should you sort struct members largest to smallest?
- What is false sharing and how do you prevent it in a struct?
- Explain AoS vs SoA and when to use each
- How do you serialize a struct portably?
- What is a tagged union and how to implement it safely?
- What is the struct hack and what replaced it?
- How does a vtable work implemented with structs and function pointers?
- What is `_Static_assert` for struct layout?
- Why is `sizeof` of a struct with only a flexible array member the size of fixed part?
- Explain how Linux kernel uses intrusive linked lists
- What is transparent union GCC attribute?
- How does `_Atomic struct S` work — is it always lock-free?
- What happens to padding bytes during struct assignment?
- Can you have a pointer to a bit field? Why not?
- Explain X-macro pattern for struct member iteration

---

At the **deepest level**, structures and unions in C are not just data containers — they are the **foundation of systems programming**, enabling **memory layout control, hardware mapping, polymorphism simulation, type punning, cache optimization, and protocol implementation**. Mastering every rule separates a true systems programmer from someone who merely writes C code.





Here is the **deepest possible dive into network programming in C**:

---

## **Fundamentals — Socket API Origins**

- BSD Sockets — introduced in 4.2BSD 1983 — de facto standard
- POSIX standardized — `<sys/socket.h>`, `<netinet/in.h>`, `<arpa/inet.h>`
- Windows Winsock — `ws2_32.dll` — mostly compatible, some differences
- Everything is a file descriptor — `socket()` returns fd
- Same `read()`, `write()`, `close()` work on sockets
- Socket — endpoint for communication
- Socket pair — two endpoints connected
- Full duplex — both sides can send and receive simultaneously
- Socket types — SOCK_STREAM, SOCK_DGRAM, SOCK_RAW, SOCK_SEQPACKET
- Address families — AF_INET (IPv4), AF_INET6 (IPv6), AF_UNIX, AF_PACKET, AF_NETLINK
- Protocol families — PF_INET, PF_INET6 — same values as AF_ on Linux
- Socket is not connected until `connect()` or `accept()`
- Socket state machine — CLOSED, LISTEN, SYN_SENT, SYN_RECEIVED, ESTABLISHED, FIN_WAIT, CLOSE_WAIT, TIME_WAIT

---

## **Socket Creation — Deep**

- `socket(domain, type, protocol)` — returns fd or -1
- `domain` — AF_INET, AF_INET6, AF_UNIX
- `type` — SOCK_STREAM, SOCK_DGRAM, SOCK_RAW
- `protocol` — usually 0 (auto), or IPPROTO_TCP, IPPROTO_UDP, IPPROTO_ICMP
- `SOCK_STREAM | SOCK_NONBLOCK` — create non-blocking socket atomically (Linux)
- `SOCK_STREAM | SOCK_CLOEXEC` — close on exec atomically (Linux)
- Without SOCK_CLOEXEC — race condition between `socket()` and `fcntl()`
- `SOCK_NONBLOCK` without atomicity — race between `socket()` and `fcntl()`
- File descriptor table — socket occupies one entry
- `ulimit -n` — max open file descriptors per process
- `/proc/sys/fs/file-max` — system-wide fd limit
- `setrlimit(RLIMIT_NOFILE, &rl)` — increase per-process limit
- Closed socket — `close(fd)` — may not send FIN immediately if SO_LINGER not set
- `shutdown(fd, SHUT_WR)` — send FIN, keep reading
- `shutdown(fd, SHUT_RD)` — stop receiving
- `shutdown(fd, SHUT_RDWR)` — both directions

---

## **Address Structures — Complete**

### **IPv4**
```c
struct sockaddr_in {
    sa_family_t    sin_family; /* AF_INET */
    in_port_t      sin_port;   /* network byte order */
    struct in_addr sin_addr;   /* network byte order */
    char           sin_zero[8];/* padding */
};
struct in_addr { uint32_t s_addr; };
```

### **IPv6**
```c
struct sockaddr_in6 {
    sa_family_t     sin6_family;   /* AF_INET6 */
    in_port_t       sin6_port;     /* network byte order */
    uint32_t        sin6_flowinfo; /* flow info */
    struct in6_addr sin6_addr;     /* 128-bit address */
    uint32_t        sin6_scope_id; /* scope ID for link-local */
};
struct in6_addr { uint8_t s6_addr[16]; };
```

### **Generic**
```c
struct sockaddr {
    sa_family_t sa_family;
    char        sa_data[14];
};
```

### **Storage (large enough for any)**
```c
struct sockaddr_storage {
    sa_family_t ss_family;
    /* enough bytes for any address family */
};
```

- Cast to `struct sockaddr*` for API calls
- `sockaddr_storage` — use when address family unknown in advance
- `sin_zero` — must be zeroed — `memset` before use
- Port and address — always in network byte order
- `htons(port)` — host to network short
- `htonl(addr)` — host to network long
- `ntohs`, `ntohl` — reverse
- `INADDR_ANY` — `0.0.0.0` — bind to all interfaces
- `INADDR_LOOPBACK` — `127.0.0.1`
- `IN6ADDR_ANY_INIT` — `::` — IPv6 any
- `IN6ADDR_LOOPBACK_INIT` — `::1`

---

## **Address Conversion — Deep**

- `inet_aton(str, &addr)` — IPv4 string to binary — deprecated
- `inet_ntoa(addr)` — IPv4 binary to string — not thread safe (static buffer)
- `inet_pton(AF_INET, str, &addr)` — presentation to numeric — thread safe
- `inet_ntop(AF_INET, &addr, buf, len)` — numeric to presentation — thread safe
- `inet_pton` returns 1 success, 0 invalid string, -1 error
- `inet_ntop` returns pointer to buf or NULL on error
- IPv6 `inet_pton` — handles `::` compression, `::ffff:1.2.3.4` mapped
- `getaddrinfo(host, port, hints, &res)` — modern, works for IPv4 and IPv6
- `getaddrinfo` — allocates linked list of `struct addrinfo`
- `freeaddrinfo(res)` — free the list
- `getaddrinfo` hints — set `ai_family`, `ai_socktype`, `ai_flags`
- `AI_PASSIVE` — for server (bind), gives `INADDR_ANY`
- `AI_NUMERICHOST` — don't do DNS lookup
- `AI_NUMERICSERV` — port number not service name
- `AI_ADDRCONFIG` — only return IPv4 if IPv4 configured, etc.
- `AI_CANONNAME` — fill `ai_canonname` with canonical hostname
- `getnameinfo` — reverse lookup, socket address to hostname/service
- `gethostbyname` — legacy, not thread safe, IPv4 only — avoid
- `gethostbyaddr` — legacy — avoid
- `getservbyname("http", "tcp")` — service name to port
- `getaddrinfo` is thread safe — uses separate storage per call
- DNS resolution in `getaddrinfo` — may block — use async DNS for servers

---

## **TCP Server — Complete Deep Flow**

```
socket() → bind() → listen() → accept() → read()/write() → close()
```

### **socket()**
- Create TCP socket — `socket(AF_INET, SOCK_STREAM, 0)`

### **bind()**
- Bind to address and port
- `bind(fd, (struct sockaddr*)&addr, sizeof addr)`
- `SO_REUSEADDR` — set before bind — allow reuse of TIME_WAIT port
- `SO_REUSEPORT` — allow multiple sockets on same port (load balancing)
- Binding to port 0 — OS assigns ephemeral port
- `getsockname` — retrieve assigned port after bind to 0
- Binding to specific interface — set `sin_addr` to interface IP
- Binding to `INADDR_ANY` — accept on all interfaces
- Only one process can bind to a port (without SO_REUSEPORT)

### **listen()**
- `listen(fd, backlog)` — mark socket as passive
- `backlog` — size of pending connection queue
- Two queues — SYN queue (incomplete) and accept queue (complete)
- SYN queue — connections in SYN_RECEIVED state
- Accept queue — connections in ESTABLISHED state waiting for `accept()`
- `backlog` in Linux — size of accept queue
- `/proc/sys/net/ipv4/tcp_max_syn_backlog` — SYN queue size
- `SOMAXCONN` — system maximum backlog value
- Full accept queue — new connections silently dropped (or RST)
- `net.core.somaxconn` — sysctl for max accept queue size

### **accept()**
- `accept(fd, &client_addr, &addrlen)` — returns new fd
- Blocks if no pending connections
- New fd — represents one client connection
- Original fd — still listening
- `accept4(fd, &addr, &len, flags)` — Linux, SOCK_NONBLOCK | SOCK_CLOEXEC
- `addrlen` — in/out parameter — must initialize to sizeof addr before call
- Accept loop — must loop to drain accept queue
- `EAGAIN` / `EWOULDBLOCK` — no connections pending (non-blocking)
- Worker thread per connection — simple but doesn't scale
- Accept in multiple threads — possible with SO_REUSEPORT or mutex

### **read() / write() / send() / recv()**
- `read(fd, buf, len)` — returns bytes read, 0 = EOF, -1 = error
- `write(fd, buf, len)` — returns bytes written, may be less than len
- `send(fd, buf, len, flags)` — like write with flags
- `recv(fd, buf, len, flags)` — like read with flags
- `MSG_WAITALL` — block until full buffer received (or EOF/error)
- `MSG_PEEK` — peek without consuming
- `MSG_DONTWAIT` — non-blocking for this call only
- `MSG_OOB` — out-of-band data (urgent)
- `MSG_NOSIGNAL` — don't send SIGPIPE on broken pipe
- Partial writes — TCP may not send all bytes — must loop
- Short reads — must loop until full message received
- Framing — must define message boundaries at application level
- Length-prefix framing — first 4 bytes = message length
- Delimiter framing — newline, null byte, etc.

---

## **TCP Client — Complete Deep Flow**

```
socket() → connect() → read()/write() → close()
```

### **connect()**
- `connect(fd, &server_addr, addrlen)`
- TCP three-way handshake — SYN, SYN-ACK, ACK
- Blocking until connected or timeout
- Non-blocking connect — returns immediately with `EINPROGRESS`
- Check completion — `select`/`poll`/`epoll` on writability
- After writable — `getsockopt(SO_ERROR)` to check success
- `ECONNREFUSED` — no server listening on port
- `ETIMEDOUT` — connection timed out
- `ENETUNREACH` — no route to host
- Connect timeout — no built-in, use non-blocking + select with timeout
- Reconnection — must create new socket after failed connect
- Cannot reuse socket after failed connect (on Linux — actually can call connect again if EINTR)
- Ephemeral port — OS assigns source port automatically

---

## **UDP — Deep**

- Connectionless — no handshake
- Unreliable — no delivery guarantee
- Unordered — packets may arrive out of order
- No flow control — can overwhelm receiver
- `socket(AF_INET, SOCK_DGRAM, 0)` — UDP socket
- Server — `bind()` then `recvfrom()`
- Client — `sendto()` directly (no connect needed)
- `sendto(fd, buf, len, flags, &addr, addrlen)` — send to specific address
- `recvfrom(fd, buf, len, flags, &src_addr, &addrlen)` — receive with source addr
- `connect()` on UDP — sets default destination, enables `send()`/`recv()`
- Connected UDP — also filters incoming packets to only connected address
- `connect()` with AF_UNSPEC — disconnect UDP socket
- Datagram boundaries preserved — one `sendto` = one `recvfrom`
- Buffer size critical — datagram larger than buffer — truncated, MSG_TRUNC
- `MSG_TRUNC` flag in `recvfrom` flags — indicates truncation
- Maximum UDP datagram — 65507 bytes (IPv4) — 65527 bytes (IPv6)
- Practical limit — MTU of path — 1472 bytes on Ethernet (1500 - 20 IP - 8 UDP)
- Fragmentation — IP fragments UDP larger than MTU — reassembled at destination
- Fragment loss — entire datagram lost if any fragment lost
- Don't fragment bit — `IP_MTU_DISCOVER` + `IP_PMTUDISC_DO` — get EMSGSIZE on large datagrams
- Path MTU discovery — find minimum MTU on path
- UDP checksum — optional in IPv4, mandatory in IPv6
- Disabling UDP checksum — `setsockopt(SO_NO_CHECK, 1)` — for local loopback speed

---

## **Socket Options — Complete**

### **SOL_SOCKET Level**
- `SO_REUSEADDR` — reuse port in TIME_WAIT — always set on servers
- `SO_REUSEPORT` — multiple sockets on same port (Linux 3.9+)
- `SO_KEEPALIVE` — send TCP keepalives
- `SO_LINGER` — control close behavior
- `SO_SNDBUF` — send buffer size
- `SO_RCVBUF` — receive buffer size
- `SO_SNDBUF` doubled by kernel — actual buffer is 2x requested
- `SO_RCVBUFFORCE` / `SO_SNDBUFFORCE` — root only, bypass limits
- `/proc/sys/net/core/rmem_max` — max receive buffer
- `/proc/sys/net/core/wmem_max` — max send buffer
- `SO_TIMESTAMP` — receive packet timestamp
- `SO_TIMESTAMPNS` — nanosecond timestamp
- `SO_TIMESTAMPING` — hardware timestamp support
- `SO_BINDTODEVICE` — bind to specific network interface
- `SO_BROADCAST` — allow sending to broadcast address
- `SO_DONTROUTE` — bypass routing table
- `SO_OOBINLINE` — receive OOB data inline
- `SO_RCVLOWAT` — minimum bytes before recv returns
- `SO_SNDLOWAT` — minimum bytes before send returns
- `SO_RCVTIMEO` — receive timeout
- `SO_SNDTIMEO` — send timeout
- `SO_ERROR` — get and clear pending error
- `SO_TYPE` — get socket type
- `SO_DOMAIN` — get socket domain (Linux)
- `SO_PROTOCOL` — get socket protocol (Linux)
- `SO_PEEK_OFF` — peek offset (Linux)
- `SO_MARK` — mark packet for routing/iptables (Linux, root)
- `SO_PASSCRED` — receive SCM_CREDENTIALS in ancillary data
- `SO_PEERCRED` — get peer credentials (Unix sockets)
- `SO_ACCEPTCONN` — is socket listening?

### **IPPROTO_TCP Level**
- `TCP_NODELAY` — disable Nagle algorithm — critical for latency
- `TCP_CORK` — buffer until full segment or uncork (Linux)
- `TCP_CORK` vs `TCP_NODELAY` — cork for gathering, nodelay for always sending
- `TCP_KEEPIDLE` — seconds before first keepalive probe
- `TCP_KEEPINTVL` — seconds between keepalive probes
- `TCP_KEEPCNT` — number of probes before giving up
- `TCP_MAXSEG` — maximum segment size
- `TCP_QUICKACK` — disable delayed ACKs — for latency
- `TCP_FASTOPEN` — TCP Fast Open — data in SYN
- `TCP_FASTOPEN_CONNECT` — client-side Fast Open
- `TCP_DEFER_ACCEPT` — don't wake server until data arrives
- `TCP_USER_TIMEOUT` — max time to wait for ACK (Linux)
- `TCP_INFO` — detailed TCP statistics
- `TCP_CONGESTION` — set congestion control algorithm
- `TCP_SYNCNT` — number of SYN retransmissions
- `TCP_LINGER2` — FIN_WAIT2 timeout
- `TCP_WINDOW_CLAMP` — clamp receive window
- `TCP_NOTSENT_LOWAT` — threshold for EPOLLOUT (Linux)
- `TCP_THIN_LINEAR_TIMEOUTS` — for thin streams
- `TCP_REPAIR` — for checkpoint/restore (Linux)

### **IPPROTO_IP Level**
- `IP_TTL` — time to live
- `IP_TOS` — type of service (DSCP, ECN)
- `IP_HDRINCL` — include IP header (raw sockets)
- `IP_PKTINFO` — receive packet info (destination addr, interface)
- `IP_RECVTTL` — receive TTL in ancillary data
- `IP_RECVTOS` — receive TOS in ancillary data
- `IP_MULTICAST_TTL` — TTL for multicast
- `IP_MULTICAST_LOOP` — loopback multicast to local sockets
- `IP_ADD_MEMBERSHIP` — join multicast group
- `IP_DROP_MEMBERSHIP` — leave multicast group
- `IP_ADD_SOURCE_MEMBERSHIP` — SSM join
- `IP_TRANSPARENT` — transparent proxy (root)
- `IP_FREEBIND` — bind to non-local address (root)
- `IP_MTU_DISCOVER` — path MTU discovery
- `IP_RECVERR` — receive ICMP errors on UDP

### **IPPROTO_IPV6 Level**
- `IPV6_V6ONLY` — prevent IPv6 socket from accepting IPv4 connections
- `IPV6_TCLASS` — traffic class
- `IPV6_UNICAST_HOPS` — hop limit
- `IPV6_MULTICAST_HOPS`
- `IPV6_JOIN_GROUP`
- `IPV6_RECVPKTINFO`

---

## **Nagle Algorithm — Deep**

- Nagle — buffer small writes until ACK received or full segment
- Reduces small packet flooding on network
- Bad for latency-sensitive protocols — 40ms+ delay possible
- `TCP_NODELAY` — disables Nagle completely
- Delayed ACK — receiver waits up to 40ms before ACKing
- Nagle + Delayed ACK interaction — deadly combination — 40ms delay
- Always set `TCP_NODELAY` for — gaming, trading, RPC, interactive protocols
- Nagle enabled for — bulk transfer, large file transfer
- `TCP_CORK` — Linux, accumulate data explicitly, then uncork to send
- Cork vs Nodelay — cork gives manual control, nodelay always sends immediately
- MSG_MORE flag — like TCP_CORK for single call

---

## **Non-Blocking I/O — Deep**

- `fcntl(fd, F_SETFL, O_NONBLOCK)` — set non-blocking
- `ioctl(fd, FIONBIO, &nonblock)` — alternative
- Non-blocking `read` — returns `EAGAIN` if no data
- Non-blocking `write` — returns `EAGAIN` if buffer full
- `EAGAIN` == `EWOULDBLOCK` on Linux — check both portably
- Non-blocking `connect` — returns `EINPROGRESS`
- Must check writability then `getsockopt(SO_ERROR)` after connect
- Non-blocking `accept` — returns `EAGAIN` if no pending connections
- Edge case — `accept` may return `EAGAIN` even after `select` says readable (signal interrupted)
- Must loop on `EINTR` — signal interrupted system call
- Non-blocking write loop — write until `EAGAIN`, buffer remainder
- Send buffer — kernel buffers data, write may succeed even if peer slow
- Receive buffer — kernel buffers incoming, read drains this
- Buffer sizing — affects throughput and latency

---

## **I/O Multiplexing — select, poll, epoll**

### **select()**
- `select(nfds, &readfds, &writefds, &exceptfds, &timeout)`
- `FD_SET`, `FD_CLR`, `FD_ISSET`, `FD_ZERO` — macros
- `nfds` — highest fd + 1
- `timeout` NULL — block forever
- `timeout` zero — immediate poll
- Returns number of ready fds
- `readfds` ready — data available or connection closed
- `writefds` ready — space in send buffer
- `exceptfds` ready — OOB data or error
- Limitation — `FD_SETSIZE` — default 1024 fds maximum
- Limitation — O(nfds) scan on each call
- Limitation — must rebuild fd sets each call
- Limitation — cannot scale to thousands of connections
- Portable — works on Linux, macOS, Windows
- Still useful — for small number of fds, or portability

### **poll()**
- `poll(fds, nfds, timeout)` — array of `struct pollfd`
- `struct pollfd { int fd; short events; short revents; }`
- `POLLIN` — data to read
- `POLLIN | POLLRDHUP` — data or peer closed
- `POLLOUT` — space to write
- `POLLPRI` — urgent data
- `POLLERR` — error (always checked even if not requested)
- `POLLHUP` — hangup (always checked)
- `POLLNVAL` — invalid fd (always checked)
- No fd limit — array can be any size
- Still O(n) scan
- Must rebuild array if fds change
- More ergonomic than select — no fd set manipulation
- `ppoll` — signal mask + timeout with nanoseconds

### **epoll (Linux)**
- `epoll_create1(EPOLL_CLOEXEC)` — create epoll instance
- `epoll_ctl(epfd, op, fd, &event)` — add/modify/delete fd
- `EPOLL_CTL_ADD`, `EPOLL_CTL_MOD`, `EPOLL_CTL_DEL`
- `epoll_wait(epfd, events, maxevents, timeout)` — wait for events
- Returns only ready events — O(ready) not O(all)
- Can watch thousands of fds efficiently
- `EPOLLIN` — readable
- `EPOLLOUT` — writable
- `EPOLLRDHUP` — peer closed write half
- `EPOLLERR` — error (always delivered)
- `EPOLLHUP` — hangup (always delivered)
- `EPOLLPRI` — urgent data
- `EPOLLET` — edge triggered mode
- `EPOLLONESHOT` — disable after one event, re-arm with MOD
- `EPOLLWAKEUP` — prevent suspend while handling event
- `EPOLLEXCLUSIVE` — exclusive wakeup (avoid thundering herd)
- Level triggered (default) — keeps reporting while condition true
- Edge triggered — reports only on transition
- Edge triggered requires — read/write until EAGAIN
- Edge triggered miss — if don't drain completely, event lost
- `epoll_pwait` — with signal mask
- `epoll_pwait2` — nanosecond timeout (Linux 5.11)
- epoll internal — uses red-black tree for registered fds, wait queue for ready list

### **kqueue (BSD/macOS)**
- `kqueue()` — create kqueue
- `kevent(kq, changelist, nchanges, eventlist, nevents, timeout)`
- `struct kevent { uintptr_t ident; int16_t filter; uint16_t flags; ... }`
- `EVFILT_READ`, `EVFILT_WRITE`, `EVFILT_TIMER`, `EVFILT_SIGNAL`, `EVFILT_PROC`
- More powerful than epoll — can watch files, processes, signals, timers
- `EV_ADD`, `EV_DELETE`, `EV_ENABLE`, `EV_DISABLE`
- `EV_ONESHOT` — remove after first event
- `EV_CLEAR` — edge triggered equivalent
- Not available on Linux

### **io_uring (Linux 5.1+)**
- Truly async — submission and completion queues in shared memory
- No syscall for each operation — batch submissions
- `io_uring_setup`, `io_uring_enter`, `io_uring_register`
- `liburing` — user-friendly wrapper
- `io_uring_prep_recv`, `io_uring_prep_send`, `io_uring_prep_accept`
- Fixed buffers — register buffers once, use without copy
- Fixed files — register fds once, use index
- Linked requests — chain operations
- `IORING_SETUP_SQPOLL` — kernel thread polls submission queue, zero syscalls
- Supports — read, write, send, recv, accept, connect, fsync, fallocate, splice, tee
- Dramatically lower latency and higher throughput vs epoll for many use cases
- Used by — storage engines, high performance servers

---

## **TCP Internals — Deep**

### **Three-Way Handshake**
- Client sends SYN (seq=x)
- Server sends SYN-ACK (seq=y, ack=x+1)
- Client sends ACK (ack=y+1)
- Connection established
- `connect()` completes after ACK sent/received
- SYN cookies — prevent SYN flood (backlog full)

### **Four-Way Teardown**
- Active closer sends FIN
- Passive closer sends ACK
- Passive closer sends FIN
- Active closer sends ACK
- Active closer enters TIME_WAIT
- TIME_WAIT duration — 2 * MSL (Maximum Segment Lifetime) = 60-120 seconds
- TIME_WAIT purpose — ensure delayed packets don't confuse new connection
- TIME_WAIT prevents port reuse — hence `SO_REUSEADDR`
- `SO_LINGER` with l_linger=0 — sends RST instead of FIN — skips TIME_WAIT

### **Sequence Numbers**
- Initial sequence number (ISN) — random, prevents hijacking
- Sequence number — byte offset in stream
- ACK number — next expected byte
- Window size — bytes receiver can accept
- Sequence number wraparound — 32-bit, wraps at 4GB — TCP handles it
- PAWS — Protection Against Wrapped Sequences — uses timestamps

### **Sliding Window**
- Sender window — min(cwnd, rwnd)
- `rwnd` — receiver window (flow control)
- `cwnd` — congestion window (congestion control)
- Window scaling — TCP option, allows > 65535 byte window
- `net.ipv4.tcp_window_scaling` — enabled by default
- Zero window — receiver buffer full — sender stops
- Window probe — sent when window becomes zero
- Silly window syndrome — many small window updates — Clark's algorithm

### **Congestion Control**
- Slow start — cwnd starts small, doubles per RTT
- Congestion avoidance — cwnd grows linearly after threshold
- ssthresh — slow start threshold
- Packet loss detected — ssthresh = cwnd/2, cwnd = 1 (Tahoe) or cwnd = ssthresh (Reno)
- Fast retransmit — retransmit after 3 duplicate ACKs
- Fast recovery — don't go back to slow start after fast retransmit
- Algorithms — Reno, CUBIC (Linux default), BBR, QUIC CC
- `TCP_CONGESTION` socket option — select algorithm
- BBR — Bottleneck Bandwidth and RTT — Google, better utilization
- CUBIC — default Linux — cubic function for cwnd growth

### **Retransmission**
- RTO — Retransmission Timeout — based on RTT estimate
- RTT estimation — SRTT and RTTVAR (RFC 6298)
- Exponential backoff on timeout
- `TCP_RETRIES2` — max retransmissions (default 15, ~13-30 minutes)
- `TCP_USER_TIMEOUT` — abort after this long without ACK
- Karn's algorithm — don't use retransmitted ACK for RTT estimation

### **TCP Options**
- MSS — Maximum Segment Size — negotiated in SYN
- Window Scale — extend window beyond 65535
- SACK — Selective ACK — acknowledge non-contiguous blocks
- Timestamps — RTT measurement, PAWS
- TCP Fast Open — data in SYN handshake
- Multipath TCP — MPTCP — use multiple paths
- TFO cookie — prevent replay attacks in Fast Open

---

## **UDP Reliability Protocols**

- Building reliability on UDP
- QUIC — HTTP/3 — UDP-based with reliability
- RUDP — Reliable UDP
- UDT — UDP-based Data Transfer
- KCP — fast reliable protocol
- ENet — reliable UDP for games
- Concepts — sequence numbers, ACKs, retransmission, reordering buffer
- ARQ — Automatic Repeat Request
- Stop-and-wait ARQ — simplest, one packet at a time
- Go-Back-N ARQ — sliding window, retransmit from lost packet
- Selective Repeat ARQ — only retransmit lost packets
- NACK — negative acknowledgment
- FEC — Forward Error Correction — recover without retransmit
- Reed-Solomon codes — used in multimedia streaming
- Redundant transmission — send same data N times

---

## **Raw Sockets — Deep**

- `socket(AF_INET, SOCK_RAW, IPPROTO_TCP)` — raw TCP
- `socket(AF_INET, SOCK_RAW, IPPROTO_ICMP)` — raw ICMP
- `socket(AF_PACKET, SOCK_RAW, htons(ETH_P_ALL))` — raw Ethernet
- Root or `CAP_NET_RAW` required
- `IP_HDRINCL` — include own IP header (otherwise kernel adds it)
- Without `IP_HDRINCL` — kernel prepends IP header
- Receive — get all packets matching protocol (kernel still processes them too)
- `AF_PACKET` `SOCK_RAW` — get full Ethernet frame including headers
- `AF_PACKET` `SOCK_DGRAM` — get packet with Ethernet header stripped
- Uses — ping (ICMP), traceroute, port scanners, network monitors
- `ping` implementation — raw ICMP socket
- Custom protocol — implement own transport layer
- Packet injection — craft arbitrary packets
- `TPACKET_V3` — zero-copy packet capture with `AF_PACKET`
- `mmap` the ring buffer — no kernel/user copies
- Used by tcpdump, Wireshark via libpcap

---

## **Unix Domain Sockets — Deep**

- `socket(AF_UNIX, SOCK_STREAM, 0)` — local IPC
- `struct sockaddr_un { sa_family_t sun_family; char sun_path[108]; }`
- Filesystem path — `sun_path` — null terminated
- Abstract namespace — `sun_path[0] = '\0'` — not in filesystem
- Abstract address — rest of sun_path is name (not null terminated)
- No network overhead — kernel copies directly
- Faster than loopback TCP — no TCP/IP processing
- `socketpair(AF_UNIX, SOCK_STREAM, 0, fds)` — connected pair
- `socketpair` — bidirectional pipe essentially
- Sending file descriptors — `SCM_RIGHTS` — ancillary data
- `sendmsg` with `struct msghdr` and `struct cmsghdr`
- `SCM_CREDENTIALS` — send process credentials
- `SO_PEERCRED` — get peer PID, UID, GID
- Used by — DBus, X11, systemd, Docker daemon, PostgreSQL
- Security — filesystem permissions control access
- Abstract sockets — no filesystem entry — cleaned up automatically
- `SOCK_SEQPACKET` — ordered, reliable, message-preserving

---

## **Ancillary Data / Control Messages**

- `sendmsg` / `recvmsg` — send/receive with ancillary data
- `struct msghdr { void* msg_name; socklen_t msg_namelen; struct iovec* msg_iov; size_t msg_iovlen; void* msg_control; size_t msg_controllen; int msg_flags; }`
- `struct cmsghdr { socklen_t cmsg_len; int cmsg_level; int cmsg_type; }`
- `CMSG_FIRSTHDR`, `CMSG_NXTHDR`, `CMSG_DATA`, `CMSG_LEN`, `CMSG_SPACE`
- `SCM_RIGHTS` — file descriptor passing (AF_UNIX)
- `SCM_CREDENTIALS` — process credentials (AF_UNIX)
- `IP_PKTINFO` / `IPV6_PKTINFO` — destination address info
- `IP_RECVTTL` — receive TTL value
- `IP_RECVTOS` — receive TOS/DSCP
- `SO_TIMESTAMP` — packet receive timestamp
- `SO_TIMESTAMPNS` — nanosecond timestamp
- Scatter/gather I/O — `msg_iov` array — send multiple buffers atomically
- `readv` / `writev` — simpler scatter/gather without ancillary
- `recvmmsg` — receive multiple messages in one syscall
- `sendmmsg` — send multiple messages in one syscall
- `recvmmsg` / `sendmmsg` — reduce syscall overhead for UDP

---

## **Multicast — Deep**

- Multicast — one sender, multiple receivers
- IPv4 multicast range — `224.0.0.0` to `239.255.255.255`
- `224.0.0.0/24` — link-local, not routed
- `239.0.0.0/8` — administratively scoped (private)
- IGMP — Internet Group Management Protocol — join/leave groups
- `IP_ADD_MEMBERSHIP` — join group
- `IP_DROP_MEMBERSHIP` — leave group
- `IP_MULTICAST_TTL` — set TTL for multicast (default 1 = link-local)
- `IP_MULTICAST_LOOP` — receive own multicast (default on)
- `IP_MULTICAST_IF` — set outgoing interface
- Receiving — bind to multicast group address or INADDR_ANY
- SSM — Source Specific Multicast — `IP_ADD_SOURCE_MEMBERSHIP`
- IPv6 multicast — `FF02::1` all nodes, `FF02::2` all routers
- MLD — Multicast Listener Discovery — IPv6 equivalent of IGMP
- `IPV6_JOIN_GROUP` — join IPv6 multicast
- Multicast vs broadcast — multicast is more efficient, routable
- Broadcast — `255.255.255.255` or subnet broadcast — `SO_BROADCAST` required
- Broadcast — limited to local network, not routed

---

## **TCP Fast Open — Deep**

- Normal TCP — 1 RTT before any data sent (3-way handshake)
- TFO — send data with SYN — reduces latency by 1 RTT
- Server enables — `TCP_FASTOPEN` socket option + sysctl
- Client first connection — normal handshake + server sends TFO cookie
- Client subsequent connections — send cookie + data in SYN
- Server receives data before connection fully established
- Security — cookie prevents replay attacks
- `TCP_FASTOPEN_CONNECT` — client-side, with `connect()` + `send()`
- Or `sendto` with `MSG_FASTOPEN` flag
- Not all networks support — some firewalls drop SYN with data
- Fallback — if TFO fails, normal handshake

---

## **Zero-Copy Networking**

- Normal path — data copied kernel→user→kernel for forwarding
- `sendfile(out_fd, in_fd, offset, count)` — file to socket, no user copy
- `splice(fd_in, off_in, fd_out, off_out, len, flags)` — pipe kernel buffers
- `tee(fd_in, fd_out, len, flags)` — duplicate pipe data without consuming
- `MSG_ZEROCOPY` flag — `send` with zero copy (Linux 4.14)
- `MSG_ZEROCOPY` requires — `SO_ZEROCOPY` socket option
- Completion notification — `MSG_ERRQUEUE` to know when done
- `vmsplice` — user memory to pipe without copy
- `io_uring` fixed buffers — register buffers, kernel maps directly
- DPDK — Data Plane Development Kit — bypass kernel entirely
- XDP — eXpress Data Path — process packets in kernel before socket
- `AF_XDP` — user-space access to XDP
- RDMA — Remote Direct Memory Access — network card DMA directly to app memory

---

## **TLS/SSL — Deep Integration**

- OpenSSL — most common library
- `SSL_CTX_new(TLS_method())` — create context
- `SSL_new(ctx)` — create SSL object
- `SSL_set_fd(ssl, fd)` — attach to socket
- `SSL_connect(ssl)` — client handshake
- `SSL_accept(ssl)` — server handshake
- `SSL_read(ssl, buf, len)` — read encrypted
- `SSL_write(ssl, buf, len)` — write encrypted
- `SSL_shutdown(ssl)` — graceful shutdown
- Non-blocking TLS — `SSL_get_error` returns `SSL_ERROR_WANT_READ` or `SSL_ERROR_WANT_WRITE`
- Must retry same operation when error clears
- Certificate verification — `SSL_CTX_set_verify`
- `SSL_get_peer_certificate` — get peer cert
- SNI — Server Name Indication — `SSL_set_tlsext_host_name`
- ALPN — Application Layer Protocol Negotiation — select HTTP/1.1 vs h2
- Session resumption — `SSL_SESSION` reuse — reduce handshake RTT
- TLS 1.3 — 0-RTT, 1-RTT — faster handshake
- Certificate pinning — verify specific cert or public key
- `BIO` — OpenSSL I/O abstraction — memory BIO for async
- LibreSSL, BoringSSL — OpenSSL forks
- mbedTLS — embedded systems
- WolfSSL — embedded/RTOS

---

## **DNS — Deep**

- `getaddrinfo` — standard, blocks
- `res_query` — low-level resolver
- `<resolv.h>` — resolver functions
- `/etc/resolv.conf` — nameserver config
- `/etc/nsswitch.conf` — name service switch
- `/etc/hosts` — local overrides
- DNS over UDP — port 53, max 512 bytes response
- DNS over TCP — for large responses (>512 bytes), zone transfers
- DNS over HTTPS (DoH) — RFC 8484
- DNS over TLS (DoT) — RFC 7858
- TTL — time to live for cached records
- A record — IPv4 address
- AAAA record — IPv6 address
- CNAME — canonical name alias
- MX — mail exchanger
- SRV — service location
- PTR — reverse DNS
- Async DNS — `c-ares` library — non-blocking DNS
- `evdns` — libevent DNS
- `getaddrinfo_a` — POSIX async (rarely used)
- NDOTS — dots required for search domain fallback
- EDNS0 — extension for larger UDP responses
- DNSSEC — signed DNS records

---

## **High Performance Server Architecture**

### **Accept and Process**
- Single thread — simple, no concurrency
- Thread per connection — `pthread_create` on accept
- Thread pool — accept then dispatch to worker thread
- Process per connection — `fork` on accept — old CGI model

### **Event-Driven (Reactor Pattern)**
- Single thread — epoll loop handles all connections
- Never block in event handler
- Callback/handler on each event
- `libevent`, `libev`, `libuv` — reactor libraries
- High concurrency with single thread
- Limited by single CPU core

### **Multi-Reactor**
- Multiple epoll loops in different threads
- Each thread handles subset of connections
- Main thread accepts, distributes to workers
- `SO_REUSEPORT` — each worker accepts directly
- Nginx model — one worker per CPU core

### **Proactor Pattern**
- Async I/O with completion callbacks
- io_uring — natural fit
- Windows IOCP — I/O Completion Ports

### **Thundering Herd Problem**
- Multiple threads waiting on same `accept`
- All wake when connection arrives — only one succeeds
- Solutions — `EPOLLEXCLUSIVE`, `SO_REUSEPORT`, mutex around accept
- `EPOLLEXCLUSIVE` — wake only one epoll waiter
- `SO_REUSEPORT` — kernel load balances across sockets

### **Connection Limits**
- File descriptor limit — `ulimit -n`, `setrlimit`
- Socket buffer memory — `SO_RCVBUF`, `SO_SNDBUF`
- Port range — 65535 ports, but can reuse with `SO_REUSEPORT`
- Ephemeral ports — `/proc/sys/net/ipv4/ip_local_port_range`
- TIME_WAIT accumulation — can exhaust ports
- `tcp_tw_reuse` — reuse TIME_WAIT ports for outgoing

---

## **Network Namespaces (Linux)**

- Network namespace — isolated network stack
- Each namespace — own interfaces, routing, firewall rules
- `unshare(CLONE_NEWNET)` — create new network namespace
- `setns(fd, CLONE_NEWNET)` — enter existing namespace
- Docker — each container has own network namespace
- `ip netns` — iproute2 tool
- `veth pair` — virtual ethernet, connects two namespaces
- `bridge` — connect multiple namespaces
- Loopback per namespace — `lo` interface
- Firewall per namespace — independent iptables/nftables

---

## **Netlink Sockets**

- `socket(AF_NETLINK, SOCK_RAW, NETLINK_ROUTE)` — kernel communication
- Used for — routing, interfaces, firewall, auditd
- Replaces ioctl for network config
- `NETLINK_ROUTE` — routing table, interfaces
- `NETLINK_NETFILTER` — netfilter/iptables
- `NETLINK_AUDIT` — audit system
- `NETLINK_KOBJECT_UEVENT` — kernel events (udev)
- `struct nlmsghdr` — netlink message header
- `nlmsg_type` — message type
- RTM_NEWROUTE, RTM_DELROUTE, RTM_GETROUTE — route operations
- RTM_NEWLINK, RTM_DELLINK, RTM_GETLINK — interface operations
- `libmnl` — minimalist netlink library
- `libnl` — higher level netlink library
- `iproute2` uses netlink internally

---

## **QUIC Protocol**

- UDP-based — runs over UDP port 443
- Built-in encryption — TLS 1.3 integrated
- 0-RTT connection — for known servers
- Stream multiplexing — no head-of-line blocking
- Connection migration — change IP/port without reconnect
- Improved loss recovery — per-stream flow control
- HTTP/3 uses QUIC
- Libraries — `quiche` (Cloudflare), `ngtcp2`, `msquic` (Microsoft), `quic-go`
- `lsquic` — LiteSpeed QUIC library in C
- Congestion control — CUBIC, BBR, etc. — pluggable
- Connection ID — identifies connection regardless of IP/port

---

## **Packet Capture — libpcap**

- `pcap_open_live(device, snaplen, promisc, timeout, errbuf)`
- `pcap_loop(pcap, count, callback, userdata)` — capture loop
- `pcap_dispatch` — non-blocking version
- BPF filter — `pcap_compile` + `pcap_setfilter`
- `"tcp port 80"` — BPF expression
- BPF — Berkeley Packet Filter — runs in kernel
- Promisc mode — capture all packets on network
- `pcap_dump_open` — write to pcap file
- `pcap_offline_read` — read pcap file
- `tcpdump` uses libpcap
- `AF_PACKET` + `TPACKET_V3` — lower level, better performance
- XDP — even lower level — kernel bypass

---

## **SO_LINGER — Deep**

- `struct linger { int l_onoff; int l_linger; }`
- `l_onoff = 0` — disabled (default) — close returns immediately, FIN sent async
- `l_onoff = 1, l_linger = 0` — send RST immediately, no TIME_WAIT
- `l_onoff = 1, l_linger = n` — close blocks up to n seconds for FIN-ACK
- RST on close — used for aggressive connection termination
- RST causes — `ECONNRESET` on peer
- TIME_WAIT avoidance — `l_linger = 0` but loses guarantee of delivery
- Blocking close — `l_linger > 0` ensures data delivered before close returns
- Non-blocking socket + linger — linger timeout still applies but close returns immediately

---

## **Keepalive — Deep**

- TCP keepalive — detect dead connections
- Default — disabled
- `SO_KEEPALIVE` — enable
- `TCP_KEEPIDLE` — idle seconds before first probe (default 7200 = 2 hours)
- `TCP_KEEPINTVL` — seconds between probes (default 75)
- `TCP_KEEPCNT` — probe count before giving up (default 9)
- Default total — 2 hours + 75*9 = ~2 hours 11 minutes
- Application-level keepalive — often better — send ping messages
- Heartbeat protocol — application sends periodic messages
- Dead connection detection — no keepalive = stuck connection undetected
- NAT timeout — NAT tables expire idle connections, keepalive prevents
- Firewall timeout — similar issue
- `TCP_USER_TIMEOUT` — complementary, sets max unacknowledged time

---

## **Debugging & Tools**

- `strace -e network ./program` — trace network syscalls
- `strace -e trace=socket,bind,listen,accept,connect,send,recv` — specific calls
- `ss -tlnp` — socket statistics, listening TCP
- `ss -tnp` — established TCP connections
- `netstat -tlnp` — older alternative
- `tcpdump -i eth0 port 8080` — capture packets
- `wireshark` — GUI packet analysis
- `nc` (netcat) — test TCP/UDP connections
- `socat` — more powerful netcat
- `/proc/net/tcp` — kernel TCP connection table
- `/proc/net/udp` — UDP sockets
- `/proc/net/sockstat` — socket statistics
- `/proc/sys/net/` — network tuning parameters
- `ethtool` — network interface statistics
- `ip -s link` — interface statistics
- `sar -n DEV` — network interface statistics over time
- `perf` — CPU and network profiling
- `bpftrace` — eBPF-based tracing
- `bcc` tools — `tcpconnect`, `tcpaccept`, `tcpretrans`

---

## **Common Bugs & Pitfalls**

- Not checking return value of `send`/`write` — partial write
- Not looping on `recv` — partial read
- Forgetting network byte order — `htons`, `htonl`
- Using `sizeof(struct sockaddr_in)` for IPv6 — too small
- Not initializing `addrlen` before `recvfrom`/`accept`
- Not zeroing `struct sockaddr_in` before use — random sin_zero
- Not setting `SO_REUSEADDR` — port in use after restart
- `getaddrinfo` result — must `freeaddrinfo` or leak
- File descriptor leak — not closing on error paths
- Blocking DNS in event loop — stalls entire server
- Signal `SIGPIPE` — writing to closed connection — `signal(SIGPIPE, SIG_IGN)` or `MSG_NOSIGNAL`
- `EINTR` — signal interrupted syscall — must retry
- Assuming `recv` returns complete message — TCP is stream
- `connect` failure — must create new socket
- Not draining epoll edge-triggered — missing events
- `TIME_WAIT` exhaustion — too many short-lived connections
- Buffer sizing — too small causes fragmentation/inefficiency
- `accept` in signal handler — async-signal-safety issues

---

## **Most Impressive Interview Questions**

- Explain TCP three-way handshake and what happens at each step in the kernel
- What is TIME_WAIT and why does it exist?
- Difference between `SO_REUSEADDR` and `SO_REUSEPORT`?
- How does epoll differ from select internally?
- What is edge-triggered vs level-triggered epoll?
- Explain the Nagle algorithm and why disable it?
- What is TCP slow start and congestion avoidance?
- How do you implement non-blocking connect?
- What is the thundering herd problem and how to solve it?
- How does `sendfile` achieve zero-copy?
- What is `io_uring` and how does it differ from epoll?
- Explain TCP Fast Open
- What is QUIC and why was it created?
- How do you pass a file descriptor over a Unix socket?
- What is `TCP_CORK` and when would you use it?
- Explain `SO_LINGER` with l_linger=0 — what does it do?
- How does `getaddrinfo` work for dual-stack IPv4/IPv6?
- What is a raw socket and what can you do with it?
- How does multicast work at the socket API level?
- What is `EPOLLEXCLUSIVE` and why was it added?
- Explain TPACKET_V3 and zero-copy packet capture
- What happens to unread data when you close a TCP socket?
- How does TCP handle out-of-order packets?
- What is BBR congestion control and how does it differ from CUBIC?
- Explain connection migration in QUIC

---

At the **deepest level**, network programming in C is not just calling `socket()` and `send()` — it requires understanding **kernel internals, TCP state machines, hardware interaction, OS scheduling, memory management, and security** simultaneously. This is what separates a true systems network programmer from someone who just uses networking APIs.


Here is the **deepest possible dive into threading in C**:

---

## **Fundamentals — What a Thread Actually Is**

- Thread — independent execution context sharing process address space
- Thread has own — program counter, stack, registers, signal mask, errno, thread-local storage
- Thread shares — virtual memory, file descriptors, signal handlers, working directory, user/group IDs
- Thread vs process — threads cheaper to create, share memory, no copy-on-write
- `fork()` vs `pthread_create()` — fork copies entire address space, pthread shares it
- Thread ID — `pthread_t` — opaque type, not necessarily integer
- Kernel thread — Linux represents each thread as task (same `task_struct` as process)
- NPTL — Native POSIX Thread Library — Linux implementation since glibc 2.3.2
- `clone()` syscall — underlying Linux call for both `fork` and `pthread_create`
- `clone(CLONE_VM | CLONE_FS | CLONE_FILES | CLONE_SIGHAND | ...)` — thread creation flags
- LWP — Light Weight Process — kernel visible thread
- `gettid()` — get kernel thread ID (not same as `pthread_self()`)
- `ps -L` — show threads as separate entries
- `/proc/PID/task/TID/` — per-thread proc entries
- Thread stack — separate for each thread, default 8MB on Linux
- Main thread stack — grows from high address, limited by `ulimit -s`
- Other thread stacks — allocated by `pthread_create`, usually via `mmap`
- Stack overflow — guard page catches it (usually `SIGSEGV`)

---

## **POSIX Threads — Complete API**

### **Thread Creation**
- `pthread_create(&tid, &attr, start_func, arg)` — create thread
- `start_func` signature — `void* (*)(void*)`
- `arg` — single pointer, use struct for multiple args
- `attr` — `NULL` for defaults or configured `pthread_attr_t`
- Returns 0 on success, error code on failure (not errno)
- Thread starts executing immediately (scheduler decides when)
- No guarantee which runs first — creator or new thread
- `arg` lifetime — must outlive thread start (or be heap allocated)
- Stack variable as arg — use only if thread finishes before function returns
- Common bug — loop variable as arg to multiple threads

### **Thread Exit**
- `pthread_exit(retval)` — exit thread, retval retrievable by join
- Returning from `start_func` — equivalent to `pthread_exit(retval)`
- `exit()` in any thread — terminates entire process
- `_exit()` / `_Exit()` — terminates process immediately
- `pthread_exit` — calls cleanup handlers and TLS destructors
- `exit` — calls `atexit` handlers, flushes stdio (process-wide)
- Last thread exiting — calls `exit()` implicitly (in main) or just thread exits

### **Thread Join**
- `pthread_join(tid, &retval)` — wait for thread, get return value
- Joinable thread — must be joined or detached (else resource leak)
- `retval` — receives value passed to `pthread_exit` or returned from start func
- `PTHREAD_CANCELED` — retval if thread was cancelled
- Join blocks — until thread finishes
- Cannot join same thread twice — UB
- Cannot join detached thread — error
- Self-join — `pthread_join(pthread_self(), ...)` — deadlock

### **Thread Detach**
- `pthread_detach(tid)` — release resources automatically on exit
- Detached thread — cannot be joined
- Resources freed when thread exits — no zombie
- Use when — no need to wait for result
- Detach after create — or set `PTHREAD_CREATE_DETACHED` in attr
- `pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED)`

### **Thread Attributes**
- `pthread_attr_init(&attr)` — initialize
- `pthread_attr_destroy(&attr)` — cleanup
- `pthread_attr_setstacksize(&attr, size)` — set stack size
- `pthread_attr_getstacksize(&attr, &size)`
- `pthread_attr_setstackaddr(&attr, addr)` — set stack location
- `pthread_attr_setdetachstate(&attr, state)`
- `pthread_attr_setschedpolicy(&attr, policy)` — SCHED_FIFO, SCHED_RR, SCHED_OTHER
- `pthread_attr_setschedparam(&attr, &param)` — priority
- `pthread_attr_setinheritsched(&attr, PTHREAD_EXPLICIT_SCHED)` — use set policy
- `pthread_attr_setscope(&attr, PTHREAD_SCOPE_SYSTEM)` — compete with all threads
- `pthread_attr_setguardsize(&attr, size)` — guard page size
- Stack size — minimum `PTHREAD_STACK_MIN` (usually 16KB)
- Stack size — must be multiple of page size
- Custom stack — for embedded, limited memory

### **Thread Identity**
- `pthread_self()` — get own thread ID
- `pthread_equal(t1, t2)` — compare thread IDs (use instead of ==)
- `pthread_t` may be pointer or integer — don't assume
- `gettid()` — Linux, returns kernel TID (integer)
- `syscall(SYS_gettid)` — portable way on older glibc

---

## **Mutex — Deep & Complete**

### **Basics**
- Mutex — mutual exclusion lock
- Binary semaphore essentially — locked or unlocked
- `pthread_mutex_t` — mutex object
- `PTHREAD_MUTEX_INITIALIZER` — static initialization
- `pthread_mutex_init(&mutex, &attr)` — dynamic init
- `pthread_mutex_destroy(&mutex)` — cleanup
- `pthread_mutex_lock(&mutex)` — acquire, block if held
- `pthread_mutex_unlock(&mutex)` — release
- `pthread_mutex_trylock(&mutex)` — non-blocking, returns `EBUSY` if held
- `pthread_mutex_timedlock(&mutex, &abstime)` — with timeout
- Absolute time — `clock_gettime(CLOCK_REALTIME)` + offset
- Must unlock from same thread that locked — except recursive mutex

### **Mutex Types**
- `PTHREAD_MUTEX_DEFAULT` — default, UB on recursive lock or unlock-not-owner
- `PTHREAD_MUTEX_NORMAL` — same as default, deadlock on recursive lock
- `PTHREAD_MUTEX_ERRORCHECK` — returns error on recursive lock, unlock-not-owner
- `PTHREAD_MUTEX_RECURSIVE` — same thread can lock multiple times, must unlock same times
- Set type — `pthread_mutexattr_settype(&attr, type)`
- `PTHREAD_MUTEX_ROBUST` — survives owner thread death
- Robust mutex — returns `EOWNERDEAD` if owner died
- `pthread_mutex_consistent(&mutex)` — mark robust mutex consistent after recovery

### **Mutex Attributes**
- `pthread_mutexattr_t` — attribute object
- `pthread_mutexattr_init` / `pthread_mutexattr_destroy`
- `pthread_mutexattr_settype` — mutex type
- `pthread_mutexattr_setrobust` — robust behavior
- `pthread_mutexattr_setpshared(&attr, PTHREAD_PROCESS_SHARED)` — share across processes
- Process-shared mutex — in shared memory
- `pthread_mutexattr_setprotocol` — priority inheritance or ceiling
- `PTHREAD_PRIO_INHERIT` — priority inheritance — prevents priority inversion
- `PTHREAD_PRIO_PROTECT` — priority ceiling protocol

### **Mutex Internals**
- Linux futex — Fast Userspace muTEX
- Uncontended lock — single atomic CAS in userspace — no syscall
- Contended lock — `futex(FUTEX_WAIT)` — kernel puts thread to sleep
- Unlock with waiters — `futex(FUTEX_WAKE)` — wake one waiter
- `futex` syscall — takes address of 32-bit integer
- Two states — 0=unlocked, 1=locked-no-waiters, 2=locked-with-waiters
- State 2 — prevents spurious wakeups without kernel call
- `PTHREAD_MUTEX_INITIALIZER` — expands to zeroed struct — 0=unlocked

### **Mutex Best Practices**
- Lock granularity — coarse (one lock for everything) vs fine (lock per resource)
- Coarse grained — simple, less parallelism
- Fine grained — more parallelism, more complex, deadlock risk
- Lock ordering — always acquire in consistent global order
- Lock inversion — thread A holds mutex1 wants mutex2, thread B holds mutex2 wants mutex1 — deadlock
- `pthread_mutex_trylock` with backoff — avoid deadlock without strict ordering
- Hold time — hold mutex as short as possible
- Never call external functions while holding mutex — may try to acquire same mutex
- Never block while holding mutex — I/O, sleep, etc.
- Lock-free structure vs mutex — depends on contention

---

## **Condition Variables — Deep**

### **Basics**
- Condition variable — wait for condition to become true
- Always used with mutex
- `pthread_cond_t` — condition variable object
- `PTHREAD_COND_INITIALIZER` — static init
- `pthread_cond_init(&cond, &attr)` — dynamic init
- `pthread_cond_destroy(&cond)`
- `pthread_cond_wait(&cond, &mutex)` — atomically release mutex and wait
- `pthread_cond_timedwait(&cond, &mutex, &abstime)` — with timeout
- `pthread_cond_signal(&cond)` — wake one waiter
- `pthread_cond_broadcast(&cond)` — wake all waiters

### **Correct Usage Pattern**
```c
/* Producer */
pthread_mutex_lock(&mutex);
/* modify shared state */
ready = 1;
pthread_cond_signal(&cond);
pthread_mutex_unlock(&mutex);

/* Consumer */
pthread_mutex_lock(&mutex);
while (!ready) { /* MUST be while not if */
    pthread_cond_wait(&cond, &mutex);
}
/* use shared state */
pthread_mutex_unlock(&mutex);
```

### **Why While Loop — Not If**
- Spurious wakeups — `pthread_cond_wait` may return without signal
- POSIX allows spurious wakeups — must recheck condition
- Multiple waiters — `broadcast` wakes all, only one should proceed
- Signal before wait — condition already true when wait called
- Always use predicate check in while loop

### **Spurious Wakeups**
- Real reason — Linux implementation allows it
- `futex(FUTEX_WAIT)` returns on signal delivery
- Signal to process can wake all waiting threads
- Standard says spurious wakeups are allowed — must handle
- while loop is mandatory — not optional

### **Condition Variable Internals**
- `pthread_cond_wait` — atomically releases mutex, waits on futex
- Atomic release + wait prevents lost wakeup
- Lost wakeup — signal sent between condition check and wait — prevented by holding mutex
- `pthread_cond_signal` — wakes one thread from futex wait queue
- `pthread_cond_broadcast` — wakes all threads

### **Condition Variable Attributes**
- `pthread_condattr_t`
- `pthread_condattr_setpshared` — process shared
- `pthread_condattr_setclock(&attr, CLOCK_MONOTONIC)` — use monotonic clock for timedwait
- Default clock — `CLOCK_REALTIME` — affected by system time changes
- `CLOCK_MONOTONIC` — always increases, immune to time adjustments

---

## **Read-Write Locks — Deep**

- Multiple readers OR one writer — not both
- `pthread_rwlock_t`
- `PTHREAD_RWLOCK_INITIALIZER` — static init
- `pthread_rwlock_init` / `pthread_rwlock_destroy`
- `pthread_rwlock_rdlock` — acquire read lock (multiple allowed)
- `pthread_rwlock_wrlock` — acquire write lock (exclusive)
- `pthread_rwlock_tryrdlock` / `pthread_rwlock_trywrlock`
- `pthread_rwlock_timedrdlock` / `pthread_rwlock_timedwrlock`
- `pthread_rwlock_unlock` — release either type
- Writer starvation — readers keep arriving, writer waits forever
- POSIX leaves writer starvation policy implementation defined
- Linux — writer gets priority after requesting write lock
- `pthread_rwlockattr_setkind_np` — GNU extension
- `PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP` — prevent writer starvation
- Use when — reads much more frequent than writes
- Cache invalidation pattern — frequent reads, occasional writes
- Worse than mutex if — write contention high, or critical section very short
- Overhead — rwlock has higher overhead than mutex

---

## **Spinlocks**

- Busy-wait — thread spins in loop checking lock
- `pthread_spinlock_t`
- `pthread_spin_init(&lock, pshared)`
- `pthread_spin_lock` / `pthread_spin_unlock` / `pthread_spin_trylock`
- `pthread_spin_destroy`
- No syscall — purely userspace
- When to use — critical section very short, contention expected to be brief
- When NOT to use — long critical sections (wastes CPU), uniprocessor (deadlock if holder preempted)
- Kernel uses spinlocks extensively — interrupt handlers cannot sleep
- Userspace spinlock — almost always mutex is better
- Power consumption — spinning burns CPU
- Priority inversion risk — low priority holder, high priority spinner — but holder preempted
- `pause` instruction — hint CPU is spinning, saves power, improves performance
- `_mm_pause()` — intrinsic for `pause` instruction
- Exponential backoff — increasingly longer pauses between attempts

---

## **Semaphores — Deep**

- `sem_t` — POSIX semaphore
- Integer counter — signal increments, wait decrements
- `sem_init(&sem, pshared, value)` — init with initial value
- `pshared=0` — thread shared, `pshared=1` — process shared
- `sem_destroy(&sem)` — cleanup
- `sem_wait(&sem)` — decrement, block if zero
- `sem_post(&sem)` — increment, wake one waiter
- `sem_trywait(&sem)` — non-blocking
- `sem_timedwait(&sem, &abstime)` — with timeout
- `sem_getvalue(&sem, &val)` — read current value
- Named semaphore — `sem_open("/name", flags, mode, value)`
- `sem_close` — close named semaphore
- `sem_unlink` — remove named semaphore
- Named semaphores — persist until unlinked
- Counting semaphore — track N available resources
- Binary semaphore — mutex without ownership
- Producer-consumer — classic use case
- Semaphore vs mutex — semaphore has no ownership, can signal from any thread
- Semaphore vs condition variable — semaphore remembers signals (no lost wakeup)
- Semaphore from interrupt handler — possible (post is async-signal-safe... partially)

---

## **Memory Model — Critical Foundation**

### **Why Memory Model Matters**
- Modern CPUs reorder memory operations
- Compiler reorders for optimization
- Caches — values may not be visible to other CPUs immediately
- Without synchronization — threads see inconsistent views of memory

### **Hardware Memory Models**
- x86/x86-64 — Total Store Order (TSO) — strong model
- TSO — stores may be delayed (store buffer), but stores to same address ordered
- ARM — very weak model — loads and stores can reorder freely
- POWER — weakest — even dependent loads can reorder
- x86 allows — store-load reordering (write buffer not yet flushed)
- ARM allows — load-load, load-store, store-load, store-store reordering

### **C11 Memory Model**
- C11 introduced formal memory model
- `<stdatomic.h>` — atomic operations with memory ordering
- Every atomic operation has memory order parameter
- Memory order — constraint on reordering around operation

### **Memory Orders**
- `memory_order_relaxed` — no ordering guarantees — only atomicity
- `memory_order_acquire` — no reads/writes can move before this load
- `memory_order_release` — no reads/writes can move after this store
- `memory_order_acq_rel` — both acquire and release (for RMW operations)
- `memory_order_seq_cst` — sequential consistency — total order — most expensive
- `memory_order_consume` — data dependency ordering — broken in practice, don't use

### **Acquire-Release Semantics**
- Release store — all prior writes visible before this store
- Acquire load — all subsequent reads see writes before corresponding release
- Synchronized-with relationship — release store synchronizes with acquire load of same value
- Happens-before — transitively establishes what is visible
- Example — flag pattern:
```c
/* Thread 1 */
data = 42; /* regular write */
atomic_store_explicit(&ready, 1, memory_order_release);

/* Thread 2 */
while (!atomic_load_explicit(&ready, memory_order_acquire));
use(data); /* guaranteed to see 42 */
```

### **Sequential Consistency**
- `memory_order_seq_cst` — default for `atomic_store`, `atomic_load`
- All seq_cst operations appear in single total order
- All threads agree on this order
- Most intuitive — but most expensive
- x86 — seq_cst store requires `MFENCE` or `XCHG` (expensive)
- ARM — requires full barrier `DMB ISH`

### **Fences**
- `atomic_thread_fence(order)` — standalone fence
- `atomic_signal_fence(order)` — compiler fence only (no hardware barrier)
- `memory_order_acquire` fence — all subsequent reads see prior releases
- `memory_order_release` fence — all prior writes visible before subsequent acquires
- `memory_order_seq_cst` fence — full barrier
- Fence is stronger than atomic with same order — doesn't need specific atomic operation

---

## **Atomic Operations — Complete**

### **Types**
- `atomic_bool`, `atomic_char`, `atomic_int`, `atomic_long`, `atomic_llong`
- `atomic_uint`, `atomic_ulong`, `atomic_ullong`
- `atomic_intptr_t`, `atomic_uintptr_t`, `atomic_size_t`, `atomic_ptrdiff_t`
- `_Atomic(T)` — make any type atomic (if supported)
- `ATOMIC_VAR_INIT(val)` — static initialization (deprecated C17)
- `atomic_init(&var, val)` — dynamic initialization

### **Operations**
- `atomic_load(&var)` — load with seq_cst
- `atomic_store(&var, val)` — store with seq_cst
- `atomic_exchange(&var, val)` — swap, returns old value
- `atomic_fetch_add(&var, n)` — add, returns old value
- `atomic_fetch_sub`, `atomic_fetch_and`, `atomic_fetch_or`, `atomic_fetch_xor`
- `atomic_compare_exchange_strong(&var, &expected, desired)` — CAS
- `atomic_compare_exchange_weak(&var, &expected, desired)` — CAS with spurious failure
- All have `_explicit` variants taking `memory_order` parameter

### **Compare-And-Swap (CAS)**
- `atomic_compare_exchange_strong(ptr, &expected, desired)`
- If `*ptr == expected` — stores desired, returns true
- If `*ptr != expected` — stores current value in expected, returns false
- Strong — no spurious failure
- Weak — may fail even if equal (for LL/SC architectures like ARM)
- Weak in loop — use weak (may be faster on ARM)
- Strong single attempt — use strong
- CAS loop pattern:
```c
int old = atomic_load(&counter);
int new;
do {
    new = old + 1;
} while (!atomic_compare_exchange_weak(&counter, &old, new));
```

### **Lock-Free Check**
- `atomic_is_lock_free(&var)` — runtime check
- `ATOMIC_BOOL_LOCK_FREE`, `ATOMIC_INT_LOCK_FREE` etc. — compile time
- 0 — never lock free
- 1 — sometimes lock free
- 2 — always lock free
- Lock-free atomic — implemented with hardware atomic instructions
- Not lock-free — implemented with hidden mutex in glibc

### **GCC Built-ins (Pre-C11)**
- `__sync_fetch_and_add(ptr, val)` — legacy
- `__atomic_load_n(ptr, order)` — newer GCC atomics
- `__atomic_store_n(ptr, val, order)`
- `__atomic_compare_exchange_n(ptr, expected, desired, weak, succ_order, fail_order)`
- `__atomic_fetch_add(ptr, val, order)`
- Prefer C11 `<stdatomic.h>` over GCC builtins

---

## **Lock-Free Data Structures — Deep**

### **Lock-Free Stack (Treiber Stack)**
```c
struct Node { int val; struct Node* next; };
_Atomic(struct Node*) top = NULL;

void push(int val) {
    struct Node* node = malloc(sizeof *node);
    node->val = val;
    node->next = atomic_load(&top);
    while (!atomic_compare_exchange_weak(&top, &node->next, node));
}

struct Node* pop(void) {
    struct Node* node = atomic_load(&top);
    while (node && !atomic_compare_exchange_weak(&top, &node, node->next));
    return node;
}
```

### **ABA Problem**
- CAS sees same value but state changed and changed back
- Pop A, modify, push A back — other thread's CAS succeeds incorrectly
- Solutions — tagged pointers (add version counter in unused bits)
- Double-width CAS — `CMPXCHG16B` on x86-64 — compare 128 bits
- Hazard pointers — prevent freeing while another thread may dereference
- RCU — Read-Copy-Update
- Epoch-based reclamation — defer free until no threads in old epoch

### **Michael-Scott Queue (Lock-Free Queue)**
- Two pointers — head (dequeue) and tail (enqueue)
- Dummy node — simplifies edge cases
- Enqueue — CAS tail to new node
- Dequeue — CAS head to next node
- Helping — if tail not pointing to last node, help advance it
- Complex but widely used

### **Lock-Free Linked List (Harris)**
- Marked pointers — LSB of next pointer = logically deleted
- Delete — mark node first, then CAS out of list
- Insert — find position, CAS
- Concurrent delete + insert — marking prevents ABA

### **Hazard Pointers**
- Each thread has K hazard pointers
- Before dereferencing pointer — store in hazard pointer
- Memory reclamation — don't free if any hazard pointer points to it
- `hp[0] = atomic_load(&node);` — protect
- After done — `hp[0] = NULL;`
- Reclamation — scan all threads' hazard pointers

### **RCU (Read-Copy-Update)**
- Readers — no synchronization, extremely fast
- Writers — copy, modify copy, atomically replace pointer
- Old version — freed after grace period (all readers have passed through)
- Grace period — all threads have scheduled at least once
- `rcu_read_lock()` / `rcu_read_unlock()` — reader critical section
- `synchronize_rcu()` — wait for grace period
- `rcu_assign_pointer` / `rcu_dereference` — memory-ordered pointer operations
- Linux kernel RCU — extremely heavily used
- Userspace RCU — `liburcu` library
- Read-mostly data structures — routing tables, network filters

---

## **Thread-Local Storage — Deep**

- TLS — each thread has own copy of variable
- `_Thread_local` — C11 keyword
- `__thread` — GCC extension (pre-C11)
- `thread_local` — C11 macro in `<threads.h>`
- `_Thread_local int counter;` — each thread has own counter
- TLS variable — zero initialized at thread start
- TLS with dynamic initializer — constructor called per thread
- `pthread_key_t` — POSIX TLS (dynamic)
- `pthread_key_create(&key, destructor)` — create key with optional destructor
- `pthread_setspecific(key, value)` — set thread-specific value
- `pthread_getspecific(key)` — get thread-specific value
- `pthread_key_delete(key)` — destroy key (doesn't call destructor)
- Destructor — called at thread exit with non-null value
- `PTHREAD_KEYS_MAX` — maximum number of keys (at least 128)
- Errno — classic TLS example — `(*__errno_location())` is TLS
- TLS implementation — segment register (FS on x86-64) points to TLS block
- FS register — points to thread control block (TCB)
- TCB — contains TLS variables, `pthread_t` info, stack info
- `TLSOFFSET` — compile-time offset into TLS block
- Dynamic TLS — for shared libraries, allocated on demand
- `dlopen` — allocates TLS for newly loaded library in all existing threads

---

## **Thread Cancellation — Deep**

- `pthread_cancel(tid)` — request cancellation
- Cancellation not immediate — delivered at cancellation point
- Cancellation types — `PTHREAD_CANCEL_DEFERRED` (default) and `PTHREAD_CANCEL_ASYNCHRONOUS`
- Deferred — cancellation at next cancellation point
- Asynchronous — cancelled at any time — dangerous, almost never use
- Cancellation points — functions where cancellation can occur
- POSIX cancellation points — `pthread_cond_wait`, `sleep`, `read`, `write`, `accept`, many more
- `pthread_testcancel()` — explicit cancellation point
- `pthread_setcancelstate(PTHREAD_CANCEL_DISABLE, &old)` — disable
- `pthread_setcanceltype(PTHREAD_CANCEL_DEFERRED, &old)` — set type
- Cleanup handlers — `pthread_cleanup_push(handler, arg)` / `pthread_cleanup_pop(execute)`
- Cleanup handlers — called on cancellation or `pthread_exit`
- Cleanup handlers are stack — LIFO order
- `pthread_cleanup_pop(1)` — execute handler even if not cancelled
- Resource leak without cleanup handlers
- C++ destructor alternative — cleanup on stack unwind
- Cancellation and mutexes — mutex unlocked if cancelled during `pthread_mutex_lock`? No — undefined. Must use cleanup handler
- Cancellation safety — cancellation-safe functions handle cleanup correctly
- Generally avoid cancellation — prefer cooperative shutdown flags

---

## **Thread Safety — Deep**

### **Categories**
- Thread-safe — safe to call from multiple threads simultaneously
- Not thread-safe — external synchronization required
- Reentrant — safe to call from signal handler while executing in another context
- Reentrant implies thread-safe (with separate stacks)
- Thread-safe does not imply reentrant

### **Common Not-Thread-Safe Functions**
- `strtok` — uses static buffer — use `strtok_r`
- `strerror` — use `strerror_r`
- `gethostbyname` — use `getaddrinfo`
- `asctime`, `ctime` — use `asctime_r`, `ctime_r`
- `gmtime`, `localtime` — use `gmtime_r`, `localtime_r`
- `inet_ntoa` — use `inet_ntop`
- `rand` — use `rand_r` or thread-local seed
- `drand48` — use `drand48_r`
- `getenv` / `setenv` — not thread-safe if another thread calls setenv
- `exit` — not safe if called from multiple threads
- `malloc` / `free` — thread-safe in glibc (has internal locks)

### **Async-Signal-Safe Functions**
- Subset of thread-safe functions
- Safe to call from signal handlers
- POSIX lists ~180 async-signal-safe functions
- `write` — async-signal-safe
- `printf` — NOT async-signal-safe (uses locks internally)
- `malloc` — NOT async-signal-safe
- `pthread_mutex_lock` — NOT async-signal-safe
- Signal handlers — use only async-signal-safe functions or volatile sig_atomic_t

---

## **Deadlock — Deep**

### **Four Conditions (Coffman)**
- Mutual exclusion — resource held exclusively
- Hold and wait — hold resource while waiting for another
- No preemption — resources not forcibly taken
- Circular wait — circular chain of threads waiting

### **Prevention**
- Lock ordering — always acquire locks in consistent global order
- Lock hierarchy — assign levels, only acquire lower-level while holding higher
- `trylock` with backoff — try all, if fail release all and retry
- Lock-free structures — eliminate mutex entirely

### **Detection**
- Lock dependency graph — edge from thread to lock it waits on
- Cycle in graph — deadlock
- Valgrind Helgrind — detects lock ordering violations
- ThreadSanitizer — detects deadlocks and data races

### **Livelock**
- Threads actively doing work but not progressing
- Two threads keep yielding to each other
- Solution — randomized backoff, priority

### **Priority Inversion**
- High priority thread waiting for mutex held by low priority thread
- Medium priority thread preempts low priority thread
- High priority effectively blocked by medium priority
- Solution — priority inheritance (`PTHREAD_PRIO_INHERIT`)
- Mars Pathfinder — famous priority inversion bug in 1997

---

## **Data Race — Formal Definition**

- Data race — two threads access same memory location concurrently
- At least one access is write
- No synchronization between accesses
- Data race — undefined behavior in C11
- Not just wrong result — entire program behavior undefined
- Compiler can assume no data race — makes aggressive optimizations
- TSan — ThreadSanitizer — detects data races at runtime
- Happens-before relation — if all accesses ordered by happens-before — no data race
- Benign data race — myth — even seemingly harmless races cause UB
- `volatile` does not prevent data races — use atomics

---

## **False Sharing — Deep**

- False sharing — two threads access different variables on same cache line
- Cache line — 64 bytes on x86
- One thread writes — cache line invalidated for all CPUs
- Other thread reads — must reload entire cache line
- Performance degrades to near-single-thread even without real sharing
- Detection — `perf c2c` — cache-to-cache transfer analysis
- Solution — pad to cache line boundary
```c
struct Counter {
    _Alignas(64) atomic_long count; /* 8 bytes + 56 padding */
};
struct Counter counters[NUM_THREADS];
```
- `__attribute__((aligned(64)))` — GCC
- `CACHELINE_SIZE` — usually 64 bytes
- True sharing — same variable — need synchronization
- False sharing — different variables — need padding

---

## **Thread Pool — Implementation Deep Dive**

```c
struct ThreadPool {
    pthread_t*      threads;
    int             num_threads;
    struct Task*    queue_head;
    struct Task*    queue_tail;
    pthread_mutex_t queue_mutex;
    pthread_cond_t  queue_cond;
    atomic_bool     shutdown;
};
```

- Worker thread — lock queue, wait for task, execute, repeat
- Submit task — lock queue, enqueue, signal condition, unlock
- Graceful shutdown — set flag, broadcast condition, join all threads
- Shutdown types — wait for all tasks, or abandon remaining
- Dynamic thread count — grow/shrink based on load
- Work stealing — idle threads steal from busy threads' queues
- `sem_post` alternative to condition variable — simpler for simple queues
- Task priorities — priority queue instead of FIFO
- Per-thread queue — reduces contention on shared queue
- Lock-free queue — eliminate mutex entirely

---

## **Barriers**

- `pthread_barrier_t` — synchronize N threads at a point
- `pthread_barrier_init(&barrier, attr, count)` — count = number of threads
- `pthread_barrier_wait(&barrier)` — block until all N threads arrive
- One thread gets `PTHREAD_BARRIER_SERIAL_THREAD` return — cleanup role
- Others get 0
- Barrier destroy — `pthread_barrier_destroy`
- Useful — parallel algorithms with phases
- All threads complete phase 1 before any start phase 2
- `pthread_barrier_attr_setpshared` — process shared

---

## **Signals & Threads**

- Signal delivered to specific thread or any thread in process
- `pthread_kill(tid, sig)` — send signal to specific thread
- `pthread_sigmask(how, set, oldset)` — per-thread signal mask
- `sigwait(&sigset, &sig)` — wait for signal
- Signal handling — one thread handles all signals (common pattern)
- Dedicated signal thread — `sigwait` loop
- Other threads — block all signals via `pthread_sigmask`
- `fork` in multithreaded program — only calling thread exists in child
- Mutexes in child after fork — may be in locked state — deadlocks
- `pthread_atfork(prepare, parent, child)` — handlers for fork
- `prepare` — acquire all locks
- `parent` — release locks in parent
- `child` — reinitialize/release locks in child
- `execve` after fork — safe, replaces entire process
- `async-signal-safe` restriction — applies in signal handlers even in threaded programs

---

## **Linux-Specific Threading**

### **futex — Direct Usage**
- `futex(addr, FUTEX_WAIT, val, timeout, ...)` — sleep if `*addr == val`
- `futex(addr, FUTEX_WAKE, n, ...)` — wake n waiters
- `FUTEX_WAIT_PRIVATE` / `FUTEX_WAKE_PRIVATE` — process-private (no global hash)
- `FUTEX_REQUEUE` — requeue waiters to another futex
- `FUTEX_CMP_REQUEUE` — conditional requeue
- Used to implement — mutex, condvar, semaphore, barriers
- `FUTEX_WAIT_BITSET` — selective wake with bitmask
- `FUTEX_WAKE_OP` — atomic op + wake
- `futex` address — used as hash key in kernel wait queue table

### **clone() — Deep**
- `clone(fn, stack, flags, arg, ptid, tls, ctid)`
- `CLONE_VM` — share address space (thread)
- `CLONE_FS` — share filesystem info
- `CLONE_FILES` — share file descriptor table
- `CLONE_SIGHAND` — share signal handlers
- `CLONE_THREAD` — same thread group (same PID)
- `CLONE_SETTLS` — set TLS (FS register)
- `CLONE_PARENT_SETTID` — write TID to parent memory
- `CLONE_CHILD_SETTID` — write TID to child memory
- `CLONE_CHILD_CLEARTID` — clear TID and wake futex on exit
- `CLONE_CHILD_CLEARTID` — used for `pthread_join` implementation

### **NPTL Implementation Details**
- `pthread_t` — pointer to `pthread` struct at top of thread stack
- Thread struct at top of stack — TLS block, TCB
- FS register — points to TCB
- `pthread_self()` — reads FS register
- Stack allocated with `mmap(MAP_STACK | MAP_ANONYMOUS)`
- Guard page — `mprotect(PROT_NONE)` at bottom of stack
- `SIGSTKSZ` — default signal stack size
- `sigaltstack` — separate signal stack per thread

### **CPU Affinity**
- `pthread_setaffinity_np(tid, cpusetsize, &cpuset)` — bind thread to CPUs
- `pthread_getaffinity_np`
- `CPU_SET(cpu, &set)`, `CPU_CLR`, `CPU_ISSET`, `CPU_ZERO`
- `sched_setaffinity(0, size, &set)` — for current thread
- Binding to single CPU — eliminates cache migration, cache thrashing
- NUMA-aware — bind to CPUs near memory
- `numactl` — command line tool
- Real-time threads — bind to isolated CPU

### **Scheduling**
- `sched_setscheduler(0, SCHED_FIFO, &param)` — set scheduling policy
- `SCHED_FIFO` — real-time, run until block or yield, no time slice
- `SCHED_RR` — real-time, round-robin with time slice
- `SCHED_OTHER` — default, completely fair scheduler (CFS)
- `SCHED_BATCH` — CPU-intensive, lower priority
- `SCHED_IDLE` — run only when nothing else
- `SCHED_DEADLINE` — EDF scheduling (Linux 3.14)
- `sched_yield()` — voluntarily yield CPU
- `pthread_setschedparam` — set per-thread priority and policy
- Real-time threads — require root or `CAP_SYS_NICE`
- Priority — 1-99 for SCHED_FIFO/RR, nice -20 to 19 for SCHED_OTHER

---

## **C11 Threads — `<threads.h>`**

- Standard C11 threading API (optional in C11, mandatory in C23)
- `thrd_t` — thread type
- `thrd_create(&tid, func, arg)` — create thread
- `thrd_join(tid, &res)` — join thread
- `thrd_detach(tid)` — detach
- `thrd_current()` — get current thread
- `thrd_equal(t1, t2)` — compare
- `thrd_yield()` — yield CPU
- `thrd_sleep(&duration, &remaining)` — sleep
- `thrd_exit(res)` — exit thread
- `mtx_t` — mutex
- `mtx_init(&mtx, type)` — types: `mtx_plain`, `mtx_recursive`, `mtx_timed`
- `mtx_lock` / `mtx_unlock` / `mtx_trylock` / `mtx_timedlock`
- `mtx_destroy`
- `cnd_t` — condition variable
- `cnd_init` / `cnd_destroy`
- `cnd_wait` / `cnd_timedwait` / `cnd_signal` / `cnd_broadcast`
- `tss_t` — thread-specific storage (equivalent to `pthread_key_t`)
- `tss_create` / `tss_get` / `tss_set` / `tss_delete`
- `once_flag` / `call_once` — one-time initialization
- Less powerful than pthreads — no rwlock, barrier, spinlock, affinity

---

## **One-Time Initialization**

- `pthread_once_t once = PTHREAD_ONCE_INIT`
- `pthread_once(&once, init_func)` — call `init_func` exactly once
- Thread-safe singleton initialization
- `init_func` called by first thread to reach it
- Other threads block until init_func returns
- C11 — `call_once(&flag, init_func)`
- C++11 — `std::call_once`
- Static local variable (C++11) — thread-safe, compiler generates equivalent
- Double-checked locking — classic pattern, broken without memory barriers
- Correct DCL — requires atomic or memory fence

---

## **Producer-Consumer Patterns**

### **Bounded Buffer**
```c
#define BUFSIZE 16
struct BoundedBuffer {
    int buf[BUFSIZE];
    int head, tail, count;
    pthread_mutex_t mutex;
    pthread_cond_t not_full;
    pthread_cond_t not_empty;
};

void produce(struct BoundedBuffer* b, int val) {
    pthread_mutex_lock(&b->mutex);
    while (b->count == BUFSIZE)
        pthread_cond_wait(&b->not_full, &b->mutex);
    b->buf[b->tail++ % BUFSIZE] = val;
    b->count++;
    pthread_cond_signal(&b->not_empty);
    pthread_mutex_unlock(&b->mutex);
}
```

### **Single Producer Single Consumer (SPSC) Lock-Free**
- Ring buffer with atomic head and tail
- Producer advances tail — only producer writes tail
- Consumer advances head — only consumer writes head
- No CAS needed — single writer per index
- Memory ordering — release on write, acquire on read
- Power of 2 size — mask instead of modulo
- Cache line separation — head and tail on different cache lines

---

## **Debugging Threads**

### **ThreadSanitizer (TSan)**
- `-fsanitize=thread` — compile and link flag
- Detects — data races, deadlocks, lock order violations
- Shadow memory — 4 words per 8 bytes application memory
- TSan overhead — 5-15x slowdown, 5-10x memory
- Reports — which lines accessed, which threads, what locks held
- False positives — possible with non-standard synchronization
- Suppress — `__attribute__((no_sanitize("thread")))`
- `TSAN_OPTIONS="history_size=7"` — more stack history

### **Helgrind (Valgrind)**
- `valgrind --tool=helgrind ./program`
- Detects — lock order violations, pthread API misuse, data races
- Slower than TSan — runs on unmodified binary
- Lock-order graph — tracks all observed lock orderings
- Reports potential deadlock if circular dependency detected

### **GDB Thread Debugging**
- `info threads` — list all threads
- `thread N` — switch to thread N
- `thread apply all bt` — backtrace all threads
- `thread apply all bt full` — full backtrace with locals
- `set scheduler-locking on` — only current thread runs
- `set scheduler-locking step` — others run on continue not step
- `break func thread N` — breakpoint only for thread N
- Watchpoint — `watch -location var` — break on any thread write

### **strace Thread Tracing**
- `strace -f ./program` — trace all threads (follow forks/clones)
- `strace -p PID -p TID` — attach to specific threads
- See `futex` calls — understand lock contention

---

## **Performance Profiling**

- `perf stat ./program` — hardware counters
- `perf record -g ./program` — sample call graphs
- `perf report` — analyze samples
- `perf lock record/report` — lock contention analysis
- `perf sched record/report` — scheduling analysis
- `mutrace` — mutex profiling library
- Lock contention — `pthread_mutex_timedlock` with short timeout — measure waits
- `lttng` — Linux Trace Toolkit — detailed thread tracing
- `bpftrace 'tracepoint:sched:sched_switch { ... }'` — scheduling events

---

## **Most Impressive Interview Questions**

- What is a data race and how does it differ from a race condition?
- Explain the C11 memory model and happens-before relation
- Why must condition variable wait use a while loop?
- What is a spurious wakeup and why does the standard allow it?
- Explain acquire-release semantics with example
- What is the ABA problem and how to solve it?
- Implement a lock-free stack using CAS
- What is false sharing and how to detect and fix it?
- Explain priority inversion and Mars Pathfinder bug
- What is the difference between `pthread_cancel` deferred and async?
- How does futex work internally?
- What is `memory_order_consume` and why is it broken in practice?
- Explain RCU — when would you use it over rwlock?
- What is double-checked locking and why is it broken without atomics?
- How does ThreadSanitizer detect data races?
- What happens to mutexes after `fork()` in a multithreaded program?
- Explain `PTHREAD_PRIO_INHERIT` and when it's needed
- What is the difference between `sem_post` and `pthread_cond_signal`?
- How do you implement a thread-safe singleton in C?
- What is `CLONE_CHILD_CLEARTID` and how does `pthread_join` use it?
- How does TLS work at the hardware level on x86-64?
- Explain Treiber stack and its ABA problem
- What is epoch-based memory reclamation?
- Why is `volatile` insufficient for thread synchronization?
- What is `memory_order_seq_cst` and when must you use it?

---

At the **deepest level**, threading in C is not just about creating threads and using mutexes — it requires understanding **CPU memory models, cache coherence protocols, kernel scheduling, hardware atomic instructions, formal memory ordering, and lock-free algorithm theory** simultaneously. This is what separates a threading expert from someone who just avoids segfaults.



Here is the **deepest possible dive into functions in C**:

---

## **Fundamentals — Exact Standard Rules**

- Function — named block of code with parameters and return type
- Function definition — provides body
- Function declaration — prototype, no body
- Function prototype — tells compiler parameter types and return type
- Without prototype — old-style, parameters assumed `int` — dangerous
- `void f()` — in C, means accepts any arguments (not zero)
- `void f(void)` — explicitly takes no arguments
- `void f()` vs `void f(void)` — different in C, same in C++
- Function name — decays to pointer to function
- `f` and `&f` — both give same address, both valid
- Calling through pointer — `fp()` or `(*fp)()` — both valid
- Function not an object — cannot assign to function, only to pointer
- Function has no size — `sizeof(f)` — constraint violation
- Return type — any type except array or function type
- Cannot return array — return pointer to array instead
- Cannot return function — return pointer to function
- Recursive functions — fully supported
- Mutual recursion — forward declaration needed
- `inline` function — hint to compiler, C99+
- `_Noreturn` / `[[noreturn]]` (C23) — function never returns

---

## **Function Declaration vs Definition**

- Declaration — `int add(int a, int b);` — tells compiler signature
- Definition — `int add(int a, int b) { return a + b; }` — provides body
- Declaration without definition — compile error if called
- Definition without declaration — implicit declaration in old C (removed C99)
- Multiple declarations — allowed, must be compatible
- Multiple definitions — ODR violation, linker error
- `extern` on function — declaration, not definition (redundant but valid)
- Static function — `static int f(void)` — internal linkage, file scope only
- `static` function — multiple TUs can define same-named static function
- Inline function — `inline int f(void) { ... }` — C99
- `static inline` — most common for header functions
- `extern inline` — provides external definition for inline function
- Prototype scope — parameter names in prototype have no linkage, optional

---

## **Parameters — Deep Rules**

### **Parameter Passing**
- C is strictly pass-by-value — always copies arguments
- No pass by reference — use pointers to simulate
- Pointer parameter — copies the pointer, not the pointed-to object
- Array parameter — decays to pointer — `int arr[]` same as `int* arr`
- `sizeof` of array parameter — gives pointer size, not array size
- Struct parameter — entire struct copied onto stack
- Large struct — expensive copy, prefer pointer
- `const` parameter — `const int* p` — caller's object not modified
- `restrict` parameter — no aliasing promise
- VLA parameter — `void f(int n, int arr[n])` — C99

### **Parameter Names**
- Parameter names in prototype — optional, ignored by compiler
- Parameter names in definition — required for use in body
- Different names in declaration vs definition — allowed
- `void f(int, int)` — valid prototype without names

### **Old-Style (K&R) Declarations**
```c
int add(a, b)  /* old-style declarator */
int a;         /* parameter declarations */
int b;
{ return a + b; }
```
- K&R style — pre-ANSI, should never use
- No type checking for callers
- `char` and `short` parameters promoted to `int`
- `float` promoted to `double`
- Still valid in C11, removed in C23

### **Default Argument Promotions**
- Applied to arguments without prototype or variadic arguments
- `char` → `int`
- `short` → `int`
- `unsigned char` → `int` (or `unsigned int` if char is unsigned)
- `unsigned short` → `int` (or `unsigned int` if short same size)
- `float` → `double`
- Array → pointer
- Function → pointer to function
- These apply in variadic function calls too

---

## **Return Values — Deep**

- `return expr;` — evaluate expression, convert to return type, return
- `return;` — only in void functions
- Falling off end of non-void function — UB if caller uses return value
- Falling off end of main — equivalent to `return 0` (C99+)
- Return type mismatch — implicit conversion if possible
- Returning pointer to local variable — dangling pointer, UB to dereference
- Returning pointer to static local — valid, same address every call
- Returning struct — copy returned (may be optimized by RVO)
- Returning array — impossible, decay prevents it — use struct wrapper
- Multiple return values — use struct, or output parameters via pointer
- Error handling — return value convention — 0 success, negative error
- POSIX convention — return -1, set errno
- Return value ignored — allowed, use `(void)f()` to silence warning

---

## **Stack Frame — Deep**

### **What's on the Stack**
- Return address — where to return after function
- Saved frame pointer — previous RBP (if frame pointer used)
- Local variables — automatic storage duration
- Saved registers — callee-saved registers used by function
- Outgoing arguments — arguments to functions called (on x86 if > 6)
- Padding — for alignment

### **x86-64 Stack Frame Layout**
```
High addresses
+------------------+
| previous frame   |
+------------------+
| return address   | ← pushed by call instruction
+------------------+
| saved RBP        | ← push RBP; mov RBP, RSP
+------------------+
| local variables  |
+------------------+
| saved registers  |
+------------------+
| outgoing args    | ← if more than 6 integer args
+------------------+ ← RSP (16-byte aligned)
Low addresses
```

### **Frame Pointer**
- RBP — frame pointer on x86-64
- Points to saved RBP on stack
- Stack is chain of frame pointers — enables stack walking
- `-fomit-frame-pointer` — remove frame pointer, one more register available
- `-fno-omit-frame-pointer` — required for accurate profiling, crash analysis
- Without frame pointer — stack unwinding uses DWARF `.eh_frame` section
- DWARF CFI — Call Frame Information — describes how to unwind each instruction

### **Stack Pointer**
- RSP — always points to top of stack
- Must be 16-byte aligned before `call` instruction
- `call` pushes 8-byte return address — makes RSP misaligned by 8
- Function prologue — subtracts from RSP to reserve locals
- Function epilogue — restores RSP, pops saved regs, returns

### **Stack Depth**
- Default stack size — 8MB on Linux
- Stack overflow — guard page catches it — `SIGSEGV`
- Recursive function — each call adds frame, can exhaust stack
- Deep recursion — convert to iteration or increase stack size
- `ulimit -s unlimited` — remove stack limit (uses virtual memory)
- `pthread_attr_setstacksize` — per-thread stack size

---

## **Calling Conventions — Complete**

### **System V AMD64 ABI (Linux/macOS)**
- Integer/pointer args 1-6 — RDI, RSI, RDX, RCX, R8, R9
- Float/double args 1-8 — XMM0-XMM7
- Additional args — pushed on stack right-to-left
- Return value (integer) — RAX (low 64 bits), RDX (high 64 bits if 128-bit)
- Return value (float) — XMM0, XMM1 if two floats
- Return value (struct) — depends on classification
- Struct <= 16 bytes, no float — RDX:RAX
- Struct with float — XMM registers
- Struct > 16 bytes — hidden first pointer argument, RDI
- Caller allocates hidden struct, passes address
- Callee stores result through hidden pointer
- Callee-saved — RBX, RBP, R12-R15
- Caller-saved — RAX, RCX, RDX, RSI, RDI, R8-R11, XMM0-XMM15
- Red zone — 128 bytes below RSP, leaf functions may use

### **Windows x64 ABI**
- Integer args 1-4 — RCX, RDX, R8, R9
- Float args 1-4 — XMM0-XMM3
- Shadow space — 32 bytes reserved on stack for first 4 args (always)
- Additional args — on stack
- Callee-saved — RBX, RBP, RDI, RSI, R12-R15, XMM6-XMM15
- Different from System V — must specify when mixing code

### **ARM64 (AAPCS64)**
- Integer args 1-8 — X0-X7
- Float args 1-8 — V0-V7
- Return integer — X0, X1 for 128-bit
- Return float — V0
- Callee-saved — X19-X28, V8-V15

### **x86 32-bit cdecl**
- All args on stack — pushed right-to-left
- Caller cleans stack
- Return value — EAX (or EDX:EAX for 64-bit)
- Callee-saved — EBX, EBP, ESI, EDI

### **x86 32-bit stdcall**
- All args on stack — pushed right-to-left
- Callee cleans stack — `ret N` instruction
- Used by Win32 API

### **x86 32-bit fastcall**
- First two args in ECX, EDX
- Rest on stack

### **Specifying Convention in GCC**
- `__attribute__((cdecl))` — cdecl
- `__attribute__((stdcall))` — stdcall
- `__attribute__((fastcall))` — fastcall
- `__attribute__((regparm(N)))` — pass N args in registers (x86 32-bit)
- `__attribute__((sysv_abi))` — force System V ABI
- `__attribute__((ms_abi))` — force Windows ABI

---

## **Variadic Functions — Complete Deep Dive**

### **Declaration**
- `int printf(const char* fmt, ...)` — ellipsis
- Must have at least one fixed parameter
- `...` must be last

### **va_list Mechanics**
- `va_list ap` — argument pointer
- `va_start(ap, last_fixed)` — initialize, points after last fixed arg
- `va_arg(ap, type)` — get next argument, advance pointer
- `va_end(ap)` — cleanup (required)
- `va_copy(dst, src)` — copy va_list state
- Must call `va_end` after `va_copy` on dst

### **Type Promotion in Variadic**
- Default argument promotions applied
- `char` → `int` — must use `va_arg(ap, int)` not `char`
- `short` → `int`
- `float` → `double` — must use `va_arg(ap, double)` not `float`
- Getting wrong type — UB

### **va_list Implementation (x86-64)**
```c
typedef struct {
    unsigned int gp_offset;  /* offset to next integer arg */
    unsigned int fp_offset;  /* offset to next float arg */
    void* overflow_arg_area; /* pointer to stack args */
    void* reg_save_area;     /* pointer to saved registers */
} va_list[1];
```
- Integer args — saved in register save area on function entry
- `va_arg(ap, int)` — reads from `reg_save_area` then `overflow_arg_area`
- Complex implementation — not just simple stack walking

### **Implementing Variadic Functions**
- Format string tells types — `printf` style
- Sentinel value — NULL terminated list
- Count first — `f(int n, ...)` — n tells how many
- Type tag per argument — `f(int count, ...)` with type+value pairs

### **Forwarding Variadic Arguments**
- Cannot pass `...` to another variadic function directly
- Must use `v` versions — `vprintf(fmt, ap)`, `vsprintf`, `vfprintf`
- `__attribute__((format(printf, 1, 2)))` — enable format string checking
- `__VA_ARGS__` — in macros, forward variadic args

### **Variadic Macros**
- `#define LOG(fmt, ...) printf(fmt, __VA_ARGS__)`
- `__VA_OPT__(,)` (C23) — optional comma if args present
- `##__VA_ARGS__` — GCC extension, remove preceding comma if empty

---

## **Inline Functions — Deep**

- `inline` keyword — C99
- `inline` — hint to compiler to inline the call
- Compiler free to ignore hint
- Inline does NOT mean always inlined
- `__attribute__((always_inline))` — force inline in GCC
- `__attribute__((noinline))` — prevent inline

### **Linkage Rules for Inline**
- `inline int f(void) { ... }` in header — inline definition
- Inline definition — not an external definition
- Multiple TUs including header — each gets own copy (if not inlined)
- Must provide external definition somewhere — or linker error if not inlined
- `extern inline int f(void) { ... }` — provides external definition
- `static inline int f(void) { ... }` — most common pattern
- `static inline` — each TU gets own copy, no external definition needed
- `static inline` — no linkage, can define in header without ODR issues
- GCC extension — `extern inline` has different semantics than C99

### **Inlining Mechanics**
- Function call overhead — saving/restoring regs, stack frame, branch
- Inlining eliminates — function call overhead
- Inlining enables — further optimizations (constant propagation, dead code)
- Code size — inlining increases code size (code bloat)
- Cache effects — larger code = more instruction cache misses
- Optimizer decides — based on function size, call site count, optimization level
- `-O0` — rarely inlines
- `-O2` — inlines small functions
- `-O3` — more aggressive inlining
- `-finline-functions` — enable inlining
- `-fno-inline` — disable all inlining
- LTO (Link Time Optimization) — inline across TU boundaries

---

## **Function Pointers — Complete**

### **Syntax**
- `int (*fp)(int, int)` — pointer to function returning int, taking two ints
- `typedef int (*BinOp)(int, int)` — typedef for cleaner code
- `BinOp fp = add` — assign
- `fp(1, 2)` — call
- `(*fp)(1, 2)` — explicit dereference, same result
- `fp == add` — compare function pointers

### **Function Pointer Arrays**
- `int (*ops[4])(int, int) = {add, sub, mul, div_fn}`
- Dispatch table — `ops[opcode](a, b)`
- Computed goto alternative — jump table via function pointers
- Command pattern — array indexed by command code

### **Function Pointer in Struct (vtable)**
```c
struct Animal_ops {
    void (*speak)(struct Animal*);
    void (*eat)(struct Animal*, const char*);
    void (*destroy)(struct Animal*);
};
struct Animal {
    const struct Animal_ops* ops;
    /* common data */
};
```
- `animal->ops->speak(animal)` — dynamic dispatch
- ops pointer shared — all instances of same type share vtable
- `static const struct Animal_ops dog_ops = { dog_speak, dog_eat, dog_destroy }`

### **Callbacks**
- `void sort(int* arr, int n, int (*cmp)(int, int))`
- `qsort(arr, n, sizeof *arr, compare_fn)` — standard callback
- `void* user_data` parameter — pass context to callback
- `int (*callback)(void* ctx, int val)` — callback with context

### **Function Pointer Casting**
- Casting to incompatible type then calling — UB
- `void (*generic)(void)` — cast any function pointer to this for storage
- Cast back before calling — valid if same original type
- `void*` and function pointer — not guaranteed same size in C standard
- POSIX — guarantees function pointer fits in `void*`
- `dlsym` returns `void*` — must cast to function pointer (POSIX extension)

### **Null Function Pointer**
- `fp == NULL` — valid check
- Calling null function pointer — UB (usually crash)
- Always check before calling external callbacks

---

## **Recursion — Deep**

### **Direct and Mutual Recursion**
- Direct — function calls itself
- Mutual — A calls B, B calls A
- Mutual recursion requires forward declaration

### **Stack Consumption**
- Each recursive call adds stack frame
- Stack depth limited — default 8MB
- Fibonacci(40) — thousands of frames
- Tail call — recursive call is last operation in function
- Tail call optimization (TCO) — reuse current frame for tail call
- C standard does not require TCO
- GCC/Clang perform TCO when possible
- `-O2` enables TCO
- Mutual tail recursion — harder for compiler to optimize

### **Tail Call Optimization**
```c
/* NOT tail recursive — must do multiplication after return */
long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

/* Tail recursive — accumulator pattern */
long factorial_tail(int n, long acc) {
    if (n <= 1) return acc;
    return factorial_tail(n - 1, n * acc); /* tail call */
}
```
- Accumulator pattern — pass partial result as parameter
- Compiler converts to loop — no extra stack frames
- Verify — check assembly for `jmp` instead of `call`

### **Converting to Iteration**
- Explicit stack — simulate call stack with data structure
- State machine — encode recursion state as enum
- Trampolining — return thunk instead of direct recursive call
- CPS (Continuation Passing Style) — explicit continuation parameter

### **Trampolining**
```c
typedef struct Thunk {
    struct Thunk* (*fn)(void* ctx);
    void* ctx;
} Thunk;

/* Run trampoline */
void* trampoline(Thunk* t) {
    while (t->fn) t = t->fn(t->ctx);
    return t->ctx;
}
```
- Each step returns next step — no stack growth
- Useful when TCO not available or reliable

---

## **Function Attributes — GCC/Clang**

### **Optimization Hints**
- `__attribute__((pure))` — no side effects, return depends only on args and global memory
- `__attribute__((const))` — stricter than pure — return depends only on args, no global reads
- `__attribute__((malloc))` — returns pointer to fresh memory, no aliasing
- `__attribute__((hot))` — frequently called, optimize aggressively
- `__attribute__((cold))` — rarely called, optimize for size, move to cold section
- `__attribute__((flatten))` — inline all calls within function
- `__attribute__((noinline))` — never inline
- `__attribute__((always_inline))` — always inline (even at -O0)
- `__attribute__((optimize("O3")))` — set optimization level per function
- `__attribute__((optimize("unroll-loops")))` — unroll loops in this function

### **Code Generation**
- `__attribute__((naked))` — no prologue/epilogue, body must be asm
- `__attribute__((interrupt))` — generate interrupt handler prologue/epilogue
- `__attribute__((target("avx2")))` — compile with AVX2 even if not global
- `__attribute__((target("no-sse")))` — disable SSE for this function
- `__attribute__((ifunc("resolver")))` — runtime function selection
- `__attribute__((section(".text.hot")))` — place in specific section
- `__attribute__((visibility("hidden")))` — symbol not exported
- `__attribute__((visibility("default")))` — symbol exported

### **Safety & Diagnostics**
- `__attribute__((noreturn))` — function never returns
- `__attribute__((warn_unused_result))` — warn if return value ignored
- `__attribute__((deprecated))` — warn on use
- `__attribute__((deprecated("use g() instead")))` — message
- `__attribute__((unavailable))` — error on use
- `__attribute__((nonnull(1, 2)))` — args 1 and 2 must not be NULL
- `__attribute__((returns_nonnull))` — return value never NULL
- `__attribute__((format(printf, 1, 2)))` — arg 1 is printf format, args start at 2
- `__attribute__((format(scanf, 1, 2)))` — scanf format checking
- `__attribute__((access(read_only, 1)))` — arg 1 is read-only pointer
- `__attribute__((access(write_only, 1, 2)))` — arg 1 is write-only, size in arg 2
- `__attribute__((alloc_size(1)))` — arg 1 is allocation size (for malloc-like)
- `__attribute__((alloc_size(1, 2)))` — args 1*2 is allocation size

### **Sanitizer Control**
- `__attribute__((no_sanitize("address")))` — exclude from ASan
- `__attribute__((no_sanitize("thread")))` — exclude from TSan
- `__attribute__((no_sanitize("undefined")))` — exclude from UBSan
- `__attribute__((no_address_safety_analysis))` — older ASan attribute

---

## **Linkage — Deep**

### **Internal Linkage**
- `static void f(void)` — internal linkage
- Only visible within translation unit
- Multiple TUs can define same-named static function
- No symbol exported to object file (or local symbol)
- `static` functions — cannot be referenced from another TU
- Optimization — compiler knows no external caller — can optimize aggressively

### **External Linkage**
- Default for non-static functions
- Symbol exported in object file
- Linker resolves references across TUs
- One definition rule — exactly one definition across all TUs
- Weak symbol — `__attribute__((weak))` — can be overridden

### **Weak Symbols**
- `__attribute__((weak))` — weak definition
- Strong definition in another TU overrides
- No strong definition — weak definition used
- Weak reference — `__attribute__((weak))` on declaration — may be NULL
- Check before calling — `if (maybe_func) maybe_func();`
- Plugin pattern — weak default implementation in library
- Test mocking — strong definition in test overrides production

### **Symbol Visibility**
- `__attribute__((visibility("default")))` — exported
- `__attribute__((visibility("hidden")))` — not exported
- `__attribute__((visibility("protected")))` — exported but not interposable
- `__attribute__((visibility("internal")))` — not accessible from other DSO
- `-fvisibility=hidden` — default all symbols hidden
- Explicit export — mark only public API as default
- Reduces dynamic symbol table size — faster startup
- Prevents symbol interposition — optimizer can devirtualize

---

## **Storage Duration & Lifetime**

### **Automatic Storage**
- Local variables — allocated on stack at block entry
- Freed at block exit — destructor not called (C has no destructors)
- Lifetime — from declaration to end of enclosing block
- Address of local — valid only within lifetime
- Returning address of local — dangling pointer

### **Static Storage**
- File scope variables — static duration
- `static` local variables — static duration, block scope
- Static local — initialized once, persists between calls
- Thread-safe static local initialization — NOT guaranteed in C (is in C++)
- Zero initialized — all static variables zero at program start
- Dynamic initialization — `static int x = compute()` — called once

### **Thread Storage**
- `_Thread_local` — one instance per thread
- Initialized at thread creation
- Destructors — not called (unlike C++ thread_local)

### **Allocated Storage**
- `malloc` — manual lifetime management
- Lifetime — from allocation to `free`
- No automatic cleanup — programmer responsible

---

## **Reentrancy — Deep**

- Reentrant function — safe to call while already executing in same or another thread
- Must not use static or global mutable state
- Must not call non-reentrant functions
- Must use only local variables or caller-provided storage
- Classic non-reentrant — `strtok` (static internal pointer)
- `strtok_r` — reentrant version (caller provides state pointer)
- `rand` non-reentrant — static seed
- `rand_r(seed)` — reentrant version
- Async-signal-safe subset of reentrant — safe from signal handler
- Reentrant ≠ thread-safe — reentrant implies thread-safe, not vice versa
- Thread-safe but not reentrant — uses mutex (signal handler deadlocks on mutex)

---

## **Inlining & Optimization — What Compiler Does**

### **What Compiler Can Do With Functions**
- Inline small functions — eliminate call overhead
- Devirtualize — prove which function pointer is called
- Interprocedural optimization — optimize across function boundaries
- Constant propagation — if args are constants, fold computation
- Dead code elimination — unused return values, unreachable code
- Tail call optimization — convert to jump
- Cloning — create specialized version for specific argument values
- Outlining — extract repeated code into function (opposite of inlining)
- Function merging — identical functions → single function
- ICF — Identical Code Folding — linker merges identical functions

### **`pure` and `const` Attributes**
- `pure` function — compiler can eliminate redundant calls
- `f(x) + f(x)` → compute once if `f` is pure
- `const` function — even stricter, no global memory reads
- `sin(x) + sin(x)` → GCC treats `sin` as `const`-like
- Without attribute — compiler must assume side effects

### **Profile Guided Optimization (PGO)**
- Collect profiling data — `-fprofile-generate`
- Run with representative input
- Recompile with profile — `-fprofile-use`
- Compiler knows — which functions hot, which branches taken
- Hot functions — placed in hot section, inlined aggressively
- Cold functions — placed in cold section, optimized for size

---

## **Function Prologue & Epilogue — Assembly Level**

### **x86-64 Prologue**
```asm
push rbp          ; save frame pointer
mov  rbp, rsp     ; set frame pointer
sub  rsp, 32      ; allocate local variables
push rbx          ; save callee-saved register
```

### **x86-64 Epilogue**
```asm
pop  rbx          ; restore callee-saved
mov  rsp, rbp     ; restore stack pointer (or leave instruction)
pop  rbp          ; restore frame pointer
ret               ; pop return address and jump
```

### **`leave` Instruction**
- `leave` — equivalent to `mov rsp, rbp; pop rbp`
- Single instruction epilogue setup

### **Naked Functions**
- `__attribute__((naked))` — no prologue/epilogue generated
- Body must be pure inline assembly
- Used for — interrupt handlers, context switches, special calling conventions

---

## **Setjmp/Longjmp — Functions That Break Rules**

- `setjmp(jmp_buf env)` — save execution context, returns 0
- `longjmp(jmp_buf env, val)` — restore context, setjmp returns val
- `val` of 0 — treated as 1
- Non-local jump — jump to saved context, even across function calls
- Stack unwinding — stack pointer restored, but no cleanup
- C++ destructors — NOT called (use exception instead)
- Local variables between setjmp and longjmp — `volatile` required
- Non-volatile locals — indeterminate value after longjmp
- `setjmp` must be called before `longjmp`
- `setjmp` in condition — `if (setjmp(env)) { /* came from longjmp */ }`
- Valid uses — error recovery in deeply nested parsing, coroutine basics
- Async-signal-safety — `longjmp` from signal handler — behavior depends
- `siglongjmp` — also restores signal mask
- `sigsetjmp(env, savesigs)` — optionally saves signal mask
- Implementation — saves registers, stack pointer, program counter
- `jmp_buf` — typically large enough for all registers

---

## **`_Noreturn` Functions**

- `_Noreturn void die(const char* msg)` — function never returns
- Compiler can assume code after call is unreachable
- Enables optimizations — no need to restore registers before call
- `[[noreturn]]` — C23 attribute syntax
- `<stdnoreturn.h>` — defines `noreturn` as `_Noreturn`
- Examples — `exit`, `abort`, `_exit`, `longjmp`, `pthread_exit`
- `exit` declared `_Noreturn` in C11+
- `__attribute__((noreturn))` — GCC extension (pre-C11)
- If function marked `_Noreturn` but actually returns — UB
- Compiler uses this for — better code after call, warning if return reachable

---

## **Closures in C — Simulation**

- C has no closures — functions cannot capture local variables
- Simulate with — function pointer + void* context
```c
typedef struct {
    int captured_val;
} Closure;

int apply(void* ctx, int x) {
    Closure* cl = (Closure*)ctx;
    return x + cl->captured_val;
}
```
- GCC nested functions — extension, captures variables from enclosing scope
- GCC nested function — creates trampoline on stack (executable stack required)
- `__block` — Objective-C/Clang blocks extension
- Blocks — `^(int x){ return x + captured; }` — closure with heap allocation
- Libffi — create closures with dynamic code generation
- C99 compound literal + struct — approximate capture

### **GCC Nested Functions (Extension)**
```c
void outer(int x) {
    int inner(int y) { return x + y; } /* captures x */
    printf("%d\n", inner(5));
}
```
- Creates trampoline on stack — small code stub with captured vars
- Requires executable stack — security concern
- Non-standard — avoid in portable code

---

## **Function-Like Macros vs Functions**

### **Macro Advantages**
- Zero overhead — no call, no push/pop
- Type generic — works with any type
- Can take type as argument — `#define SWAP(T, a, b) ...`
- Can access calling scope — useful for logging with `__FILE__`, `__LINE__`
- Compile-time constants — `#define MAX(a,b) ((a)>(b)?(a):(b))`

### **Macro Pitfalls**
- Double evaluation — `MAX(x++, y++)` — increments twice
- No type safety — no type checking
- Hard to debug — no function name in stack trace
- Operator precedence — `#define SQ(x) x*x` — `SQ(a+b)` = `a+b*a+b`
- Always parenthesize — `#define SQ(x) ((x)*(x))`
- Statement macros — wrap in `do { ... } while(0)`
- Cannot take address — no function pointer to macro

### **`_Generic` for Type-Generic Functions (C11)**
```c
#define abs_generic(x) _Generic((x),   \
    int:    abs,                         \
    long:   labs,                        \
    float:  fabsf,                       \
    double: fabs                         \
)(x)
```
- Type-safe generic selection at compile time
- No double evaluation (unlike macros)
- `tgmath.h` — uses `_Generic` internally

---

## **Compiler Intrinsics**

- Built-in functions — treated specially by compiler
- `__builtin_expect(x, val)` — branch prediction hint
- `__builtin_unreachable()` — undefined behavior, tells compiler unreachable
- `__builtin_trap()` — emit trap instruction
- `__builtin_return_address(0)` — get return address (for stack walking)
- `__builtin_frame_address(0)` — get frame pointer
- `__builtin_constant_p(x)` — true if x is compile-time constant
- `__builtin_choose_expr(cond, a, b)` — compile-time conditional
- `__builtin_types_compatible_p(T1, T2)` — type comparison
- `__builtin_offsetof(T, m)` — offset of member
- `__builtin_alloca(n)` — allocate n bytes on stack
- `__builtin_alloca_with_align(n, align)` — aligned stack allocation
- `__builtin_prefetch(addr, rw, locality)` — prefetch hint
- `__builtin_clz(x)` — count leading zeros
- `__builtin_ctz(x)` — count trailing zeros
- `__builtin_popcount(x)` — count set bits
- `__builtin_bswap32(x)` — byte swap
- `__builtin_ia32_*` — x86 intrinsics
- Intrinsics — compile to specific instructions, no function call overhead

---

## **Function Compilation Pipeline**

### **Phases**
1. Parsing — AST construction
2. Semantic analysis — type checking, implicit conversions
3. IR generation — GIMPLE (GCC) or LLVM IR
4. Optimization passes — on IR
5. Code generation — IR to machine code
6. Register allocation — virtual to physical registers
7. Instruction scheduling — reorder for pipeline efficiency

### **GCC IR Levels**
- GENERIC — high level IR, close to AST
- GIMPLE — three-address code, each statement simple
- RTL — Register Transfer Language — low level, close to assembly

### **LLVM IR**
- SSA form — Static Single Assignment — each variable assigned once
- Phi nodes — merge values from different branches
- Passes — transform and optimize IR
- `-emit-llvm` — dump LLVM IR

### **Viewing Compiler Output**
- `gcc -S file.c` — generate assembly
- `gcc -O2 -S file.c` — optimized assembly
- `objdump -d -C file.o` — disassemble object file
- `godbolt.org` — online compiler explorer
- `__asm__("nop")` — marker in assembly output

---

## **Special Functions**

### **main()**
- `int main(void)` — no arguments
- `int main(int argc, char* argv[])` — with arguments
- `int main(int argc, char** argv)` — equivalent
- `int main(int argc, char* argv[], char* envp[])` — with environment (POSIX)
- Return 0 — success
- Return nonzero — failure
- `EXIT_SUCCESS`, `EXIT_FAILURE` — portable constants
- `main` called by CRT startup — `_start` → `__libc_start_main` → `main`
- `argc` — argument count including program name
- `argv[0]` — program name (may be empty or path)
- `argv[argc]` — always NULL
- `envp` — null-terminated array of "KEY=VALUE" strings
- `getenv("PATH")` — standard way to get environment variable

### **`atexit` and `at_quick_exit`**
- `atexit(func)` — register function called at normal exit
- LIFO order — last registered called first
- At least 32 handlers guaranteed
- `at_quick_exit(func)` — called by `quick_exit()` (C11)
- `quick_exit` — doesn't flush stdio, doesn't call `atexit` handlers
- `_Exit()` — immediate termination, no handlers
- `abort()` — abnormal termination, SIGABRT, no handlers

### **Constructor/Destructor (GCC)**
- `__attribute__((constructor))` — called before main
- `__attribute__((destructor))` — called after main (or on exit)
- Priority — `constructor(100)` — lower number runs first
- `constructor(65535)` — run last before main
- Used for — library initialization, plugin loading
- Implemented via `.init_array` / `.fini_array` ELF sections

---

## **Stack Unwinding & Exception Safety**

- Stack unwinding — process of cleaning up stack frames during abnormal exit
- C — no automatic unwinding (`longjmp` unwinds stack pointer but no cleanup)
- C++ — stack unwinding calls destructors
- `setjmp`/`longjmp` — manual, no cleanup
- Signal — can interrupt any function, stack left in any state
- Cleanup — use `goto` error label pattern in C
```c
int func(void) {
    void* p = malloc(n); if (!p) goto err0;
    int fd = open(...);  if (fd<0) goto err1;
    /* work */
    close(fd);
    free(p);
    return 0;
err1: free(p);
err0: return -1;
}
```
- `__attribute__((cleanup(fn)))` — GCC, call fn when variable goes out of scope
- RAII simulation — use cleanup attribute
```c
void free_ptr(void** p) { free(*p); }
void* buf __attribute__((cleanup(free_ptr))) = malloc(n);
```

---

## **Most Impressive Interview Questions**

- What is the difference between `void f()` and `void f(void)` in C?
- What are default argument promotions and when do they apply?
- Explain the System V AMD64 ABI calling convention completely
- What is the red zone and how can leaf functions use it?
- How does `va_list` work on x86-64 — what does the struct look like?
- What is tail call optimization and how to enable it?
- What is the difference between `inline`, `static inline`, `extern inline` in C99?
- What does `__attribute__((pure))` vs `__attribute__((const))` mean?
- How does `setjmp`/`longjmp` work at the machine level?
- What local variables become indeterminate after `longjmp`?
- How do you simulate closures in C?
- What is a trampoline in GCC nested functions?
- What is `_Noreturn` and how does compiler exploit it?
- How does `__attribute__((ifunc))` work?
- What is ICF (Identical Code Folding) and when does it apply?
- Explain the complete lifecycle of a function call in assembly
- What is register allocation and how does spilling work?
- How does PGO change function compilation?
- What is the difference between weak and strong symbols?
- How does `__attribute__((constructor))` work at the ELF level?
- What is the calling convention difference between Linux and Windows on x64?
- How does `atexit` work internally?
- What is function multi-versioning with `ifunc` resolver?
- Explain why returning a struct > 16 bytes uses a hidden pointer
- What is the difference between `abort()`, `exit()`, `_Exit()`, `quick_exit()`?

---

At the **deepest level**, functions in C are not just blocks of code — they are the intersection of **language semantics, ABI contracts, compiler optimizations, linker behavior, hardware calling conventions, and runtime infrastructure**. Mastering all these dimensions is what makes a true C systems expert who can reason about every instruction their code generates.



Here is the **deepest possible dive into Design Patterns in C**:

---

## **Fundamentals — Why Patterns in C**

- Design patterns — reusable solutions to commonly occurring problems
- C has no OOP built-in — patterns must be simulated manually
- C patterns — more explicit, more control, more understanding
- Gang of Four (GoF) — 23 patterns in 3 categories
- Creational — object creation mechanisms
- Structural — object composition
- Behavioral — object communication
- C-specific patterns — not in GoF, emerge from C idioms
- Systems patterns — for OS, embedded, drivers, networking
- Pattern cost — every pattern adds indirection, complexity
- Know when NOT to use — premature abstraction is harmful
- YAGNI — You Aren't Gonna Need It
- KISS — Keep It Simple Stupid
- Patterns are vocabulary — communicate design intent

---

## **CREATIONAL PATTERNS**

---

### **Singleton**

- Ensure only one instance exists
- Global access point

```c
/* Thread-unsafe version */
struct Config* Config_get(void) {
    static struct Config instance = {0};
    static int initialized = 0;
    if (!initialized) {
        config_init(&instance);
        initialized = 1;
    }
    return &instance;
}
```

```c
/* Thread-safe with pthread_once */
static struct Config* instance = NULL;
static pthread_once_t once = PTHREAD_ONCE_INIT;

static void create_instance(void) {
    instance = malloc(sizeof *instance);
    config_init(instance);
}

struct Config* Config_get(void) {
    pthread_once(&once, create_instance);
    return instance;
}
```

- Problems — global state, hard to test, hidden dependencies
- Better alternative — dependency injection
- Monostate — multiple instances, shared state
- Registry pattern — named singletons

---

### **Factory**

- Create objects without specifying exact class
- Centralize creation logic

```c
/* Shape factory */
enum ShapeType { SHAPE_CIRCLE, SHAPE_RECT, SHAPE_TRIANGLE };

struct Shape {
    enum ShapeType type;
    double (*area)(struct Shape*);
    void   (*draw)(struct Shape*);
    void   (*destroy)(struct Shape*);
};

struct Shape* Shape_create(enum ShapeType type) {
    switch (type) {
        case SHAPE_CIRCLE:   return Circle_create();
        case SHAPE_RECT:     return Rect_create();
        case SHAPE_TRIANGLE: return Triangle_create();
        default: return NULL;
    }
}
```

- Simple factory — not technically GoF, most common
- Factory method — subclasses decide which class to instantiate
- Abstract factory — families of related objects
- Registration-based factory — register creators dynamically

```c
/* Registration-based factory */
typedef struct Shape* (*ShapeCreator)(void);

static ShapeCreator registry[256];

void Shape_register(int type_id, ShapeCreator creator) {
    registry[type_id] = creator;
}

struct Shape* Shape_create_by_id(int type_id) {
    if (registry[type_id])
        return registry[type_id]();
    return NULL;
}
```

- Plugin system — plugins register their factories
- Extensible without modifying factory code

---

### **Abstract Factory**

- Create families of related objects
- Switch entire family at once

```c
/* UI toolkit abstract factory */
struct UIFactory {
    struct Button*    (*create_button)(void);
    struct TextBox*   (*create_textbox)(void);
    struct Checkbox*  (*create_checkbox)(void);
};

/* Windows family */
static const struct UIFactory windows_factory = {
    WindowsButton_create,
    WindowsTextBox_create,
    WindowsCheckbox_create,
};

/* macOS family */
static const struct UIFactory macos_factory = {
    MacButton_create,
    MacTextBox_create,
    MacCheckbox_create,
};

/* Application uses factory */
void app_init(const struct UIFactory* factory) {
    struct Button* btn = factory->create_button();
    struct TextBox* tb = factory->create_textbox();
    /* ... */
}
```

- Swap entire UI toolkit by switching factory pointer
- Consistent family — all widgets from same family

---

### **Builder**

- Construct complex objects step by step
- Same construction process, different representations

```c
struct HttpRequest {
    char method[16];
    char url[256];
    char headers[4096];
    char body[65536];
    int  timeout_ms;
    int  follow_redirects;
};

struct HttpRequestBuilder {
    struct HttpRequest req;
};

struct HttpRequestBuilder* HttpRequestBuilder_new(void) {
    struct HttpRequestBuilder* b = calloc(1, sizeof *b);
    b->req.timeout_ms = 30000; /* defaults */
    b->req.follow_redirects = 1;
    return b;
}

struct HttpRequestBuilder* 
HttpRequestBuilder_method(struct HttpRequestBuilder* b, 
                          const char* method) {
    strncpy(b->req.method, method, sizeof b->req.method - 1);
    return b; /* return self for chaining */
}

struct HttpRequestBuilder*
HttpRequestBuilder_url(struct HttpRequestBuilder* b, 
                       const char* url) {
    strncpy(b->req.url, url, sizeof b->req.url - 1);
    return b;
}

struct HttpRequestBuilder*
HttpRequestBuilder_timeout(struct HttpRequestBuilder* b, 
                           int ms) {
    b->req.timeout_ms = ms;
    return b;
}

struct HttpRequest* HttpRequestBuilder_build(
    struct HttpRequestBuilder* b) {
    struct HttpRequest* req = malloc(sizeof *req);
    *req = b->req;
    free(b);
    return req;
}
```

- Method chaining — each setter returns builder pointer
- Fluent interface — readable construction
- Validates in build — can check required fields
- Immutable result — built object not modifiable

---

### **Prototype**

- Create objects by cloning existing instance
- Avoid expensive initialization

```c
struct Shape {
    enum ShapeType type;
    double x, y;
    double (*area)(struct Shape*);
    struct Shape* (*clone)(struct Shape*);
    void (*destroy)(struct Shape*);
};

struct Circle {
    struct Shape base;
    double radius;
};

struct Shape* Circle_clone(struct Shape* s) {
    struct Circle* orig = (struct Circle*)s;
    struct Circle* copy = malloc(sizeof *copy);
    *copy = *orig; /* memberwise copy */
    return &copy->base;
}
```

- Deep clone — must handle pointer members carefully
- Prototype registry — store named prototypes
- Clone and modify — copy then change differences
- Used in — game object templates, document templates

---

### **Object Pool**

- Reuse expensive-to-create objects
- Avoid allocation/deallocation overhead

```c
#define POOL_SIZE 64

struct Connection {
    int fd;
    int in_use;
    /* ... */
};

struct ConnectionPool {
    struct Connection slots[POOL_SIZE];
    pthread_mutex_t   mutex;
};

struct Connection* Pool_acquire(struct ConnectionPool* pool) {
    pthread_mutex_lock(&pool->mutex);
    for (int i = 0; i < POOL_SIZE; i++) {
        if (!pool->slots[i].in_use) {
            pool->slots[i].in_use = 1;
            pthread_mutex_unlock(&pool->mutex);
            return &pool->slots[i];
        }
    }
    pthread_mutex_unlock(&pool->mutex);
    return NULL; /* pool exhausted */
}

void Pool_release(struct ConnectionPool* pool, 
                  struct Connection* conn) {
    pthread_mutex_lock(&pool->mutex);
    conn->in_use = 0;
    pthread_mutex_unlock(&pool->mutex);
}
```

- Fixed pool — static array, no allocation
- Dynamic pool — grow on demand
- Thread-safe pool — mutex or lock-free
- RAII-style pool — cleanup on scope exit
- Used in — database connection pools, thread pools, memory allocators
- Pre-warmed — create all objects at startup

---

### **RAII in C (Resource Acquisition Is Initialization)**

- No destructors in C — simulate with cleanup attribute
```c
#define RAII_FREE __attribute__((cleanup(raii_free)))
#define RAII_CLOSE __attribute__((cleanup(raii_close)))

void raii_free(void** p) { free(*p); }
void raii_close(int* fd) { if (*fd >= 0) close(*fd); }

void process_file(const char* path) {
    RAII_FREE char* buf = malloc(4096);
    RAII_CLOSE int fd = open(path, O_RDONLY);
    if (fd < 0 || !buf) return; /* cleanup happens automatically */
    /* work with fd and buf */
} /* fd closed, buf freed automatically */
```

- Scope-based resource management
- Exception-safe (sort of) with goto chains
- `__attribute__((cleanup))` — GCC/Clang extension

---

## **STRUCTURAL PATTERNS**

---

### **Adapter**

- Convert interface of class into another interface clients expect
- Make incompatible interfaces work together

```c
/* Old logger interface */
struct OldLogger {
    void (*log_message)(struct OldLogger*, int level, const char* msg);
};

/* New logger interface our system expects */
struct Logger {
    void (*info)(struct Logger*, const char* msg);
    void (*error)(struct Logger*, const char* msg);
    void (*debug)(struct Logger*, const char* msg);
};

/* Adapter */
struct LoggerAdapter {
    struct Logger  base;      /* must be first */
    struct OldLogger* old;
};

static void adapter_info(struct Logger* l, const char* msg) {
    struct LoggerAdapter* a = (struct LoggerAdapter*)l;
    a->old->log_message(a->old, 1, msg);
}

static void adapter_error(struct Logger* l, const char* msg) {
    struct LoggerAdapter* a = (struct LoggerAdapter*)l;
    a->old->log_message(a->old, 3, msg);
}

struct Logger* LoggerAdapter_create(struct OldLogger* old) {
    struct LoggerAdapter* a = malloc(sizeof *a);
    a->base.info  = adapter_info;
    a->base.error = adapter_error;
    a->base.debug = adapter_info; /* reuse */
    a->old = old;
    return &a->base;
}
```

- Object adapter — wraps instance (above)
- Class adapter — inheritance-based (C++ only)
- Two-way adapter — adapts in both directions
- Used in — legacy code integration, third-party libraries

---

### **Bridge**

- Decouple abstraction from implementation
- Both can vary independently

```c
/* Implementation interface */
struct Renderer {
    void (*draw_circle)(struct Renderer*, double x, double y, double r);
    void (*draw_rect)(struct Renderer*, double x, double y, double w, double h);
};

/* Abstraction */
struct Shape {
    struct Renderer* renderer; /* bridge to implementation */
    void (*draw)(struct Shape*);
};

/* Concrete abstraction */
struct Circle {
    struct Shape base;
    double x, y, radius;
};

static void Circle_draw(struct Shape* s) {
    struct Circle* c = (struct Circle*)s;
    c->base.renderer->draw_circle(
        c->base.renderer, c->x, c->y, c->radius);
}

/* Can mix any Shape with any Renderer */
/* OpenGL renderer, Vulkan renderer, Software renderer */
/* Circle, Rect, Triangle — all use renderer interface */
```

- Abstraction and implementation vary independently
- Platform-specific implementations behind bridge
- Driver pattern — same abstraction, different hardware

---

### **Composite**

- Tree structures where individual objects and compositions treated uniformly

```c
/* File system example */
struct FSNode {
    char name[256];
    long (*size)(struct FSNode*);
    void (*print)(struct FSNode*, int depth);
    void (*destroy)(struct FSNode*);
    int is_directory;
};

struct File {
    struct FSNode base;
    long file_size;
};

struct Directory {
    struct FSNode    base;
    struct FSNode**  children;
    int              child_count;
    int              child_capacity;
};

static long Dir_size(struct FSNode* node) {
    struct Directory* d = (struct Directory*)node;
    long total = 0;
    for (int i = 0; i < d->child_count; i++)
        total += d->children[i]->size(d->children[i]);
    return total;
}

void Dir_add(struct Directory* d, struct FSNode* child) {
    if (d->child_count == d->child_capacity) {
        d->child_capacity *= 2;
        d->children = realloc(d->children,
            d->child_capacity * sizeof *d->children);
    }
    d->children[d->child_count++] = child;
}
```

- Uniform treatment — client doesn't know leaf vs composite
- Recursive operations — size, print, destroy
- Used in — UI widgets, scene graphs, document object model, expression trees

---

### **Decorator**

- Add behavior to object dynamically without modifying it
- Wrap object in decorator that adds functionality

```c
/* Stream interface */
struct Stream {
    int  (*read)(struct Stream*, void* buf, int len);
    int  (*write)(struct Stream*, const void* buf, int len);
    void (*close)(struct Stream*);
};

/* Buffered stream decorator */
struct BufferedStream {
    struct Stream  base;
    struct Stream* inner;
    char           buf[4096];
    int            buf_pos;
    int            buf_len;
};

static int BufferedStream_read(struct Stream* s, 
                                void* buf, int len) {
    struct BufferedStream* bs = (struct BufferedStream*)s;
    /* serve from buffer if available */
    if (bs->buf_pos < bs->buf_len) {
        int avail = bs->buf_len - bs->buf_pos;
        int take  = len < avail ? len : avail;
        memcpy(buf, bs->buf + bs->buf_pos, take);
        bs->buf_pos += take;
        return take;
    }
    /* refill buffer */
    bs->buf_len = bs->inner->read(bs->inner, bs->buf, sizeof bs->buf);
    bs->buf_pos = 0;
    if (bs->buf_len <= 0) return bs->buf_len;
    return BufferedStream_read(s, buf, len); /* retry */
}

struct Stream* BufferedStream_create(struct Stream* inner) {
    struct BufferedStream* bs = calloc(1, sizeof *bs);
    bs->base.read  = BufferedStream_read;
    bs->base.write = /* ... */;
    bs->base.close = /* ... */;
    bs->inner = inner;
    return &bs->base;
}

/* Stack decorators */
/* FileStream → BufferedStream → EncryptedStream → CompressedStream */
```

- Transparent wrapping — same interface as wrapped
- Stackable — multiple decorators in any order
- Used in — I/O streams, middleware, logging, encryption, compression

---

### **Facade**

- Simplified interface to complex subsystem
- Hide complexity behind simple API

```c
/* Complex subsystem */
/* AudioDevice, AudioMixer, AudioBuffer, AudioThread, AudioEffect */

/* Facade */
struct AudioSystem {
    struct AudioDevice*  device;
    struct AudioMixer*   mixer;
    struct AudioThread*  thread;
    /* internals hidden */
};

struct AudioSystem* AudioSystem_init(void) {
    struct AudioSystem* sys = malloc(sizeof *sys);
    sys->device = AudioDevice_open("/dev/audio");
    sys->mixer  = AudioMixer_create(44100, 2);
    sys->thread = AudioThread_start(sys->mixer);
    AudioDevice_set_mixer(sys->device, sys->mixer);
    return sys;
}

void AudioSystem_play_file(struct AudioSystem* sys, 
                            const char* path) {
    struct AudioBuffer* buf = AudioBuffer_load(path);
    AudioMixer_enqueue(sys->mixer, buf);
}

void AudioSystem_set_volume(struct AudioSystem* sys, float vol) {
    AudioMixer_set_master_volume(sys->mixer, vol);
}

void AudioSystem_shutdown(struct AudioSystem* sys) {
    AudioThread_stop(sys->thread);
    AudioMixer_destroy(sys->mixer);
    AudioDevice_close(sys->device);
    free(sys);
}
```

- Subsystem still accessible directly if needed
- Facade doesn't prevent direct access
- Multiple facades — different simplified views of same subsystem
- Used in — OS API wrappers, library initialization, complex system setup

---

### **Flyweight**

- Share common state among many objects
- Reduce memory for large number of similar objects

```c
/* Intrinsic state (shared) */
struct GlyphType {
    uint32_t codepoint;
    uint8_t  bitmap[64]; /* glyph bitmap */
    int      width, height;
    int      advance;
};

/* Extrinsic state (per-instance) */
struct GlyphInstance {
    struct GlyphType* type; /* shared flyweight */
    int x, y;              /* position — not shared */
    uint32_t color;        /* color — not shared */
};

/* Flyweight factory */
#define MAX_GLYPHS 65536
static struct GlyphType glyph_cache[MAX_GLYPHS];
static int glyph_loaded[MAX_GLYPHS];

struct GlyphType* GlyphType_get(uint32_t codepoint) {
    if (!glyph_loaded[codepoint]) {
        font_render_glyph(codepoint, &glyph_cache[codepoint]);
        glyph_loaded[codepoint] = 1;
    }
    return &glyph_cache[codepoint];
}

/* Millions of GlyphInstance, only ~200 GlyphType loaded */
```

- Intrinsic state — shared, immutable
- Extrinsic state — unique per instance, passed in
- Cache/factory — returns shared instance
- Used in — text rendering, game particles, forest/terrain rendering

---

### **Proxy**

- Provide surrogate or placeholder for another object

```c
/* Subject interface */
struct ImageLoader {
    void (*load)(struct ImageLoader*);
    void (*draw)(struct ImageLoader*, int x, int y);
    int  (*width)(struct ImageLoader*);
    int  (*height)(struct ImageLoader*);
};

/* Real subject */
struct RealImage {
    struct ImageLoader base;
    char filename[256];
    uint8_t* pixels;
    int w, h;
};

/* Lazy loading proxy */
struct ImageProxy {
    struct ImageLoader  base;
    char                filename[256];
    struct RealImage*   real; /* NULL until needed */
};

static void Proxy_draw(struct ImageLoader* l, int x, int y) {
    struct ImageProxy* p = (struct ImageProxy*)l;
    if (!p->real) {
        /* lazy initialization */
        p->real = RealImage_create(p->filename);
        p->real->base.load(&p->real->base);
    }
    p->real->base.draw(&p->real->base, x, y);
}
```

- Virtual proxy — lazy initialization (above)
- Remote proxy — local representative for remote object
- Protection proxy — access control
- Caching proxy — cache expensive operation results
- Logging proxy — log all method calls
- Used in — smart pointers, network connections, security, caching

---

### **Pimpl (Pointer to Implementation)**

- Hide implementation details in C
- ABI stability — change internals without recompiling clients

```c
/* Public header — parser.h */
typedef struct Parser Parser; /* opaque */
Parser* Parser_create(const char* input);
int     Parser_parse(Parser* p);
void    Parser_destroy(Parser* p);

/* Implementation — parser.c */
struct Parser {
    const char* input;
    int         pos;
    /* complex internal state */
    struct Lexer*   lexer;
    struct AST*     ast;
    struct SymTable* symtable;
};

Parser* Parser_create(const char* input) {
    Parser* p = malloc(sizeof *p);
    p->input    = input;
    p->pos      = 0;
    p->lexer    = Lexer_create(input);
    p->ast      = NULL;
    p->symtable = SymTable_create();
    return p;
}
```

- Complete hiding — users cannot access internals
- ABI stability — add members without breaking clients
- Compile firewall — changing internals doesn't recompile users
- Cost — one extra allocation, one extra indirection
- Used in — library design, plugin APIs, stable interfaces

---

## **BEHAVIORAL PATTERNS**

---

### **Observer / Event System**

- Define one-to-many dependency
- When one object changes state, all dependents notified

```c
/* Event types */
enum EventType {
    EVENT_CLICK,
    EVENT_KEY_PRESS,
    EVENT_WINDOW_RESIZE,
    EVENT_COUNT
};

/* Listener */
typedef void (*EventHandler)(void* ctx, void* event_data);

struct Listener {
    EventHandler  handler;
    void*         ctx;
    struct Listener* next;
};

/* Event system */
struct EventBus {
    struct Listener* listeners[EVENT_COUNT];
    pthread_mutex_t  mutex;
};

void EventBus_subscribe(struct EventBus* bus,
                         enum EventType type,
                         EventHandler handler,
                         void* ctx) {
    struct Listener* l = malloc(sizeof *l);
    l->handler = handler;
    l->ctx     = ctx;
    pthread_mutex_lock(&bus->mutex);
    l->next              = bus->listeners[type];
    bus->listeners[type] = l;
    pthread_mutex_unlock(&bus->mutex);
}

void EventBus_publish(struct EventBus* bus,
                       enum EventType type,
                       void* event_data) {
    pthread_mutex_lock(&bus->mutex);
    struct Listener* l = bus->listeners[type];
    pthread_mutex_unlock(&bus->mutex);
    while (l) {
        l->handler(l->ctx, event_data);
        l = l->next;
    }
}
```

- Push model — publisher sends data (above)
- Pull model — subscriber queries publisher for data
- Weak reference — subscriber unregisters before destruction
- Priority — ordered listener list
- Filtering — listener specifies which events it wants
- Thread-safe — copy listener list before iterating (reader-writer lock)

---

### **Strategy**

- Define family of algorithms, encapsulate each, make interchangeable

```c
/* Sorting strategy */
typedef int (*Comparator)(const void*, const void*);

struct SortStrategy {
    void (*sort)(void* arr, size_t n, size_t elem_size, Comparator cmp);
    const char* name;
};

/* Implementations */
static void bubble_sort(void* arr, size_t n, 
                         size_t esz, Comparator cmp) { /* ... */ }
static void quick_sort(void* arr, size_t n, 
                        size_t esz, Comparator cmp)  { /* ... */ }
static void merge_sort(void* arr, size_t n, 
                        size_t esz, Comparator cmp)  { /* ... */ }

static const struct SortStrategy strategies[] = {
    { bubble_sort, "bubble" },
    { quick_sort,  "quick"  },
    { merge_sort,  "merge"  },
};

/* Context */
struct Sorter {
    const struct SortStrategy* strategy;
};

void Sorter_sort(struct Sorter* s, void* arr, size_t n, 
                  size_t esz, Comparator cmp) {
    s->strategy->sort(arr, n, esz, cmp);
}
```

- Replace conditional logic with strategy objects
- Runtime algorithm selection
- Test strategies independently
- Used in — compression algorithms, encryption, routing, scheduling

---

### **Command**

- Encapsulate request as object
- Support undo, redo, queuing, logging

```c
struct Command {
    void (*execute)(struct Command*);
    void (*undo)(struct Command*);
    void (*destroy)(struct Command*);
};

/* Concrete command */
struct MoveCommand {
    struct Command base;
    struct Entity* entity;
    int dx, dy;          /* movement */
    int old_x, old_y;    /* for undo */
};

static void MoveCommand_execute(struct Command* cmd) {
    struct MoveCommand* mc = (struct MoveCommand*)cmd;
    mc->old_x = mc->entity->x;
    mc->old_y = mc->entity->y;
    mc->entity->x += mc->dx;
    mc->entity->y += mc->dy;
}

static void MoveCommand_undo(struct Command* cmd) {
    struct MoveCommand* mc = (struct MoveCommand*)cmd;
    mc->entity->x = mc->old_x;
    mc->entity->y = mc->old_y;
}

/* Command history for undo/redo */
struct CommandHistory {
    struct Command** stack;
    int              top;
    int              capacity;
};

void History_execute(struct CommandHistory* h, 
                      struct Command* cmd) {
    cmd->execute(cmd);
    h->stack[h->top++] = cmd;
}

void History_undo(struct CommandHistory* h) {
    if (h->top > 0) {
        struct Command* cmd = h->stack[--h->top];
        cmd->undo(cmd);
    }
}
```

- Macro commands — composite of multiple commands
- Transaction — all-or-nothing execution
- Command queue — deferred execution
- Serializable commands — save/load for replay
- Used in — text editors, games, transaction systems, task queues

---

### **Iterator**

- Provide sequential access to aggregate without exposing internals

```c
/* Generic iterator interface */
struct Iterator {
    int   (*has_next)(struct Iterator*);
    void* (*next)(struct Iterator*);
    void  (*reset)(struct Iterator*);
    void  (*destroy)(struct Iterator*);
};

/* Linked list iterator */
struct ListNode { int val; struct ListNode* next; };

struct ListIterator {
    struct Iterator   base;
    struct ListNode*  head;
    struct ListNode*  current;
};

static int ListIter_has_next(struct Iterator* it) {
    return ((struct ListIterator*)it)->current != NULL;
}

static void* ListIter_next(struct Iterator* it) {
    struct ListIterator* li = (struct ListIterator*)it;
    struct ListNode* node = li->current;
    li->current = li->current->next;
    return &node->val;
}

/* Tree iterator — flatten hierarchy */
/* File system iterator — walk directory tree */
/* Database cursor — iterator over result set */
```

- External iterator — client controls iteration (above)
- Internal iterator — iterator controls, calls callback
- Bidirectional iterator — also has `prev()`
- Random access iterator — jump to position
- Lazy evaluation — compute next only when needed
- Infinite iterator — generate sequence on demand

---

### **State Machine**

- Allow object to alter behavior when internal state changes

```c
/* Traffic light state machine */
enum LightState { STATE_RED, STATE_GREEN, STATE_YELLOW };

struct TrafficLight {
    enum LightState  state;
    int              timer;
    /* state-specific function pointers */
    void (*on_enter)(struct TrafficLight*);
    void (*on_tick)(struct TrafficLight*);
    void (*on_exit)(struct TrafficLight*);
};

/* State transition table */
struct Transition {
    enum LightState from;
    int             event;
    enum LightState to;
    void (*action)(struct TrafficLight*);
};

static const struct Transition transitions[] = {
    { STATE_RED,    EVENT_TIMER, STATE_GREEN,  start_green  },
    { STATE_GREEN,  EVENT_TIMER, STATE_YELLOW, start_yellow },
    { STATE_YELLOW, EVENT_TIMER, STATE_RED,    start_red    },
};

void Light_process_event(struct TrafficLight* l, int event) {
    for (int i = 0; i < ARRAY_SIZE(transitions); i++) {
        if (transitions[i].from == l->state &&
            transitions[i].event == event) {
            if (l->on_exit) l->on_exit(l);
            transitions[i].action(l);
            l->state = transitions[i].to;
            if (l->on_enter) l->on_enter(l);
            return;
        }
    }
}
```

- Table-driven FSM — transition table approach (above)
- Function pointer FSM — state is pointer to handler function
- Hierarchical state machine — nested states
- Used in — protocols, parsers, UI, game AI, embedded systems

```c
/* Function pointer FSM — elegant alternative */
typedef void (*StateHandler)(struct FSM*, int event);

struct FSM {
    StateHandler current_state;
};

void state_idle(struct FSM* fsm, int event) {
    if (event == EVENT_START)
        fsm->current_state = state_running;
}

void state_running(struct FSM* fsm, int event) {
    if (event == EVENT_STOP)
        fsm->current_state = state_idle;
    else if (event == EVENT_ERROR)
        fsm->current_state = state_error;
}

void FSM_process(struct FSM* fsm, int event) {
    fsm->current_state(fsm, event);
}
```

---

### **Chain of Responsibility**

- Pass request along chain of handlers
- Each handler decides to process or pass along

```c
struct Handler {
    int  (*can_handle)(struct Handler*, int request_level);
    void (*handle)(struct Handler*, void* request);
    struct Handler* next;
};

void Chain_handle(struct Handler* h, void* request, 
                   int level) {
    while (h) {
        if (h->can_handle(h, level)) {
            h->handle(h, request);
            return;
        }
        h = h->next;
    }
    /* unhandled */
}

/* Logging chain */
/* DEBUG → INFO → WARNING → ERROR */
/* Each level handles its own and above */

/* Middleware chain (HTTP) */
/* Auth → RateLimit → Logging → Handler */
```

- Build chain dynamically
- Handler passes to next if cannot handle
- Used in — logging levels, middleware, event bubbling, error handling

---

### **Mediator**

- Define object that encapsulates how set of objects interact
- Reduce coupling between components

```c
struct Mediator {
    void (*notify)(struct Mediator*, void* sender, 
                   int event, void* data);
};

struct ChatRoom {
    struct Mediator   base;
    struct User**     users;
    int               user_count;
};

static void ChatRoom_notify(struct Mediator* m, 
                             void* sender, int event, 
                             void* data) {
    struct ChatRoom* room = (struct ChatRoom*)m;
    struct User* from = sender;
    const char* msg = data;
    /* broadcast to all except sender */
    for (int i = 0; i < room->user_count; i++) {
        if (room->users[i] != from)
            User_receive(room->users[i], from, msg);
    }
}

struct User {
    struct Mediator* mediator; /* knows only mediator */
    char name[64];
};

void User_send(struct User* u, const char* msg) {
    u->mediator->notify(u->mediator, u, EVENT_MESSAGE, 
                        (void*)msg);
}
```

- Components only know mediator — not each other
- Reduces N*N connections to N connections
- Used in — chat systems, air traffic control, UI coordination

---

### **Template Method**

- Define skeleton of algorithm, subclasses fill in steps

```c
/* Data mining template */
struct DataMiner {
    /* template method — not overridden */
    void (*mine)(struct DataMiner*, const char* path);
    /* primitive operations — override these */
    void* (*open_file)(struct DataMiner*, const char* path);
    void* (*extract_data)(struct DataMiner*, void* file);
    void* (*parse_data)(struct DataMiner*, void* raw);
    void  (*analyze)(struct DataMiner*, void* data);
    void  (*close_file)(struct DataMiner*, void* file);
};

/* Template method — fixed algorithm */
static void DataMiner_mine(struct DataMiner* dm, 
                            const char* path) {
    void* f    = dm->open_file(dm, path);
    void* raw  = dm->extract_data(dm, f);
    void* data = dm->parse_data(dm, raw);
    dm->analyze(dm, data);
    dm->close_file(dm, f);
}
```

- Hollywood principle — "don't call us, we'll call you"
- Hook methods — optional override with default behavior
- Frozen spots — cannot override template method
- Hot spots — must or can override primitive operations
- Used in — frameworks, parsers, data processing pipelines

---

### **Visitor**

- Add operations to object structure without modifying it
- Separate algorithm from object structure

```c
/* Forward declarations */
struct Circle;
struct Rect;
struct Triangle;

/* Visitor interface */
struct ShapeVisitor {
    void (*visit_circle)(struct ShapeVisitor*, struct Circle*);
    void (*visit_rect)(struct ShapeVisitor*, struct Rect*);
    void (*visit_triangle)(struct ShapeVisitor*, struct Triangle*);
};

/* Shape interface with accept */
struct Shape {
    void (*accept)(struct Shape*, struct ShapeVisitor*);
};

struct Circle {
    struct Shape base;
    double radius;
};

static void Circle_accept(struct Shape* s, 
                           struct ShapeVisitor* v) {
    v->visit_circle(v, (struct Circle*)s);
}

/* Area visitor */
struct AreaVisitor {
    struct ShapeVisitor base;
    double total_area;
};

static void AreaVisitor_circle(struct ShapeVisitor* v, 
                                struct Circle* c) {
    struct AreaVisitor* av = (struct AreaVisitor*)v;
    av->total_area += M_PI * c->radius * c->radius;
}

/* Add new operations without modifying shapes */
/* DrawVisitor, SerializeVisitor, BoundsVisitor */
```

- Double dispatch — operation depends on visitor type AND element type
- Open/closed principle — add operations without modifying elements
- Cost — adding new element type requires modifying all visitors
- Used in — compilers (AST traversal), document processing

---

### **Memento**

- Capture and restore object state externally
- Without violating encapsulation

```c
/* Memento — snapshot of state */
struct EditorMemento {
    char*  text;
    int    cursor_pos;
    int    scroll_y;
};

struct Editor {
    char text[65536];
    int  cursor_pos;
    int  scroll_y;
};

struct EditorMemento* Editor_save(struct Editor* e) {
    struct EditorMemento* m = malloc(sizeof *m);
    m->text       = strdup(e->text);
    m->cursor_pos = e->cursor_pos;
    m->scroll_y   = e->scroll_y;
    return m;
}

void Editor_restore(struct Editor* e, 
                     struct EditorMemento* m) {
    strncpy(e->text, m->text, sizeof e->text - 1);
    e->cursor_pos = m->cursor_pos;
    e->scroll_y   = m->scroll_y;
}

void EditorMemento_destroy(struct EditorMemento* m) {
    free(m->text);
    free(m);
}

/* Undo stack of mementos */
struct MementoStack {
    struct EditorMemento** stack;
    int top, capacity;
};
```

- Caretaker manages mementos — doesn't inspect them
- Originator creates and uses mementos
- Incremental snapshots — store only changes (delta)
- Used in — undo/redo, game saves, transaction rollback

---

## **C-SPECIFIC PATTERNS**

---

### **Handle / Opaque Pointer**

- Most fundamental C pattern for encapsulation

```c
/* Public API — allocator.h */
typedef struct Allocator* AllocatorHandle;

AllocatorHandle Allocator_create(size_t pool_size);
void*           Allocator_alloc(AllocatorHandle h, size_t size);
void            Allocator_free(AllocatorHandle h, void* ptr);
void            Allocator_destroy(AllocatorHandle h);

/* Implementation — allocator.c */
struct Allocator {
    char*  pool;
    size_t pool_size;
    size_t used;
    /* complex free list internals */
    struct FreeBlock* free_list;
    pthread_mutex_t   mutex;
};
```

---

### **X-Macro Pattern**

- Define data once, generate multiple code pieces

```c
/* Define all error codes in one place */
#define ERROR_CODES                           \
    X(OK,              0,  "Success")         \
    X(ERR_NOMEM,      -1,  "Out of memory")   \
    X(ERR_INVAL,      -2,  "Invalid argument")\
    X(ERR_NOENT,      -3,  "Not found")       \
    X(ERR_TIMEOUT,    -4,  "Timeout")         \
    X(ERR_PERM,       -5,  "Permission denied")

/* Generate enum */
enum ErrorCode {
#define X(name, val, msg) name = val,
    ERROR_CODES
#undef X
};

/* Generate string table */
static const char* error_messages[] = {
    /* indexed by -code */
#define X(name, val, msg) [-(val)] = msg,
    ERROR_CODES
#undef X
};

/* Generate to_string function */
const char* error_to_string(enum ErrorCode e) {
    int idx = -e;
    if (idx >= 0 && idx < ARRAY_SIZE(error_messages))
        return error_messages[idx];
    return "Unknown error";
}
```

- Single source of truth — add one line for new code
- Generates enum, string table, switch cases, documentation
- Used in — error codes, opcodes, state names, register definitions

---

### **Intrusive Container**

- Embed list/tree node inside user struct

```c
/* Node embedded in user struct */
struct ListNode {
    struct ListNode* prev;
    struct ListNode* next;
};

/* User struct contains node */
struct Task {
    int              priority;
    char             name[64];
    void           (*run)(struct Task*);
    struct ListNode  list_node; /* intrusive node */
};

/* List operations on nodes */
void List_insert_after(struct ListNode* pos, 
                        struct ListNode* new_node) {
    new_node->next       = pos->next;
    new_node->prev       = pos;
    pos->next->prev      = new_node;
    pos->next            = new_node;
}

/* Get back to containing struct */
#define container_of(ptr, type, member) \
    ((type*)((char*)(ptr) - offsetof(type, member)))

struct Task* task = container_of(node, struct Task, list_node);
```

- No separate allocation for nodes
- O(1) removal — node contains prev/next
- One struct in multiple lists — multiple embedded nodes
- Used in — Linux kernel (everywhere), real-time systems

---

### **Counted String / Fat Pointer**

- Store length with string — avoid `strlen`

```c
struct String {
    char*  data;
    size_t len;
    size_t cap;
};

struct String String_from(const char* cstr) {
    size_t len = strlen(cstr);
    return (struct String){
        .data = strdup(cstr),
        .len  = len,
        .cap  = len + 1
    };
}

struct String String_concat(struct String a, struct String b) {
    struct String result;
    result.len  = a.len + b.len;
    result.cap  = result.len + 1;
    result.data = malloc(result.cap);
    memcpy(result.data, a.data, a.len);
    memcpy(result.data + a.len, b.data, b.len);
    result.data[result.len] = '\0';
    return result;
}
```

- O(1) length — no scanning
- Binary safe — can contain null bytes
- Small string optimization — inline short strings

---

### **Discriminated Union (Tagged Union)**

- Type-safe union with type tag

```c
enum ValueType {
    VAL_INT, VAL_FLOAT, VAL_STRING, VAL_BOOL, VAL_NULL
};

struct Value {
    enum ValueType type;
    union {
        long long  i;
        double     f;
        struct {
            char*  data;
            size_t len;
        } s;
        int        b;
    };
};

/* Type-safe accessors */
#define Value_as_int(v)    (assert((v).type==VAL_INT),   (v).i)
#define Value_as_float(v)  (assert((v).type==VAL_FLOAT), (v).f)
#define Value_as_string(v) (assert((v).type==VAL_STRING),(v).s)

/* Constructor functions */
static inline struct Value Value_int(long long i) {
    return (struct Value){ .type = VAL_INT, .i = i };
}

/* Pattern matching via switch */
void Value_print(struct Value v) {
    switch (v.type) {
        case VAL_INT:    printf("%lld", v.i);       break;
        case VAL_FLOAT:  printf("%g", v.f);         break;
        case VAL_STRING: printf("%.*s", 
                          (int)v.s.len, v.s.data);  break;
        case VAL_BOOL:   puts(v.b ? "true":"false"); break;
        case VAL_NULL:   puts("null");               break;
    }
}
```

---

### **Arena Allocator**

- Allocate from contiguous region, free all at once

```c
struct Arena {
    char*  base;
    size_t size;
    size_t used;
};

struct Arena Arena_create(size_t size) {
    return (struct Arena){
        .base = malloc(size),
        .size = size,
        .used = 0
    };
}

void* Arena_alloc(struct Arena* a, size_t size) {
    /* align to 8 bytes */
    size = (size + 7) & ~7;
    if (a->used + size > a->size) return NULL;
    void* ptr = a->base + a->used;
    a->used += size;
    return ptr;
}

void Arena_reset(struct Arena* a) {
    a->used = 0; /* free everything instantly */
}

void Arena_destroy(struct Arena* a) {
    free(a->base);
}
```

- O(1) allocation — just increment pointer
- O(1) free all — reset used to 0
- No fragmentation — linear allocation
- No individual free — entire arena freed at once
- Scratch arena — for temporary allocations per frame/request
- Used in — compilers, game frames, HTTP request processing

---

### **Defer Macro (Cleanup Pattern)**

```c
/* Using GCC cleanup attribute */
#define DEFER(cleanup_fn) __attribute__((cleanup(cleanup_fn)))

static void close_file(FILE** f) { if (*f) fclose(*f); }
static void free_mem(void** p)   { free(*p); }

int process(const char* path) {
    DEFER(close_file) FILE* f = fopen(path, "r");
    DEFER(free_mem)   char* buf = malloc(4096);
    if (!f || !buf) return -1;
    /* f and buf automatically cleaned up */
    return fread(buf, 1, 4096, f);
}
```

---

### **Type-Safe Callbacks with Generic Pointers**

```c
/* Type-safe event system using macros */
#define DEFINE_EVENT(name, ...) \
    typedef void (*name##_handler)(void* ctx, __VA_ARGS__); \
    struct name##_event { \
        name##_handler handler; \
        void* ctx; \
        struct name##_event* next; \
    };

DEFINE_EVENT(on_data, const char* buf, size_t len)
DEFINE_EVENT(on_error, int errcode, const char* msg)
DEFINE_EVENT(on_connect, const char* addr, int port)
```

---

### **Generic Data Structures via void***

```c
/* Type-erased vector */
struct Vector {
    void*  data;
    size_t elem_size;
    size_t count;
    size_t capacity;
};

struct Vector Vector_create(size_t elem_size) {
    return (struct Vector){
        .data      = malloc(16 * elem_size),
        .elem_size = elem_size,
        .count     = 0,
        .capacity  = 16
    };
}

void Vector_push(struct Vector* v, const void* elem) {
    if (v->count == v->capacity) {
        v->capacity *= 2;
        v->data = realloc(v->data, v->capacity * v->elem_size);
    }
    memcpy((char*)v->data + v->count * v->elem_size, 
           elem, v->elem_size);
    v->count++;
}

void* Vector_get(struct Vector* v, size_t idx) {
    return (char*)v->data + idx * v->elem_size;
}

/* Type-safe wrappers via macros */
#define VECTOR_GET(v, T, i) (*(T*)Vector_get(&(v), (i)))
#define VECTOR_PUSH(v, val) do { \
    __typeof__(val) _tmp = (val); \
    Vector_push(&(v), &_tmp); \
} while(0)
```

---

### **Callbacks with Trampoline (Function Pointer Polymorphism)**

```c
/* Virtual method table — manual vtable */
struct DeviceOps {
    int   (*open)(struct Device*, const char* path, int flags);
    ssize_t (*read)(struct Device*, void* buf, size_t len);
    ssize_t (*write)(struct Device*, const void* buf, size_t len);
    int   (*ioctl)(struct Device*, unsigned long cmd, void* arg);
    int   (*close)(struct Device*);
};

struct Device {
    const struct DeviceOps* ops;
    void*                   private_data;
};

/* Convenience wrappers */
static inline int Device_open(struct Device* d, 
                                const char* path, int flags) {
    return d->ops->open(d, path, flags);
}
```

---

## **ARCHITECTURAL PATTERNS**

---

### **Layered Architecture**

```
Application Layer  → high-level business logic
Service Layer      → orchestration
Domain Layer       → core entities and rules
Infrastructure     → I/O, DB, network
```

- Each layer only calls layer below
- No skipping layers
- Each layer has well-defined interface
- Used in — OS (syscall/VFS/block/driver), network stack (TCP/IP)

---

### **Event-Driven Architecture**

- Components communicate via events
- Decoupled — producers don't know consumers
- Event loop — central dispatcher
```c
struct EventLoop {
    struct Event*    queue;         /* circular buffer */
    int              head, tail;
    pthread_mutex_t  mutex;
    pthread_cond_t   not_empty;
    struct Handler*  handlers[MAX_EVENT_TYPES];
};
```

---

### **Pipeline Pattern**

- Data flows through sequence of processing stages

```c
typedef void* (*Stage)(void* input, void* ctx);

struct Pipeline {
    Stage*  stages;
    void**  contexts;
    int     stage_count;
};

void* Pipeline_run(struct Pipeline* p, void* input) {
    void* data = input;
    for (int i = 0; i < p->stage_count; i++)
        data = p->stages[i](data, p->contexts[i]);
    return data;
}
```

- Each stage transforms data
- Composable — add/remove stages
- Used in — image processing, compilers, network packet processing

---

### **Reactor Pattern**

- Handle concurrent I/O with single thread

```c
struct Reactor {
    int             epfd;
    struct Handler* handlers[MAX_FDS];
};

void Reactor_run(struct Reactor* r) {
    struct epoll_event events[64];
    while (1) {
        int n = epoll_wait(r->epfd, events, 64, -1);
        for (int i = 0; i < n; i++) {
            int fd = events[i].data.fd;
            r->handlers[fd]->handle(r->handlers[fd], 
                                     events[i].events);
        }
    }
}
```

- Synchronous event demultiplexing
- Single thread handles many connections
- Used in — Nginx, Redis, Node.js internals

---

## **ANTI-PATTERNS — What to Avoid**

- God struct — one struct that knows everything
- Singleton abuse — global state hidden as singleton
- Premature abstraction — interfaces before needed
- Deep inheritance chain — more than 2-3 levels via simulation
- Callback hell — deeply nested callbacks
- Excessive indirection — function pointer chains for simple operations
- Magic numbers — use named constants
- Non-obvious pointer ownership — who frees what?
- Thread-unsafe singleton — double-checked locking without atomics
- Leaky abstraction — implementation details bleed through interface
- Overengineering — patterns for simple problems

---

## **Pattern Selection Guide**

- Need one instance? → **Singleton** (or just a global, simpler)
- Need to create objects? → **Factory** or **Builder**
- Need to add behavior? → **Decorator**
- Need to hide complexity? → **Facade** or **Pimpl**
- Need to switch algorithms? → **Strategy**
- Need notification? → **Observer**
- Need undo/redo? → **Command + Memento**
- Need to traverse structure? → **Iterator** or **Visitor**
- Need state transitions? → **State Machine**
- Need object reuse? → **Object Pool**
- Need to handle requests in chain? → **Chain of Responsibility**
- Need to decouple components? → **Mediator**
- Need many small similar objects? → **Flyweight**
- Need to adapt interface? → **Adapter**
- Need stable ABI? → **Pimpl / Opaque Pointer**

---

## **Most Impressive Interview Questions**

- How do you implement virtual dispatch in C without C++?
- Implement a type-safe generic container in C
- How does Linux kernel implement polymorphism with `file_operations`?
- Explain intrusive vs non-intrusive linked lists — tradeoffs?
- How do you implement RAII in C?
- Implement observer pattern that is thread-safe
- What is the X-macro pattern and when is it useful?
- How does `container_of` work and is it defined behavior?
- Implement a lock-free object pool
- How do you simulate closures in C?
- What is the difference between Strategy and State patterns?
- How do you implement a type-safe callback system in C?
- Explain the Pimpl idiom and its ABI stability benefits
- How would you implement a plugin system in C?
- What is the difference between Decorator and Adapter patterns?
- How does the Reactor pattern differ from Proactor?
- Implement a coroutine system using setjmp/longjmp
- How do you implement double dispatch (Visitor) in C?
- What are the tradeoffs between table-driven and function-pointer FSMs?
- How does the Linux VFS layer use the Facade pattern?

---

At the **deepest level**, design patterns in C are not just about code reuse — they are about **expressing intent, managing complexity, controlling coupling, enabling extensibility, and building maintainable systems** using the tools C provides. The best C code uses patterns judiciously — applied where they solve real problems, omitted where they add unnecessary complexity.





Here is the **deepest possible dive into Assembly Language**:

---

## **What Assembly Language Actually Is**

- Assembly — human readable representation of machine code
- One-to-one correspondence — each instruction maps to machine code bytes
- Assembler — converts assembly text to object file
- Disassembler — converts machine code back to assembly
- Architecture specific — x86, ARM, MIPS, RISC-V all different
- No portability — assembly for x86 won't run on ARM
- Lowest level programmers normally work at
- Below assembly — machine code (binary), microcode (inside CPU)
- Why learn — understand what compiler does, optimize critical code, reverse engineer, write OS/bootloader/drivers, exploit development, demystify "magic"
- Two major syntaxes — AT&T (GAS, Linux) and Intel (NASM, MASM, Windows)
- AT&T — `mov src, dst` — source first
- Intel — `mov dst, src` — destination first
- This guide — Intel syntax primarily, AT&T noted where different

---

## **Computer Architecture Foundation**

### **Von Neumann Architecture**
- CPU + Memory + I/O connected by bus
- Memory stores both instructions and data
- CPU fetches instruction, decodes, executes — repeat
- Fetch-Decode-Execute cycle
- Program counter (PC/IP) — address of next instruction
- Harvard architecture — separate instruction and data memory (microcontrollers)

### **CPU Components**
- ALU — Arithmetic Logic Unit — does math and logic
- Control Unit — fetches and decodes instructions, controls dataflow
- Registers — tiny ultra-fast storage inside CPU
- Cache — L1/L2/L3 — between registers and RAM
- TLB — Translation Lookaside Buffer — virtual to physical address cache
- Branch predictor — predicts which way branch goes
- Out-of-order execution unit — reorders instructions for efficiency
- Superscalar — multiple execution units, parallel instruction execution

### **Memory Hierarchy**
```
Registers    → 1 cycle,   ~KB,   inside CPU
L1 cache     → 4 cycles,  ~32KB, inside CPU core
L2 cache     → 12 cycles, ~256KB,inside CPU
L3 cache     → 40 cycles, ~8MB,  shared between cores
RAM          → 100 cycles,~GB,   on motherboard
SSD          → 100K cycles,~TB,  storage
HDD          → 10M cycles, ~TB,  storage
```

### **Endianness**
- Little endian — LSB at lowest address — x86, x86-64, ARM (default)
- Big endian — MSB at lowest address — network byte order, PowerPC
- `0x12345678` at address 0x1000:
- Little endian: `78 56 34 12`
- Big endian: `12 34 56 78`
- Bi-endian — ARM can switch mode

---

## **x86-64 Registers — Complete**

### **General Purpose Registers (64-bit)**
```
RAX — accumulator — return values, arithmetic
RBX — base — callee-saved, general purpose
RCX — counter — loop counter, 4th arg
RDX — data — 3rd arg, I/O, high half of multiply
RSI — source index — 2nd arg, string source
RDI — destination index — 1st arg, string dest
RSP — stack pointer — top of stack, don't use directly
RBP — base pointer — frame pointer, callee-saved
R8  — 5th argument
R9  — 6th argument
R10 — caller-saved, general purpose
R11 — caller-saved, general purpose
R12 — callee-saved, general purpose
R13 — callee-saved, general purpose
R14 — callee-saved, general purpose
R15 — callee-saved, general purpose
```

### **Register Subsets — Same Physical Register**
```
RAX (64) → EAX (32) → AX (16) → AH (8 high) / AL (8 low)
RBX (64) → EBX (32) → BX (16) → BH / BL
RCX (64) → ECX (32) → CX (16) → CH / CL
RDX (64) → EDX (32) → DX (16) → DH / DL
RSI (64) → ESI (32) → SI (16) → SIL (8)
RDI (64) → EDI (32) → DI (16) → DIL (8)
RSP (64) → ESP (32) → SP (16) → SPL (8)
RBP (64) → EBP (32) → BP (16) → BPL (8)
R8  (64) → R8D (32) → R8W (16) → R8B (8)
R9  (64) → R9D (32) → R9W (16) → R9B (8)
...same pattern for R10-R15
```

### **Zero Extension Rule**
- Writing 32-bit register — zero extends to 64-bit
- `mov eax, 1` — RAX becomes `0x0000000000000001`
- Writing 8 or 16-bit register — does NOT zero extend upper bits
- `mov al, 1` — only low byte changes, upper 56 bits unchanged
- This catches many bugs — use 32-bit for zero-clearing

### **Special Purpose Registers**
- `RIP` — instruction pointer — address of next instruction
- `RFLAGS` — flags register — condition codes
- Cannot access RIP directly (only via RIP-relative addressing)
- Cannot access RFLAGS directly (only via pushf/popf or specific instructions)

### **Segment Registers**
- CS — code segment
- DS — data segment
- SS — stack segment
- ES, FS, GS — extra segments
- 64-bit mode — CS, DS, ES, SS largely ignored (base = 0)
- FS and GS — used for TLS (Thread Local Storage)
- FS base — set via `wrfsbase` or `arch_prctl(ARCH_SET_FS)`
- Linux uses FS for TLS — `[fs:0]` is thread pointer

### **SIMD Registers**
```
XMM0-XMM15  — 128-bit  (SSE)
YMM0-YMM15  — 256-bit  (AVX) — lower 128 = XMM
ZMM0-ZMM31  — 512-bit  (AVX-512)
MMX0-MMX7   — 64-bit   (legacy, maps to x87 FPU)
```

### **Control Registers**
- CR0 — protected mode enable, write protect, paging
- CR2 — page fault linear address
- CR3 — page directory base register (physical address of page table)
- CR4 — PAE, SSE enable, etc.
- EFER — extended feature enable register (long mode)

### **Debug Registers**
- DR0-DR3 — hardware breakpoint addresses
- DR6 — debug status
- DR7 — debug control

### **RFLAGS — Every Bit**
```
Bit 0  — CF  — Carry Flag
Bit 2  — PF  — Parity Flag (1 if even number of set bits in result)
Bit 4  — AF  — Auxiliary Carry (BCD arithmetic)
Bit 6  — ZF  — Zero Flag (result was zero)
Bit 7  — SF  — Sign Flag (result was negative)
Bit 8  — TF  — Trap Flag (single step debugging)
Bit 9  — IF  — Interrupt Enable Flag
Bit 10 — DF  — Direction Flag (string operations)
Bit 11 — OF  — Overflow Flag (signed overflow)
Bit 12 — IOPL — I/O Privilege Level (2 bits)
Bit 14 — NT  — Nested Task
Bit 16 — RF  — Resume Flag
Bit 17 — VM  — Virtual 8086 Mode
Bit 18 — AC  — Alignment Check
Bit 19 — VIF — Virtual Interrupt Flag
Bit 20 — VIP — Virtual Interrupt Pending
Bit 21 — ID  — CPUID supported if can toggle
```

---

## **Memory Addressing Modes**

### **Intel Syntax Addressing**
```asm
mov rax, 5          ; immediate — value 5 directly
mov rax, rbx        ; register — value from rbx
mov rax, [rbx]      ; memory indirect — address in rbx
mov rax, [0x1234]   ; direct memory — absolute address
mov rax, [rbx+8]    ; base + displacement
mov rax, [rbx+rcx]  ; base + index
mov rax, [rbx+rcx*4]; base + index*scale
mov rax, [rbx+rcx*4+8] ; base + index*scale + displacement
```

### **General Addressing Formula**
```
[base + index*scale + displacement]
base        — any 64-bit register
index       — any register except RSP
scale       — 1, 2, 4, or 8 only
displacement — 8-bit or 32-bit signed constant
```

### **RIP-Relative Addressing (64-bit)**
```asm
mov rax, [rip+offset]    ; access data relative to RIP
mov rax, [my_global]     ; assembler generates RIP-relative
lea rax, [rip+my_func]   ; get address of function
```
- Default in 64-bit for global data access
- Position independent — works regardless of load address
- Required for PIE (Position Independent Executable)

### **AT&T Syntax Differences**
```asm
# AT&T syntax
movq $5, %rax           # immediate has $ prefix
movq %rbx, %rax         # registers have % prefix
movq (%rbx), %rax       # memory with ()
movq 8(%rbx), %rax      # base + displacement
movq (%rbx,%rcx,4), %rax # base + index*scale
movq -8(%rbp), %rax     # common: local variable
```

---

## **Data Sizes and Suffixes**

### **Intel Syntax Size Specifiers**
```asm
mov al,  byte  [rax]     ; 8-bit
mov ax,  word  [rax]     ; 16-bit
mov eax, dword [rax]     ; 32-bit
mov rax, qword [rax]     ; 64-bit
```

### **AT&T Syntax Suffixes**
```asm
movb — byte  (8-bit)
movw — word  (16-bit)
movl — long  (32-bit)
movq — quad  (64-bit)
```

### **Data Definition Directives (NASM)**
```asm
db 0x41          ; define byte
dw 0x1234        ; define word (2 bytes)
dd 0x12345678    ; define doubleword (4 bytes)
dq 0x1234567890  ; define quadword (8 bytes)
dt 1.0           ; define 10-byte (x87 extended)
```

---

## **Core Instructions — Complete**

### **Data Movement**
```asm
mov  dst, src         ; copy src to dst
movzx dst, src        ; move with zero extension
movsx dst, src        ; move with sign extension
movsxd rax, eax       ; sign extend 32→64
xchg  a, b            ; exchange (atomic if memory)
push  src             ; RSP-=8, [RSP]=src
pop   dst             ; dst=[RSP], RSP+=8
pushf                 ; push RFLAGS
popf                  ; pop RFLAGS
pushaq/popaq          ; push/pop all GPRs (no 64-bit equiv)
lea   dst, [addr]     ; load effective address — compute address, don't dereference
```

### **LEA — Powerful Trick**
```asm
lea rax, [rbx+rcx]       ; rax = rbx + rcx (addition without ADD)
lea rax, [rbx+rbx*2]     ; rax = rbx * 3
lea rax, [rbx*4+rbx]     ; rax = rbx * 5
lea rax, [rax+1]         ; rax++ (alternative to inc)
lea rax, [rbx+rcx*8+16]  ; complex calculation in one instruction
```
- No flags affected — unlike ADD
- Three-operand addition — add two regs + constant
- Address calculation only — never accesses memory

### **Arithmetic**
```asm
add  dst, src          ; dst = dst + src
sub  dst, src          ; dst = dst - src
inc  dst               ; dst++
dec  dst               ; dst--
neg  dst               ; dst = -dst (two's complement)
adc  dst, src          ; dst = dst + src + CF (add with carry)
sbb  dst, src          ; dst = dst - src - CF (subtract with borrow)
mul  src               ; unsigned: RDX:RAX = RAX * src
imul src               ; signed: RDX:RAX = RAX * src
imul dst, src          ; dst = dst * src
imul dst, src, imm     ; dst = src * imm
div  src               ; unsigned: RAX = RDX:RAX / src, RDX = remainder
idiv src               ; signed division
```

### **Division — Deep**
```asm
; 64-bit divide
xor rdx, rdx      ; clear rdx (high half of dividend)
mov rax, 100      ; dividend in rax
mov rcx, 7        ; divisor
div rcx            ; rax = quotient, rdx = remainder
```
- Dividend always in RDX:RAX for 64-bit
- Must zero/sign extend RAX into RDX before divide
- `xor rdx, rdx` — for unsigned
- `cqo` (convert quad to octo) — sign extend RAX into RDX for signed
- Division by zero — #DE exception
- Quotient overflow — #DE exception (result doesn't fit in RAX)

### **Logic**
```asm
and  dst, src     ; bitwise AND
or   dst, src     ; bitwise OR
xor  dst, src     ; bitwise XOR
not  dst          ; bitwise NOT (no flags)
test dst, src     ; AND without storing (sets flags only)
```

### **Shifts and Rotates**
```asm
shl  dst, count   ; shift left logical (same as sal)
shr  dst, count   ; shift right logical (fills with 0)
sal  dst, count   ; shift arithmetic left (same as shl)
sar  dst, count   ; shift arithmetic right (fills with sign bit)
rol  dst, count   ; rotate left
ror  dst, count   ; rotate right
rcl  dst, count   ; rotate left through carry
rcr  dst, count   ; rotate right through carry
shld dst, src, count  ; double precision shift left
shrd dst, src, count  ; double precision shift right
```

### **Comparison**
```asm
cmp  dst, src     ; dst - src, set flags, discard result
test dst, src     ; dst & src, set flags, discard result
```
- `cmp a, b` followed by conditional jump
- `test rax, rax` — check if rax is zero (faster than `cmp rax, 0`)
- `test rax, rax` — sets ZF=1 if rax==0, SF=1 if rax<0

### **Jumps — Complete**
```asm
jmp  label        ; unconditional jump
; Unsigned conditions (after CMP):
ja   label        ; jump if above (CF=0 and ZF=0)
jae  label        ; jump if above or equal (CF=0)
jb   label        ; jump if below (CF=1)
jbe  label        ; jump if below or equal (CF=1 or ZF=1)
; Signed conditions:
jg   label        ; jump if greater (ZF=0 and SF=OF)
jge  label        ; jump if greater or equal (SF=OF)
jl   label        ; jump if less (SF≠OF)
jle  label        ; jump if less or equal (ZF=1 or SF≠OF)
; Flag conditions:
je   label        ; jump if equal / zero (ZF=1)
jne  label        ; jump if not equal (ZF=0)
jz   label        ; same as je
jnz  label        ; same as jne
jc   label        ; jump if carry (CF=1)
jnc  label        ; jump if no carry
jo   label        ; jump if overflow (OF=1)
jno  label        ; jump if no overflow
js   label        ; jump if sign (SF=1, negative)
jns  label        ; jump if no sign (positive)
jp   label        ; jump if parity even (PF=1)
jnp  label        ; jump if parity odd
jcxz label        ; jump if CX=0
jecxz label       ; jump if ECX=0
jrcxz label       ; jump if RCX=0
```

### **Conditional Move (cmov)**
```asm
cmove  dst, src   ; move if equal (ZF=1)
cmovne dst, src   ; move if not equal
cmovg  dst, src   ; move if greater
cmovl  dst, src   ; move if less
cmova  dst, src   ; move if above (unsigned)
; ...all conditional variants
```
- No branch — avoids branch misprediction
- `cmov` only from register or memory — not immediate
- Faster for unpredictable branches

### **Set Byte (setcc)**
```asm
sete  al          ; al = 1 if ZF=1, else 0
setne al          ; al = 1 if ZF=0
setg  al          ; al = 1 if greater
setl  al          ; al = 1 if less
seta  al          ; al = 1 if above (unsigned)
; ...all conditions
```
- Convert flag to integer 0 or 1
- `xor eax, eax; sete al` — zero-extend result

---

## **Stack Operations — Deep**

### **Stack Layout**
- Stack grows downward — lower addresses
- RSP points to TOP of stack (lowest address in use)
- Push — decrements RSP then stores
- Pop — loads then increments RSP
- Stack must be 16-byte aligned before CALL instruction
- CALL pushes 8-byte return address — misaligns by 8

### **Push/Pop**
```asm
push rax          ; RSP -= 8; [RSP] = rax
pop  rbx          ; rbx = [RSP]; RSP += 8
push 0x1234       ; push immediate
push qword [rax]  ; push memory value
```

### **Calling Convention (System V AMD64)**
```asm
; Arguments:  RDI, RSI, RDX, RCX, R8, R9, then stack
; Return:     RAX (RDX for 128-bit)
; Callee saves: RBX, RBP, R12-R15
; Caller saves: everything else
```

### **Function Prologue**
```asm
push rbp          ; save caller's frame pointer
mov  rbp, rsp     ; set our frame pointer
sub  rsp, 32      ; allocate local variables (keep aligned)
push rbx          ; save callee-saved register
push r12          ; save another callee-saved
```

### **Function Epilogue**
```asm
pop  r12          ; restore callee-saved
pop  rbx          ; restore callee-saved
mov  rsp, rbp     ; restore stack pointer
pop  rbp          ; restore caller's frame pointer
ret               ; pop return address and jump
```

### **`leave` Instruction**
```asm
leave             ; equivalent to: mov rsp, rbp; pop rbp
ret
```

### **Stack Frame**
```
[rbp+16] — second argument (if on stack)
[rbp+8]  — first argument (if on stack) or return address
[rbp+0]  — saved RBP ← RBP points here
[rbp-8]  — first local variable
[rbp-16] — second local variable
[rbp-n]  — nth local variable
```

---

## **CALL and RET — Deep**

### **CALL**
```asm
call func         ; push rip; jmp func
call [rax]        ; indirect call — address in rax
call rax          ; indirect call — address in rax
```
- Pushes return address (next instruction after call)
- Jumps to target
- `call` modifies RSP and RIP

### **RET**
```asm
ret               ; pop rip (jump to return address)
ret 8             ; pop rip; rsp += 8 (stdcall cleanup)
```

### **Near vs Far Calls**
- Near call — same segment (always in 64-bit flat model)
- Far call — change CS:RIP (for privilege level changes, legacy)
- `syscall` — fast system call (64-bit Linux)

---

## **String Instructions**

```asm
; Move data
movsb    ; [rdi] = [rsi]; rsi++ or rsi--; rdi++ or rdi--
movsw    ; move word
movsd    ; move doubleword
movsq    ; move quadword

; Store
stosb    ; [rdi] = al; rdi++ or rdi--
stosw    ; store word from ax
stosd    ; store dword from eax
stosq    ; store qword from rax

; Load
lodsb    ; al = [rsi]; rsi++
lodsw    ; load word to ax
lodsd    ; load dword to eax
lodsq    ; load qword to rax

; Compare
cmpsb    ; [rsi] - [rdi]; update rsi, rdi; set flags
scasb    ; al - [rdi]; update rdi; set flags

; Direction flag
cld      ; clear DF — auto-increment (forward)
std      ; set DF — auto-decrement (backward)
```

### **REP Prefix**
```asm
rep   movsb    ; repeat while RCX != 0; RCX--
repe  cmpsb    ; repeat while equal and RCX != 0
repne scasb    ; repeat while not equal and RCX != 0
repz  cmpsb    ; same as repe
repnz scasb    ; same as repne
```

### **memcpy equivalent**
```asm
; memcpy(dst=rdi, src=rsi, n=rcx)
cld              ; forward direction
rep movsb        ; copy rcx bytes from rsi to rdi
```

### **memset equivalent**
```asm
; memset(dst=rdi, val=al, n=rcx) — byte version
cld
rep stosb        ; store al to [rdi], rcx times
```

### **strlen equivalent**
```asm
; strlen(s=rdi) → rax
xor  rcx, rcx
not  rcx         ; rcx = 0xFFFFFFFFFFFFFFFF (huge count)
xor  al, al      ; looking for 0
cld
repne scasb      ; scan until [rdi]==0
not  rcx
dec  rcx         ; rcx = length
mov  rax, rcx
```

---

## **x87 FPU — Legacy Floating Point**

### **FPU Stack**
- 8-register stack — ST(0) through ST(7)
- ST(0) — top of stack
- Push — value loaded into ST(0), others shift down
- Pop — ST(0) removed, others shift up
- 80-bit extended precision internally

### **FPU Instructions**
```asm
fld   src        ; load onto FPU stack
fldz             ; push 0.0
fld1             ; push 1.0
fldpi            ; push π
fst   dst        ; store ST(0) to memory
fstp  dst        ; store and pop
fadd  src        ; ST(0) += src
fsub  src        ; ST(0) -= src
fmul  src        ; ST(0) *= src
fdiv  src        ; ST(0) /= src
faddp            ; ST(1) += ST(0), pop
fcomis           ; compare (SSE) — easier to use
fxch  ST(n)      ; exchange ST(0) with ST(n)
fsqrt            ; ST(0) = sqrt(ST(0))
fsin             ; ST(0) = sin(ST(0))
fcos             ; ST(0) = cos(ST(0))
fptan            ; ST(0) = tan(ST(0)), push 1.0
fyl2x            ; ST(1) = ST(1) * log2(ST(0)), pop
```

- Largely replaced by SSE/AVX in 64-bit code
- Still used by some compilers for long double (80-bit)
- Complex programming model — stack discipline required

---

## **SSE / SSE2 — Scalar and Packed Float**

### **SSE Scalar (single value)**
```asm
movss  xmm0, [rax]    ; load 32-bit float into xmm0[31:0]
movsd  xmm0, [rax]    ; load 64-bit double into xmm0[63:0]
addss  xmm0, xmm1     ; xmm0 = xmm0 + xmm1 (single float)
addsd  xmm0, xmm1     ; xmm0 = xmm0 + xmm1 (double)
mulss  xmm0, xmm1     ; multiply scalar single
mulsd  xmm0, xmm1     ; multiply scalar double
divss  xmm0, xmm1     ; divide
sqrtss xmm0, xmm1     ; square root
comiss xmm0, xmm1     ; compare singles, set EFLAGS
comisd xmm0, xmm1     ; compare doubles
```

### **SSE Packed (4 floats simultaneously)**
```asm
movaps xmm0, [rax]    ; load 4 aligned floats (16-byte aligned)
movups xmm0, [rax]    ; load 4 unaligned floats
addps  xmm0, xmm1     ; add 4 floats in parallel
mulps  xmm0, xmm1     ; multiply 4 floats in parallel
divps  xmm0, xmm1     ; divide 4 floats
sqrtps xmm0, xmm1     ; 4 square roots
maxps  xmm0, xmm1     ; element-wise max
minps  xmm0, xmm1     ; element-wise min
```

### **Integer SSE2**
```asm
paddb  xmm0, xmm1     ; add 16 bytes in parallel
paddw  xmm0, xmm1     ; add 8 words in parallel
paddd  xmm0, xmm1     ; add 4 dwords
paddq  xmm0, xmm1     ; add 2 qwords
pand   xmm0, xmm1     ; bitwise AND of 128 bits
por    xmm0, xmm1     ; bitwise OR
pxor   xmm0, xmm1     ; bitwise XOR
pcmpeqb xmm0, xmm1   ; compare 16 bytes, result 0xFF or 0x00
movdqa xmm0, [rax]   ; move 16 bytes aligned
movdqu xmm0, [rax]   ; move 16 bytes unaligned
```

---

## **AVX / AVX2 — 256-bit Operations**

```asm
vmovaps ymm0, [rax]       ; load 32 bytes (8 floats)
vaddps  ymm0, ymm1, ymm2  ; three-operand: ymm0 = ymm1 + ymm2
vmulps  ymm0, ymm1, ymm2  ; multiply 8 floats
vbroadcastss ymm0, [rax]  ; broadcast single float to all 8 lanes
vpbroadcastd ymm0, [rax]  ; broadcast dword to all 8 elements
vfmadd231ps ymm0, ymm1, ymm2 ; ymm0 += ymm1 * ymm2 (FMA)
vpermps ymm0, ymm1, ymm2  ; permute floats according to index
```

### **AVX-512**
```asm
vmovaps zmm0, [rax]          ; load 64 bytes (16 floats)
vaddps  zmm0{k1}, zmm1, zmm2 ; masked add — only elements where k1 bit set
vpaddd  zmm0, zmm1, zmm2     ; add 16 dwords in parallel
```

---

## **Bit Manipulation Instructions (BMI)**

```asm
; BMI1
andn  rax, rbx, rcx   ; rax = ~rbx & rcx
blsi  rax, rbx        ; rax = rbx & (-rbx) — isolate lowest set bit
blsmsk rax, rbx       ; rax = rbx ^ (rbx-1) — mask up to lowest set bit
blsr  rax, rbx        ; rax = rbx & (rbx-1) — reset lowest set bit
bextr rax, rbx, rcx   ; extract bitfield from rbx using rcx

; BMI2
bzhi  rax, rbx, rcx   ; zero bits above index rcx
mulx  rdx, rax, rbx   ; multiply without affecting flags
pdep  rax, rbx, rcx   ; parallel bits deposit
pext  rax, rbx, rcx   ; parallel bits extract
rorx  rax, rbx, imm   ; rotate right without flags
sarx  rax, rbx, rcx   ; shift arithmetic right without flags
shlx  rax, rbx, rcx   ; shift left without flags
shrx  rax, rbx, rcx   ; shift right without flags
```

---

## **Control Flow — Advanced**

### **Indirect Jump (Jump Tables)**
```asm
; Switch statement implementation
cmp  rax, 5
ja   .default         ; out of range
lea  rcx, [jump_table]
jmp  [rcx+rax*8]      ; jump to address in table

jump_table:
    dq case0
    dq case1
    dq case2
    dq case3
    dq case4
    dq case5
```

### **Loop Instructions**
```asm
loop  label    ; RCX--; jump if RCX != 0
loope label    ; RCX--; jump if RCX != 0 and ZF=1
loopne label   ; RCX--; jump if RCX != 0 and ZF=0
```
- Rarely used — compiler doesn't generate them (slower than dec+jnz)

### **Computed Goto Pattern**
```asm
; Dispatch table — equivalent to switch or function table
movsx rax, byte [rip+bytecodes+rip_offset]  ; fetch next opcode
lea   rbx, [rip+dispatch_table]
jmp   [rbx+rax*8]        ; jump to handler
```

---

## **Procedure Linkage — Deep**

### **Caller Responsibilities**
1. Save caller-saved registers (RAX, RCX, RDX, RSI, RDI, R8-R11, XMM0-15)
2. Place arguments in registers (RDI, RSI, RDX, RCX, R8, R9)
3. Push remaining args on stack (right to left)
4. Ensure RSP 16-byte aligned before call
5. Execute `call`
6. Clean up any stack arguments after return
7. Retrieve return value from RAX/XMM0

### **Callee Responsibilities**
1. Save callee-saved registers (RBX, RBP, R12-R15)
2. Set up stack frame (push rbp; mov rbp, rsp)
3. Allocate space for locals (sub rsp, N)
4. Execute function body
5. Place return value in RAX/XMM0
6. Restore callee-saved registers
7. Tear down stack frame (leave or mov rsp,rbp; pop rbp)
8. Execute `ret`

### **Red Zone**
- 128 bytes below RSP — leaf functions may use without adjusting RSP
- Signal handlers must not use red zone — they may overwrite it
- `-mno-red-zone` — disable for kernel code
- Leaf function — does not call other functions

---

## **System Calls — Linux x86-64**

### **syscall Convention**
```asm
; syscall number in RAX
; Arguments: RDI, RSI, RDX, R10, R8, R9
; Return: RAX (negative = error, maps to -errno)
; Clobbered: RCX, R11 (and RAX for return)

; write(1, "hello\n", 6)
mov  rax, 1           ; syscall number for write
mov  rdi, 1           ; fd = stdout
lea  rsi, [rip+msg]   ; buf = pointer to message
mov  rdx, 6           ; len = 6
syscall               ; invoke kernel

; exit(0)
mov  rax, 60          ; syscall number for exit
xor  rdi, rdi         ; exit code = 0
syscall
```

### **Common Syscall Numbers (Linux x86-64)**
```
0  — read
1  — write
2  — open
3  — close
4  — stat
5  — fstat
8  — lseek
9  — mmap
10 — mprotect
11 — munmap
12 — brk
39 — getpid
57 — fork
59 — execve
60 — exit
61 — wait4
```

### **syscall vs int 0x80**
- `int 0x80` — 32-bit ABI, slower, still works in 64-bit (uses 32-bit registers)
- `syscall` — 64-bit ABI, fast (no mode switch cost), use this
- `VDSO` — some syscalls (gettimeofday, clock_gettime) in user space — no syscall instruction needed

---

## **Assembler Directives — NASM**

```asm
section .text         ; code section
section .data         ; initialized data
section .bss          ; uninitialized data
section .rodata       ; read-only data

global _start         ; export symbol
global func           ; export function
extern printf         ; import external symbol

; Data definitions
msg    db "hello", 10, 0   ; string with newline and null
num    dd 42               ; 32-bit integer
arr    dd 1, 2, 3, 4       ; array of dwords
buf    resb 1024           ; reserve 1024 bytes (bss)
count  resd 1              ; reserve 1 dword

; Alignment
align  16             ; align to 16-byte boundary
alignb 64             ; align bytes to 64

; Constants
BUFFER_SIZE equ 4096  ; define constant (no storage)
%define MAX 100       ; preprocessor define

; Macros
%macro prologue 0
    push rbp
    mov  rbp, rsp
%endmacro

%macro epilogue 0
    pop  rbp
    ret
%endmacro
```

---

## **NASM vs GAS vs MASM**

### **NASM (Netwide Assembler)**
- Intel syntax
- Popular on Linux
- Clean, consistent syntax
- `nasm -f elf64 file.asm -o file.o`

### **GAS (GNU Assembler)**
- AT&T syntax by default
- Can use Intel syntax with `.intel_syntax noprefix`
- Used by GCC for inline assembly
- `as file.s -o file.o`

### **MASM (Microsoft Macro Assembler)**
- Intel syntax
- Windows only
- Complex macro system
- Integrated with Visual Studio

### **FASM (Flat Assembler)**
- Self-hosting — written in assembly
- Clean syntax
- Good for bootloaders

---

## **Inline Assembly in C — Deep**

### **Basic GCC Inline Assembly**
```c
/* Simple inline — read TSC */
uint64_t rdtsc(void) {
    uint32_t lo, hi;
    __asm__ volatile (
        "rdtsc"
        : "=a"(lo), "=d"(hi)
    );
    return ((uint64_t)hi << 32) | lo;
}
```

### **Extended Inline Assembly Syntax**
```c
__asm__ volatile (
    "assembly code"
    : output operands
    : input operands
    : clobber list
);
```

### **Constraints**
```c
"=r"  — output, any register
"=m"  — output, memory location
"=a"  — output in rax/eax/ax/al
"=b"  — output in rbx
"=c"  — output in rcx
"=d"  — output in rdx
"=S"  — output in rsi
"=D"  — output in rdi
"r"   — input, any register
"m"   — input, memory
"i"   — immediate constant
"g"   — any (register, memory, or immediate)
"0"   — same register as operand 0
"+r"  — read-write register
```

### **Examples**
```c
/* Add two numbers */
int add_asm(int a, int b) {
    int result;
    __asm__ (
        "add %1, %0"
        : "=r"(result)
        : "r"(b), "0"(a)
    );
    return result;
}

/* Memory barrier */
__asm__ volatile ("mfence" ::: "memory");

/* Compiler barrier only */
__asm__ volatile ("" ::: "memory");

/* CPUID */
void cpuid(uint32_t leaf, uint32_t* eax, uint32_t* ebx,
           uint32_t* ecx, uint32_t* edx) {
    __asm__ volatile (
        "cpuid"
        : "=a"(*eax), "=b"(*ebx), "=c"(*ecx), "=d"(*edx)
        : "a"(leaf)
    );
}

/* xchg — atomic swap */
uint64_t atomic_xchg(uint64_t* ptr, uint64_t val) {
    __asm__ volatile (
        "xchg %0, %1"
        : "+m"(*ptr), "+r"(val)
    );
    return val;
}
```

### **Clobber List**
```c
"rax"    — register rax modified
"memory" — memory may be modified (full compiler memory barrier)
"cc"     — condition codes (RFLAGS) modified
```

---

## **Bootloader — From Power On**

### **BIOS Boot Process**
1. Power on — CPU starts at `0xFFFFFFF0` (reset vector)
2. BIOS initializes hardware
3. BIOS loads first 512 bytes of boot device to `0x7C00`
4. BIOS jumps to `0x7C00` — your code runs
5. CPU in real mode — 16-bit, 1MB address space

### **Minimal Bootloader (x86 Real Mode)**
```asm
[bits 16]
[org 0x7C00]

start:
    ; Set up segments
    xor  ax, ax
    mov  ds, ax
    mov  es, ax
    mov  ss, ax
    mov  sp, 0x7C00      ; stack below bootloader

    ; Print character using BIOS
    mov  ah, 0x0E        ; BIOS teletype function
    mov  al, 'H'         ; character
    int  0x10            ; BIOS video interrupt

    ; Read disk sector using BIOS
    mov  ah, 0x02        ; read sectors
    mov  al, 1           ; number of sectors
    mov  ch, 0           ; cylinder
    mov  cl, 2           ; sector (1-based)
    mov  dh, 0           ; head
    mov  dl, 0x80        ; drive (0x80 = first hard disk)
    mov  bx, 0x8000      ; buffer at es:bx
    int  0x13            ; BIOS disk interrupt

    jmp  $               ; infinite loop

times 510-($-$$) db 0   ; pad to 510 bytes
dw 0xAA55               ; boot signature
```

### **Switching to Protected Mode**
```asm
; 1. Disable interrupts
cli

; 2. Load GDT
lgdt [gdt_descriptor]

; 3. Set PE bit in CR0
mov  eax, cr0
or   eax, 1
mov  cr0, eax

; 4. Far jump to flush pipeline and load CS
jmp  0x08:protected_mode    ; 0x08 = code segment selector

[bits 32]
protected_mode:
    ; Now in 32-bit protected mode
    mov  ax, 0x10           ; data segment selector
    mov  ds, ax
    mov  es, ax
    mov  ss, ax
```

### **Global Descriptor Table (GDT)**
```asm
gdt_start:
    ; Null descriptor (required)
    dq 0

    ; Code segment descriptor (selector 0x08)
    dw 0xFFFF    ; limit 0:15
    dw 0x0000    ; base 0:15
    db 0x00      ; base 16:23
    db 10011010b ; access: present, ring0, code, executable, readable
    db 11001111b ; flags: 4KB granularity, 32-bit, limit 16:19
    db 0x00      ; base 24:31

    ; Data segment descriptor (selector 0x10)
    dw 0xFFFF
    dw 0x0000
    db 0x00
    db 10010010b ; access: present, ring0, data, writable
    db 11001111b
    db 0x00

gdt_end:

gdt_descriptor:
    dw gdt_end - gdt_start - 1   ; size
    dd gdt_start                  ; address
```

### **Entering Long Mode (64-bit)**
```asm
; From 32-bit protected mode
; 1. Enable PAE
mov  eax, cr4
or   eax, (1 << 5)   ; PAE bit
mov  cr4, eax

; 2. Load page table
mov  eax, pml4_table
mov  cr3, eax

; 3. Enable long mode in EFER MSR
mov  ecx, 0xC0000080  ; EFER MSR number
rdmsr
or   eax, (1 << 8)    ; LME bit
wrmsr

; 4. Enable paging
mov  eax, cr0
or   eax, (1 << 31)   ; PG bit
mov  cr0, eax

; 5. Far jump with 64-bit code segment
jmp  0x18:long_mode_entry

[bits 64]
long_mode_entry:
    ; Now in 64-bit long mode
```

---

## **Paging — Memory Virtualization**

### **x86-64 4-Level Paging**
```
Virtual address: [PML4(9)][PDPT(9)][PD(9)][PT(9)][Offset(12)]
                  bits 47:39  38:30   29:21  20:12   11:0

PML4 → PDPT → Page Directory → Page Table → Physical Page
```

### **Page Table Entry**
```
Bit 0  — Present
Bit 1  — Read/Write (0=read only, 1=read/write)
Bit 2  — User/Supervisor (0=kernel only)
Bit 3  — Write Through
Bit 4  — Cache Disabled
Bit 5  — Accessed
Bit 6  — Dirty
Bit 7  — Page Size (1=2MB page in PD, 1=1GB in PDPT)
Bits 12:51 — Physical address (page-aligned, so bits 11:0 = 0)
Bit 63 — Execute Disable (NX bit)
```

### **TLB Management**
```asm
invlpg [rax]       ; invalidate TLB entry for virtual address
mov cr3, rax       ; reload CR3 — flushes entire TLB
```

---

## **Interrupts and Exceptions — Deep**

### **IDT — Interrupt Descriptor Table**
```asm
lidt [idt_descriptor]  ; load IDT register
sidt [mem]             ; store IDT register
```

### **Exception Types**
```
#DE  0  — Divide Error (division by zero)
#DB  1  — Debug Exception
NMI  2  — Non-Maskable Interrupt
#BP  3  — Breakpoint (INT3)
#OF  4  — Overflow (INTO instruction)
#BR  5  — Bound Range Exceeded
#UD  6  — Invalid Opcode
#NM  7  — Device Not Available (FPU)
#DF  8  — Double Fault (fault handling fault)
#TS  10 — Invalid TSS
#NP  11 — Segment Not Present
#SS  12 — Stack Fault
#GP  13 — General Protection Fault
#PF  14 — Page Fault
#MF  16 — x87 FPU Error
#AC  17 — Alignment Check
#MC  18 — Machine Check
#XF  19 — SIMD FPU Exception
```

### **Interrupt Handling**
```asm
; IDT gate — 16 bytes each
; CPU automatically pushes: SS, RSP, RFLAGS, CS, RIP (and error code for some)

interrupt_handler:
    push rax              ; save all registers
    push rbx
    ; ... save all others

    ; handle interrupt

    pop  rbx              ; restore
    pop  rax
    iretq                 ; interrupt return (64-bit) — pops RIP, CS, RFLAGS, RSP, SS
```

### **INT Instruction**
```asm
int  0x03     ; software breakpoint (INT3 = single byte 0xCC)
int  0x80     ; legacy Linux syscall (32-bit)
int  0x21     ; DOS services
into          ; interrupt if overflow (INT4)
```

### **Hardware Interrupts**
- IRQ0 — timer (PIT/HPET)
- IRQ1 — keyboard
- IRQ3 — COM2
- IRQ4 — COM1
- IRQ6 — floppy
- IRQ14 — primary ATA
- IRQ15 — secondary ATA

---

## **CPU Execution Model — Deep**

### **Pipeline Stages (Simplified)**
```
Fetch → Decode → Execute → Memory → Writeback
```

### **Superscalar Out-of-Order (Modern CPUs)**
- Multiple fetch/decode units
- Reservation stations — instructions wait for operands
- Reorder buffer (ROB) — maintain program order for retirement
- Execution ports — multiple ALUs, load/store units, FPU
- Register renaming — eliminate false dependencies (WAR, WAW)
- Speculative execution — execute before branch resolved
- Retirement — commit in-order when instructions complete

### **Intel Core Ports (Skylake)**
```
Port 0 — ALU, shift, branch, divide, FP mul, AES
Port 1 — ALU, shift, LEA, FP add, FP mul, SIMD
Port 2 — Load/Store address
Port 3 — Load/Store address
Port 4 — Store data
Port 5 — ALU, SIMD shuffle, branch
Port 6 — ALU, shift, branch
Port 7 — Store address
```

### **Instruction Latency vs Throughput**
- Latency — cycles until result available
- Throughput — how often instruction can start (reciprocal)
- `ADD` — 1 cycle latency, 0.25 throughput (4 per cycle)
- `MUL` — 3 cycle latency, 1 throughput
- `DIV` — 20-100 cycle latency, non-pipelined
- `FP ADD` — 4 cycle latency, 0.5 throughput (2 per cycle)
- Look up on `agner.org/optimize/` — complete tables

### **Branch Prediction**
- Bimodal predictor — 2-bit saturating counter per branch
- Two-level predictor — history-based
- Tournament predictor — combines multiple predictors
- BTB — Branch Target Buffer — stores predicted targets
- RSB — Return Stack Buffer — predicts return addresses
- Misprediction penalty — 15-20 cycles on modern CPUs
- Write branch-predictable code — consistent patterns

### **Speculative Execution Vulnerabilities**
- Spectre — exploit speculative execution to read memory
- Meltdown — exploit out-of-order to read kernel memory
- Mitigation — `LFENCE` serializes speculative execution
- Retpoline — return-based trampoline for indirect branches
- IBRS/IBPB/STIBP — hardware mitigations via MSRs

---

## **Memory Ordering and Barriers**

### **x86 Memory Model (TSO)**
- Store-load reordering allowed — store buffer
- All other orderings preserved
- `[write buffer] → [L1 cache]` — write may be delayed

### **Memory Fence Instructions**
```asm
mfence    ; full memory barrier — all loads/stores ordered
lfence    ; load fence — all loads ordered before this
sfence    ; store fence — all stores ordered before this
lock      ; prefix — atomic operation + full barrier
```

### **LOCK Prefix**
```asm
lock add  [mem], 1     ; atomic add
lock cmpxchg [mem], rcx ; atomic compare-exchange
lock xchg rax, [mem]  ; atomic exchange (always has implicit lock)
lock inc  [mem]        ; atomic increment
lock dec  [mem]        ; atomic decrement
lock or   [mem], rax   ; atomic OR
```

### **CMPXCHG — CAS Operation**
```asm
; Compare and exchange
; if [mem] == RAX: [mem] = RCX, ZF=1
; else: RAX = [mem], ZF=0
lock cmpxchg [mem], rcx  ; with lock prefix for atomicity

; CAS loop
mov  rax, [counter]      ; load old value
.retry:
    lea  rcx, [rax+1]    ; compute new value
    lock cmpxchg [counter], rcx  ; try to store
    jnz  .retry          ; retry if failed
```

### **CMPXCHG16B — 128-bit CAS**
```asm
; Compare and exchange 16 bytes
; if [mem] == RDX:RAX: [mem] = RCX:RBX, ZF=1
; else: RDX:RAX = [mem], ZF=0
lock cmpxchg16b [mem]    ; 16-byte atomic CAS
```

---

## **CPUID — Detecting CPU Features**

```asm
; Query CPU features
mov  eax, 1
cpuid
; EAX = family/model/stepping
; EBX = brand/APIC ID
; ECX = feature flags (1)
; EDX = feature flags (2)

; ECX bit 0  — SSE3
; ECX bit 19 — SSE4.1
; ECX bit 20 — SSE4.2
; ECX bit 28 — AVX
; ECX bit 30 — RDRAND
; EDX bit 23 — MMX
; EDX bit 25 — SSE
; EDX bit 26 — SSE2

; Extended features
mov  eax, 7
xor  ecx, ecx
cpuid
; EBX bit 3  — BMI1
; EBX bit 5  — AVX2
; EBX bit 8  — BMI2
; EBX bit 16 — AVX-512F
```

---

## **MSRs — Model Specific Registers**

```asm
; Read MSR
mov  ecx, 0xC0000080   ; MSR number (EFER)
rdmsr                   ; EDX:EAX = MSR value

; Write MSR
mov  ecx, 0xC0000080
mov  edx, 0
mov  eax, value
wrmsr
```

### **Important MSRs**
```
0x10         — IA32_TSC — time stamp counter
0x1B         — IA32_APIC_BASE
0x176        — IA32_SYSENTER_EIP
0xC0000080   — EFER — extended feature enable (long mode)
0xC0000081   — STAR — syscall/sysret segments
0xC0000082   — LSTAR — syscall RIP in 64-bit mode
0xC0000084   — SFMASK — syscall RFLAGS mask
0xC0000100   — FS.base — FS segment base
0xC0000101   — GS.base — GS segment base
```

---

## **Performance Optimization in Assembly**

### **Critical Rules**
- Avoid division — use multiply by reciprocal
- Avoid branches — use cmov, setcc, bit tricks
- Use SIMD — process multiple values at once
- Align data — 16/32/64-byte alignment for SIMD
- Avoid false dependencies — use `xor eax, eax` not `mov eax, 0`
- Keep hot data in registers — minimize memory access
- Arrange code — hot paths dense, cold paths separate

### **False Dependency Tricks**
```asm
; BAD — partial register update creates false dependency on old value
movzx eax, byte [rsi]   ; actually fine — movzx zero-extends
mov   al, [rsi]         ; BAD — creates dependency on old eax
xor   eax, eax
mov   al, [rsi]         ; OK — break dependency first

; Zero a register fast
xor   eax, eax          ; faster than mov eax, 0 (no immediate encoding)
xor   eax, eax          ; also clears upper 32 bits of rax

; Small immediate (sign extended from 8-bit)
add   rax, 1            ; 4 bytes (REX + opcode + modrm + imm8)
add   rax, 256          ; 7 bytes (REX + opcode + modrm + imm32)
```

### **Multiplication by Constant**
```asm
; Multiply by 3
lea rax, [rax+rax*2]    ; rax = rax + rax*2 = rax*3

; Multiply by 5
lea rax, [rax+rax*4]    ; rax*5

; Multiply by 6
lea rcx, [rax+rax*2]    ; rcx = rax*3
add rax, rcx            ; rax = rax*4... wait
lea rax, [rax*2+rax*4]  ; one instruction: rax*6? No...
lea rcx, [rax*2]
lea rax, [rcx+rax*4]    ; rax = rax*2 + rax*4 = rax*6 ✓

; Multiply by power of 2
shl rax, 3              ; rax *= 8

; Multiply by non-power using imul
imul rax, rax, 7        ; rax *= 7 (three-operand form)
```

### **Division by Constant (Multiply by Reciprocal)**
```asm
; Divide by 7 using magic number
; Compiler generates this automatically
; Magic number for dividing by 7:
; result = (x * 0x2492492492492493) >> 64
mov  rax, dividend
mov  rcx, 0x2492492492492493  ; magic number
mul  rcx                       ; RDX:RAX = RAX * magic
mov  rax, rdx                  ; quotient is in RDX
```

### **Branch-Free Techniques**
```asm
; Absolute value (no branch)
mov  rcx, rax
sar  rcx, 63         ; rcx = 0 or -1 (sign mask)
xor  rax, rcx        ; flip bits if negative
sub  rax, rcx        ; add 1 if negative

; Min/Max (no branch)
cmp  rax, rbx
cmovg rax, rbx       ; rax = min(rax, rbx)
```

---

## **Debugging Assembly**

### **GDB Assembly Debugging**
```bash
gdb ./program
(gdb) layout asm          # show assembly view
(gdb) layout regs         # show registers
(gdb) si                  # step one instruction
(gdb) ni                  # next instruction (don't enter calls)
(gdb) x/10i $rip          # examine 10 instructions at rip
(gdb) x/4gx $rsp          # examine 4 qwords at stack
(gdb) info registers      # show all registers
(gdb) set $rax = 5        # modify register
(gdb) p/x $rflags         # print flags in hex
(gdb) disassemble func    # disassemble function
(gdb) break *0x401234     # breakpoint at address
(gdb) watch *0x601234     # watchpoint on memory
```

### **Disassemblers**
- `objdump -d -M intel binary` — disassemble
- `objdump -d -M intel -S binary` — with source
- `ndisasm -b 64 file.bin` — NASM disassembler
- `radare2` — powerful reversing framework
- `IDA Pro` — industry standard
- `Ghidra` — NSA open source, excellent
- `Binary Ninja` — modern, scriptable

### **Useful Inspection Commands**
```bash
# See what instructions compiled to
gcc -O2 -S -masm=intel file.c    # Intel syntax output
gcc -O2 -c file.c && objdump -d -M intel file.o

# See assembly with source interleaved
gcc -O2 -g -c file.c && objdump -d -M intel -S file.o

# Compiler explorer — online
# https://godbolt.org
```

---

## **Calling Assembly from C**

```asm
; NASM — my_func.asm
global my_add        ; export symbol

section .text
my_add:              ; int my_add(int a, int b)
    ; a in edi, b in esi (System V ABI)
    mov  eax, edi
    add  eax, esi
    ret              ; return in eax
```

```c
/* C file */
extern int my_add(int a, int b);  /* declare */

int main(void) {
    int result = my_add(3, 4);    /* call */
    return 0;
}
```

```bash
nasm -f elf64 my_func.asm -o my_func.o
gcc main.c my_func.o -o program
```

---

## **Common Assembly Patterns**

### **Loop**
```asm
; for (i = 0; i < 10; i++)
    xor  rcx, rcx         ; i = 0
.loop:
    cmp  rcx, 10
    jge  .done
    ; loop body
    inc  rcx
    jmp  .loop
.done:

; Countdown loop (faster — compare with 0)
    mov  rcx, 10
.loop:
    ; loop body
    dec  rcx
    jnz  .loop            ; faster than cmp+je
```

### **Memset**
```asm
; void* memset(void* dst, int c, size_t n)
; dst=rdi, c=esi, n=rdx
memset:
    mov    rax, rdi        ; save return value
    movzx  ecx, sil        ; byte value (zero extend)
    ; fill 8 bytes of rcx with byte pattern
    mov    r8, 0x0101010101010101
    imul   rcx, r8         ; rcx = byte repeated 8 times
    mov    r8, rdx
    shr    r8, 3           ; qword count
    jz     .remainder
.qword_loop:
    mov    [rdi], rcx
    add    rdi, 8
    dec    r8
    jnz    .qword_loop
.remainder:
    and    rdx, 7          ; remaining bytes
    jz     .done
.byte_loop:
    mov    [rdi], cl
    inc    rdi
    dec    rdx
    jnz    .byte_loop
.done:
    ret
```

### **Switch Statement**
```asm
; switch(val) case 0..3
    cmp  rax, 3
    ja   .default
    lea  rcx, [rip+.table]
    jmp  [rcx+rax*8]
.table:
    dq .case0
    dq .case1
    dq .case2
    dq .case3
.case0:
    ; handle 0
    jmp .end
.case1:
    ; ...
```

### **Printf-style (direct syscall)**
```asm
section .data
    msg db "Value: %d", 10, 0

section .text
; void print_int(int n)
print_int:
    ; convert integer to string and write
    ; ... (non-trivial, use printf via C runtime in practice)
```

---

## **Most Impressive Interview Questions**

- What is the difference between `mov eax, 0` and `xor eax, eax`?
- Why does writing to EAX zero extend to RAX but writing to AL does not?
- Explain the red zone and when you cannot use it
- What happens to RSP when `call` executes?
- Why must RSP be 16-byte aligned before `call`?
- Explain the difference between `jg` and `ja`
- What is `LEA` doing and why is it useful beyond address calculation?
- Explain `CMPXCHG` and how to use it for a lock-free counter
- What is the LOCK prefix and why does XCHG not need it?
- Explain Spectre — how does it use speculative execution?
- What is RIP-relative addressing and why is it needed for PIE?
- Explain `PDEP` and `PEXT` instructions
- How does `REP MOVSB` work and when is it faster than a loop?
- What is `MFENCE` vs `LFENCE` vs `SFENCE`?
- Explain the x86 memory model (TSO) — what reorderings are allowed?
- How do you divide by 7 without a division instruction?
- What is a jump table and how does a compiler generate one?
- Explain the GDT — what is a segment descriptor?
- What is the purpose of CR3 and what happens when you write to it?
- How does `syscall` differ from `int 0x80`?
- What is the RSB (Return Stack Buffer) and how does Spectre exploit it?
- Explain out-of-order execution and register renaming
- How does branch prediction work and how do you write branch-predictor-friendly code?
- What is the `VDSO` and why does `clock_gettime` not always invoke the kernel?
- Explain paging — walk through a virtual address translation step by step

---

At the **deepest level**, assembly language is not just writing instructions — it is understanding the **complete contract between software and hardware**: how the CPU fetches, decodes, executes, and retires instructions, how memory hierarchies affect performance, how the OS manages privilege levels and interrupts, and how compilers translate high-level constructs into the minimal sequence of machine operations. Mastering assembly means you understand exactly what every line of C ultimately becomes.



