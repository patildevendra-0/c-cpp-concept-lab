# C++ Design Patterns — Master Reference Table

Quick-reference index of C++ design patterns and related system/software engineering patterns, grouped by problem domain.

## Category 1 — GoF Creational Patterns

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Singleton | GoF Creational | Single global instance | Loggers, config, managers | Application/System |
| 2 | Factory Method | GoF Creational | Delegate object creation to subclass | Frameworks, plugins | Application/System |
| 3 | Abstract Factory | GoF Creational | Family of related objects | UI toolkits, cross-platform code | Application/System |
| 4 | Builder | GoF Creational | Step-by-step complex object construction | Config objects, parsers | Application/System |
| 5 | Prototype | GoF Creational | Clone existing object | Object copying, game entities | Application/System |

## Category 2 — GoF Structural Patterns

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Adapter | GoF Structural | Convert one interface to another | Legacy code, 3rd-party libs | Application/System |
| 2 | Bridge | GoF Structural | Decouple abstraction from implementation | Driver layers, GUI toolkits | Application/System |
| 3 | Composite | GoF Structural | Tree of uniform objects | UI hierarchies, scene graphs | Application/System |
| 4 | Decorator | GoF Structural | Add behavior dynamically | Streams, middleware | Application/System |
| 5 | Facade | GoF Structural | Simplified unified interface | Subsystem wrappers, SDKs | Application/System |
| 6 | Flyweight | GoF Structural | Share common object state | Glyphs, game particles | Performance/Memory |
| 7 | Proxy | GoF Structural | Surrogate controlling access | Remote calls, lazy loading, caching | Application/System |

## Category 3 — GoF Behavioral Patterns

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Chain of Responsibility | GoF Behavioral | Pass request along handler chain | Middleware, event filters | Application/System |
| 2 | Command | GoF Behavioral | Encapsulate request as object | Undo/redo, task queues | Application/System |
| 3 | Interpreter | GoF Behavioral | Evaluate language grammar | Expression evaluators, DSLs | Compiler/Language |
| 4 | Iterator | GoF Behavioral | Sequential element access | Containers, ranges | Application/System |
| 5 | Mediator | GoF Behavioral | Centralize object interaction | UI dialogs, event buses | Application/System |
| 6 | Memento | GoF Behavioral | Capture/restore object state | Undo, checkpoints | Application/System |
| 7 | Observer | GoF Behavioral | Notify dependents on change | Events, Qt signals, UI | Application/System |
| 8 | State | GoF Behavioral | Behavior varies with state | Protocol/device state machines | Application/System |
| 9 | Strategy | GoF Behavioral | Interchangeable algorithms | Sorting, compression, drivers | Application/System |
| 10 | Template Method | GoF Behavioral | Fixed skeleton, overridable steps | Frameworks, algorithms | Application/System |
| 11 | Visitor | GoF Behavioral | Add operations without modifying types | AST processing, compilers | Compiler/Language |

## Category 4 — Modern C++ Idioms

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | RAII | C++ Idiom | Bind resource lifetime to object scope | Files, locks, sockets | System Programming |
| 2 | Rule of Zero | C++ Idiom | Rely on compiler-generated special members | Value types | Application/System |
| 3 | Rule of Three | C++ Idiom | Define copy ctor/assign/dtor together | Manual resource owners | Application/System |
| 4 | Rule of Five | C++ Idiom | Add move ctor/assign to Rule of Three | Resource-owning classes | Application/System |
| 5 | Copy-and-Swap | C++ Idiom | Exception-safe assignment via swap | Assignment operators | Application/System |
| 6 | Pimpl | C++ Idiom | Hide implementation behind pointer | ABI stability, compile firewalls | Library Design |
| 7 | Handle/Body | C++ Idiom | Separate handle and implementation object | Reference-counted resources | Library Design |
| 8 | Type Erasure | C++ Idiom | Uniform interface over varied types | std::function, std::any | Library Design |
| 9 | CRTP | C++ Idiom | Static polymorphism via base template | Static interfaces, mixins | Performance/Library |
| 10 | Policy-Based Design | C++ Idiom | Compose behavior via template policies | Allocators, containers | Library Design |
| 11 | Named Constructor | C++ Idiom | Static factory functions for clarity | Object creation APIs | Application/System |
| 12 | Passkey | C++ Idiom | Restrict method access to specific callers | Access control between classes | Application/System |
| 13 | Non-Virtual Interface | C++ Idiom | Public non-virtual, private virtual hooks | Framework base classes | Library Design |
| 14 | Empty Base Optimization | C++ Idiom | Zero-size base class storage saving | Allocator-aware containers | Performance |
| 15 | Strong Types | C++ Idiom | Distinct types for semantic safety | IDs, units, parameters | Application/System |
| 16 | Scope Guard | C++ Idiom | Run cleanup on scope exit | Error-safe resource release | System Programming |
| 17 | Move-Only Type | C++ Idiom | Disable copy, allow move | Unique ownership handles | System Programming |
| 18 | Non-Copyable Type | C++ Idiom | Disable copy semantics entirely | Mutexes, file handles | System Programming |
| 19 | Static Polymorphism | C++ Idiom | Compile-time dispatch via templates | Performance-critical code | Performance |
| 20 | Dynamic Polymorphism | C++ Idiom | Runtime dispatch via virtual functions | Plugins, interfaces | Application/System |
| 21 | Value Semantics | C++ Idiom | Copy-based ownership model | Small data types | Application/System |
| 22 | Reference Semantics | C++ Idiom | Shared/aliased ownership model | Large/shared objects | Application/System |
| 23 | Type-Safe Wrapper | C++ Idiom | Wrap primitives for safety | Handles, IDs | System Programming |
| 24 | Custom Deleter | C++ Idiom | Custom cleanup logic for smart pointers | unique_ptr/shared_ptr resources | System Programming |
| 25 | Tag Dispatch | C++ Idiom | Overload selection via tag types | Iterator/algorithm selection | Library Design |
| 26 | SFINAE | C++ Idiom | Conditional template overload removal | Template metaprogramming | Library Design |
| 27 | Concepts | C++ Idiom | Constrain template parameters | Generic library APIs | Library Design |
| 28 | Expression Templates | C++ Idiom | Lazy-evaluated compile-time expressions | Math/linear algebra libraries | Performance/Library |
| 29 | Traits | C++ Idiom | Compile-time type property queries | Generic programming | Library Design |
| 30 | Detection Idiom | C++ Idiom | Detect member/expression validity | SFINAE-based introspection | Library Design |
| 31 | Erase-Remove Idiom | C++ Idiom | Remove elements from containers | std::vector cleanup | Application/System |
| 32 | Copy-on-Write | C++ Idiom | Defer copy until mutation | Shared strings/buffers | Performance/Memory |
| 33 | Lazy Initialization | C++ Idiom | Defer construction until needed | Expensive resources | Application/System |
| 34 | Eager Initialization | C++ Idiom | Construct at startup | Predictable init order | Application/System |

## Category 5 — Object Creation / Dependency Management

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Dependency Injection | Creational/DI | Supply dependencies externally | Testable services, frameworks | Application/System |
| 2 | Dependency Inversion | Design Principle | Depend on abstractions not concretes | Layered architectures | Application/System |
| 3 | Inversion of Control | Design Principle | Framework controls flow, not app code | Frameworks, plugins | Application/System |
| 4 | Service Locator | Creational/DI | Central lookup of services | Legacy DI alternative | Application/System |
| 5 | Dependency Container | Creational/DI | Manages object graph construction | DI frameworks | Application/System |
| 6 | IoC Container | Creational/DI | Automates dependency wiring | Large applications | Application/System |
| 7 | Factory Registry | Creational | Maps keys to factory functions | Plugin creation | Application/System |
| 8 | Object Factory | Creational | Central object creation point | Object graphs | Application/System |
| 9 | Resource Factory | Creational | Creates managed resources | File/socket handles | System Programming |
| 10 | Plugin Factory | Creational | Creates plugin instances dynamically | Plugin architectures | Application/System |
| 11 | Component Registry | Creational | Tracks registered components | Modular systems | Application/System |
| 12 | Service Registry | Creational | Tracks available services | Microservices, plugins | Distributed/App |
| 13 | Resource Manager | Creational | Owns/manages resource lifecycle | Drivers, engines | System Programming |
| 14 | Object Pool | Creational | Reuse expensive objects | Threads, connections, buffers | Performance/System |
| 15 | Prototype Registry | Creational | Named prototypes for cloning | Game entities, templates | Application/System |

## Category 6 — Concurrency Patterns

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Producer-Consumer | Concurrency | Decouple work generation from processing | Task pipelines, queues | Concurrency |
| 2 | Thread Pool | Concurrency | Reuse fixed worker threads | Servers, task execution | Concurrency |
| 3 | Worker Pool | Concurrency | Pool of task-executing workers | Job processing systems | Concurrency |
| 4 | Active Object | Concurrency | Decouple method call from execution | Async APIs, embedded | Concurrency |
| 5 | Monitor Object | Concurrency | Synchronized object with condition waits | Shared state access | Concurrency |
| 6 | Reactor | Concurrency | Demultiplex/dispatch I/O events | epoll, network servers | Networking |
| 7 | Proactor | Concurrency | Async completion-based I/O dispatch | IOCP, io_uring | Networking |
| 8 | Half-Sync/Half-Async | Concurrency | Bridge sync and async layers | I/O subsystems | Concurrency |
| 9 | Leader-Followers | Concurrency | Threads share event demux duty | High-perf servers | Concurrency |
| 10 | Work Stealing | Concurrency | Idle threads steal queued tasks | Task schedulers | Concurrency |
| 11 | Fork-Join | Concurrency | Split work, join results | Parallel algorithms | Concurrency |
| 12 | Pipeline Parallelism | Concurrency | Stage-based parallel processing | Streaming systems | Concurrency |
| 13 | Event Loop | Concurrency | Single-threaded event dispatch | GUI, async I/O | Concurrency |
| 14 | Event-Driven Architecture | Concurrency | System reacts to events | Servers, UI, IoT | Architecture |
| 15 | Message Passing | Concurrency | Communicate via messages not shared state | Actor systems, IPC | Concurrency |
| 16 | Actor Model | Concurrency | Isolated actors communicate via mailbox | Distributed/concurrent systems | Concurrency |
| 17 | CSP | Concurrency | Communicating sequential processes via channels | Goroutine-style concurrency | Concurrency |
| 18 | Future/Promise | Concurrency | Represent eventual async result | Async APIs | Concurrency |
| 19 | Immutable Object | Concurrency | No mutation after construction | Lock-free sharing | Concurrency |
| 20 | Readers-Writers | Concurrency | Concurrent reads, exclusive writes | Shared caches, configs | Concurrency |
| 21 | Single Writer / Multiple Reader | Concurrency | One writer, many concurrent readers | Lock-free data structures | Concurrency |
| 22 | Barrier | Concurrency | Sync point for multiple threads | Parallel algorithms | Concurrency |
| 23 | Latch | Concurrency | One-time countdown synchronization | Startup/shutdown sync | Concurrency |
| 24 | Task Graph | Concurrency | DAG of dependent tasks | Job scheduling, build systems | Concurrency |
| 25 | Structured Concurrency | Concurrency | Bounded task lifetime scoping | Modern async C++ | Concurrency |
| 26 | Thread-per-Request | Concurrency | New thread per incoming request | Simple servers | Concurrency |
| 27 | Thread-per-Connection | Concurrency | Dedicated thread per connection | Legacy network servers | Networking |
| 28 | Job System | Concurrency | Task scheduling abstraction | Game engines | Game Engine |
| 29 | Scheduler | Concurrency | Decides task execution order/timing | OS, RTOS, engines | Concurrency |
| 30 | Event Queue | Concurrency | Buffered ordered event storage | GUI, embedded, servers | Concurrency |
| 31 | Message Queue | Concurrency | Buffered inter-thread/process messages | IPC, task systems | Concurrency |
| 32 | Command Queue | Concurrency | Buffered queued command execution | GPU/device drivers | Concurrency |

## Category 7 — Lock-Free / Atomic / Synchronization

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Lock-Free Stack | Lock-Free | CAS-based stack without locks | High-perf data structures | Performance/Concurrency |
| 2 | Lock-Free Queue | Lock-Free | CAS-based queue without locks | High-throughput pipelines | Performance/Concurrency |
| 3 | SPSC Queue | Lock-Free | Single-producer single-consumer queue | Audio, streaming | Performance/Concurrency |
| 4 | MPSC Queue | Lock-Free | Multi-producer single-consumer queue | Logging, task collection | Performance/Concurrency |
| 5 | SPMC Queue | Lock-Free | Single-producer multi-consumer queue | Work distribution | Performance/Concurrency |
| 6 | MPMC Queue | Lock-Free | Multi-producer multi-consumer queue | General task queues | Performance/Concurrency |
| 7 | Wait-Free Algorithm | Lock-Free | Bounded steps per operation guarantee | Real-time systems | Performance/Concurrency |
| 8 | Obstruction-Free Algorithm | Lock-Free | Progress guaranteed without contention | Research/low-level libs | Performance/Concurrency |
| 9 | CAS | Lock-Free | Compare-and-swap atomic primitive | Lock-free structures | Performance/Concurrency |
| 10 | Atomic State Machine | Lock-Free | State transitions via atomics | Lock-free protocols | Concurrency |
| 11 | Double-Checked Locking | Synchronization | Avoid locking after first check | Lazy singleton init | Concurrency |
| 12 | Seqlock | Synchronization | Optimistic read with sequence counter | Low-latency shared data | Performance/Concurrency |
| 13 | RCU | Synchronization | Read-copy-update for readers without locks | Kernel, high-read data | OS/Kernel |
| 14 | Hazard Pointers | Lock-Free | Safe memory reclamation for lock-free structs | Lock-free memory management | Performance/Concurrency |
| 15 | Epoch-Based Reclamation | Lock-Free | Reclaim memory by epoch tracking | Lock-free allocators | Performance/Concurrency |
| 16 | QSBR | Lock-Free | Quiescent-state-based reclamation | Kernel, lock-free systems | OS/Kernel |
| 17 | Flat Combining | Lock-Free | Batch operations via single combiner thread | Contended data structures | Performance/Concurrency |
| 18 | Immutable Snapshot | Synchronization | Point-in-time immutable view | Lock-free reads | Concurrency |
| 19 | Versioned Data | Synchronization | Track data version for consistency | Optimistic concurrency | Concurrency |
| 20 | Sequence Counter | Synchronization | Monotonic counter for ordering/validation | Seqlocks, versioning | Concurrency |
| 21 | Atomic Reference | Synchronization | Atomically updatable pointer/reference | Lock-free structures | Concurrency |
| 22 | Spinlock | Synchronization | Busy-wait mutual exclusion | Short critical sections | System Programming |
| 23 | Mutex | Synchronization | Mutual exclusion lock | General critical sections | Concurrency |
| 24 | Semaphore | Synchronization | Counting resource access control | Resource limiting | Concurrency |
| 25 | Read-Write Lock | Synchronization | Shared reads, exclusive writes | Shared data structures | Concurrency |
| 26 | Condition Variable | Synchronization | Wait/notify on predicate | Producer-consumer sync | Concurrency |
| 27 | Barrier Synchronization | Synchronization | All threads wait at rendezvous point | Parallel computation | Concurrency |

## Category 8 — Memory Management

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Object Pool | Memory | Reuse pre-allocated objects | Game entities, connections | Performance/Memory |
| 2 | Memory Pool | Memory | Pre-allocated block reuse | Embedded, real-time systems | Performance/Memory |
| 3 | Arena Allocator | Memory | Bulk allocate, free all at once | Parsers, per-frame data | Performance/Memory |
| 4 | Region Allocator | Memory | Allocate within bounded lifetime region | Scoped allocations | Performance/Memory |
| 5 | Linear Allocator | Memory | Sequential bump allocation | Temporary buffers | Performance/Memory |
| 6 | Stack Allocator | Memory | LIFO allocation/deallocation | Nested scoped allocations | Performance/Memory |
| 7 | Free List Allocator | Memory | Reuse freed blocks via linked list | Fixed-size object allocation | Performance/Memory |
| 8 | Slab Allocator | Memory | Pre-sized object caches | Kernel object allocation | OS/Kernel |
| 9 | Buddy Allocator | Memory | Power-of-two block splitting/merging | Kernel memory management | OS/Kernel |
| 10 | Segregated Free List | Memory | Separate free lists by size class | General allocators | Performance/Memory |
| 11 | Small Object Allocator | Memory | Optimized allocation for small objects | Object-heavy applications | Performance/Memory |
| 12 | Monotonic Allocator | Memory | Grows without individual deallocation | std::pmr usage | Performance/Memory |
| 13 | Bump Allocator | Memory | Increment pointer for allocation | Fast temporary allocation | Performance/Memory |
| 14 | Custom Allocator | Memory | User-defined allocation strategy | STL containers, embedded | Performance/Memory |
| 15 | PMR | Memory | Polymorphic memory resource abstraction | std::pmr containers | Library Design |
| 16 | Memory Resource | Memory | Pluggable allocation backend | Custom allocators | Library Design |
| 17 | Reference Counting | Memory | Track ownership via count | shared_ptr, COM | System Programming |
| 18 | Intrusive Reference Counting | Memory | Count embedded in object itself | Performance-critical objects | Performance/Memory |
| 19 | Weak Reference | Memory | Non-owning observer reference | Break reference cycles | System Programming |
| 20 | Copy-on-Write | Memory | Share until mutation occurs | Shared buffers/strings | Performance/Memory |
| 21 | Shared Memory | Memory | Memory region shared across processes | IPC, multi-process apps | OS/IPC |
| 22 | Memory-Mapped Resource | Memory | Map file/device into address space | File I/O, drivers | OS/System |
| 23 | Zero-Copy | Memory | Avoid redundant data copies | Networking, drivers | Performance/System |

## Category 9 — Buffering / Data Flow

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Ring Buffer | Buffering | Fixed-size circular buffer | DMA, audio, UART | Embedded/Driver |
| 2 | Circular Buffer | Buffering | Wrap-around fixed buffer | Streaming data | Embedded/System |
| 3 | Double Buffering | Buffering | Alternate between two buffers | Graphics, DMA | Embedded/Graphics |
| 4 | Triple Buffering | Buffering | Three buffers reduce stalls | Rendering pipelines | Graphics |
| 5 | Ping-Pong Buffer | Buffering | Alternate buffer roles each cycle | Audio/DMA transfer | Embedded/Driver |
| 6 | Buffer Pool | Buffering | Pool of reusable buffers | Networking, I/O | Performance/System |
| 7 | Buffer Queue | Buffering | Queued buffer handoff | Streaming pipelines | System Programming |
| 8 | Frame Buffer | Buffering | Buffer holding rendered frame | Graphics, display drivers | Graphics/Driver |
| 9 | DMA Buffer | Buffering | Buffer for direct memory access transfer | Drivers, embedded | Driver/Embedded |
| 10 | Scatter-Gather Buffer | Buffering | Non-contiguous buffer segments as one transfer | Network/storage drivers | Driver |
| 11 | Zero-Copy Pipeline | Buffering | Pass data without copying between stages | High-perf networking | Performance/Networking |
| 12 | Streaming Pipeline | Data Flow | Continuous data processing stages | Media, telemetry | Data Processing |
| 13 | Batch Processing | Data Flow | Process grouped data chunks | ETL, analytics | Data Processing |
| 14 | Backpressure | Data Flow | Slow producer when consumer lags | Streaming systems | Data Processing |
| 15 | Flow Control | Data Flow | Regulate data transmission rate | Networking, pipelines | Networking |
| 16 | Rate Matching | Data Flow | Align producer/consumer throughput | Streaming, drivers | Data Processing |
| 17 | Fan-In | Data Flow | Merge multiple inputs to one | Aggregation pipelines | Data Processing |
| 18 | Fan-Out | Data Flow | Distribute one input to many | Broadcast pipelines | Data Processing |
| 19 | Splitter | Data Flow | Divide stream into multiple paths | Pipelines | Data Processing |
| 20 | Aggregator | Data Flow | Combine multiple inputs into one result | Pipelines, analytics | Data Processing |
| 21 | Router | Data Flow | Direct data based on rules | Messaging, pipelines | Data Processing |
| 22 | Filter | Data Flow | Select/transform subset of data | Pipelines | Data Processing |
| 23 | Transformer | Data Flow | Convert data shape/format | Pipelines, ETL | Data Processing |
| 24 | Sink | Data Flow | Terminal consumer of data | Pipelines, logging | Data Processing |
| 25 | Source | Data Flow | Origin producer of data | Pipelines, sensors | Data Processing |

## Category 10 — OS / System Programming

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Event Loop | OS | Central dispatch of OS events | Daemons, servers | OS/System |
| 2 | Reactor | OS | Demux and dispatch I/O readiness | Servers, OS I/O | OS/Networking |
| 3 | Proactor | OS | Async completion-driven I/O dispatch | IOCP, io_uring | OS/Networking |
| 4 | Active Object | OS | Async method execution decoupling | Service daemons | OS/System |
| 5 | Worker Pool | OS | Fixed pool of task workers | System services | OS/System |
| 6 | Work Queue | OS | Queued deferred work items | Kernel, daemons | OS/Kernel |
| 7 | Timer Queue | OS | Ordered timer expiration handling | Schedulers, timeouts | OS/System |
| 8 | Completion Queue | OS | Holds completed async operations | Async I/O subsystems | OS/Networking |
| 9 | Request Queue | OS | Buffered incoming requests | Drivers, servers | OS/System |
| 10 | Command Dispatcher | OS | Routes commands to handlers | CLI tools, daemons | OS/System |
| 11 | Command Processor | OS | Executes queued commands sequentially | Device control, shells | OS/System |
| 12 | Event Dispatcher | OS | Routes events to subscribers | System event handling | OS/System |
| 13 | Callback Dispatcher | OS | Invokes registered callbacks on events | Async APIs | OS/System |
| 14 | Message Dispatcher | OS | Routes messages to handlers | IPC systems | OS/System |
| 15 | Resource Manager | OS | Tracks/controls system resources | Kernel, drivers | OS/Kernel |
| 16 | Handle Manager | OS | Manages opaque resource handles | File/socket handles | OS/System |
| 17 | Handle Table | OS | Maps handles to kernel objects | OS kernel | OS/Kernel |
| 18 | Process Supervisor | OS | Monitors/restarts processes | Init systems, daemons | OS/System |
| 19 | Service Manager | OS | Starts/stops/monitors services | systemd-like systems | OS/System |
| 20 | Service Registry | OS | Tracks available system services | Service discovery | OS/Distributed |
| 21 | Plugin Architecture | OS | Dynamically loaded extension modules | Extensible apps | OS/Application |
| 22 | Dynamic Module Loading | OS | Load code at runtime | Plugins, drivers | OS/System |
| 23 | IPC Abstraction | OS | Uniform interface over IPC mechanisms | Cross-process communication | OS/IPC |
| 24 | Shared Memory IPC | OS | Data exchange via shared memory | High-throughput IPC | OS/IPC |
| 25 | Message Queue IPC | OS | Data exchange via message queues | Decoupled IPC | OS/IPC |
| 26 | Pipe Communication | OS | Data exchange via pipes | Process communication | OS/IPC |
| 27 | Socket Abstraction | OS | Uniform interface over sockets | Networking, IPC | OS/Networking |
| 28 | Memory-Mapped I/O | OS | Access files/devices via memory mapping | File I/O, drivers | OS/System |
| 29 | Zero-Copy I/O | OS | Transfer data without extra copies | High-perf I/O | OS/Performance |
| 30 | Async I/O | OS | Non-blocking I/O with completion notification | Servers, drivers | OS/Networking |
| 31 | Non-Blocking I/O | OS | I/O calls return immediately | Event loops, servers | OS/Networking |
| 32 | Graceful Shutdown | OS | Orderly resource release on exit | Services, daemons | OS/System |
| 33 | Fault Isolation | OS | Contain failures to limit blast radius | Resilient services | OS/Resilience |
| 34 | Watchdog | OS | Detect and recover from hangs | Embedded, services | OS/Embedded |
| 35 | Heartbeat | OS | Periodic liveness signal | Distributed systems, drivers | OS/Distributed |
| 36 | Timeout Management | OS | Bound wait durations for operations | Networking, drivers | OS/System |
| 37 | Process Pool | OS | Reuse pool of worker processes | Multi-process servers | OS/System |
| 38 | Supervisor/Worker | OS | Supervisor manages worker lifecycle | Fault-tolerant systems | OS/Resilience |

## Category 11 — Driver Development

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Hardware Abstraction Layer | Driver | Uniform API over hardware differences | Embedded, OS drivers | Driver/Embedded |
| 2 | Device Abstraction Layer | Driver | Abstracts device-specific details | Driver frameworks | Driver |
| 3 | Board Support Package | Driver | Board-specific init and drivers | Embedded platforms | Embedded |
| 4 | Device Context | Driver | Per-device state container | Driver instances | Driver |
| 5 | Device Object | Driver | OS representation of a device | Kernel drivers | Driver/OS |
| 6 | Device State Machine | Driver | Models device operational states | Driver lifecycle | Driver |
| 7 | Driver Stack | Driver | Layered chain of drivers | Windows/Linux driver model | Driver/OS |
| 8 | Filter Driver | Driver | Intercepts/modifies device I/O | Storage, input drivers | Driver/OS |
| 9 | Miniport Driver | Driver | Hardware-specific lower driver layer | Network/storage miniports | Driver/OS |
| 10 | Function Driver | Driver | Primary driver for a device function | Device control | Driver/OS |
| 11 | Bus Driver | Driver | Manages devices on a bus | PCI, USB buses | Driver/OS |
| 12 | Class Driver | Driver | Generic driver for device class | USB HID, storage class | Driver/OS |
| 13 | Port Driver | Driver | Handles port-level hardware access | Storage port drivers | Driver/OS |
| 14 | Protocol Driver | Driver | Implements communication protocol | Network protocol stacks | Driver/Networking |
| 15 | Virtual Driver | Driver | Software-only simulated device | Testing, virtualization | Driver |
| 16 | Device Enumeration | Driver | Discover attached devices | Bus scanning | Driver/OS |
| 17 | Device Discovery | Driver | Detect devices at runtime | Hot-plug systems | Driver/OS |
| 18 | Device Lifecycle | Driver | Manages init/use/teardown states | Driver frameworks | Driver |
| 19 | Hot-Plug Handling | Driver | React to runtime device attach/remove | USB, PCIe | Driver/OS |
| 20 | Capability Discovery | Driver | Query device supported features | Driver negotiation | Driver |
| 21 | Device Registration | Driver | Register device with OS/subsystem | Driver init | Driver/OS |
| 22 | ISR | Driver | Interrupt service routine, minimal work | Hardware interrupts | Driver/Embedded |
| 23 | Interrupt Handler | Driver | Handles hardware interrupt events | Drivers, embedded | Driver/Embedded |
| 24 | Top Half | Driver | Fast minimal interrupt handling | Linux driver model | Driver/OS |
| 25 | Bottom Half | Driver | Deferred longer interrupt processing | Linux driver model | Driver/OS |
| 26 | Deferred Work | Driver | Schedule work outside interrupt context | Kernel drivers | Driver/OS |
| 27 | DPC | Driver | Deferred procedure call for interrupt work | Windows drivers | Driver/OS |
| 28 | Work Queue | Driver | Queued deferred driver work | Kernel drivers | Driver/OS |
| 29 | Worker Thread | Driver | Thread executing deferred driver tasks | Kernel/user drivers | Driver |
| 30 | ISR + Worker Thread | Driver | Split fast ISR from slow processing | Embedded drivers | Driver/Embedded |
| 31 | Interrupt-Driven I/O | Driver | I/O triggered by hardware interrupts | Low-latency devices | Driver/Embedded |
| 32 | Polling I/O | Driver | Repeatedly check device status | Simple/low-speed devices | Driver/Embedded |
| 33 | Hybrid Interrupt/Polling | Driver | Switch between interrupt and poll modes | High-throughput NICs | Driver/Networking |
| 34 | DMA | Driver | Direct memory access transfer | Storage, network, audio | Driver/Embedded |
| 35 | DMA Buffer Management | Driver | Allocate/track DMA-capable buffers | Drivers | Driver |
| 36 | Scatter-Gather DMA | Driver | Non-contiguous memory DMA transfer | Storage/network drivers | Driver |
| 37 | DMA Ring | Driver | Ring of DMA descriptors | NIC/storage drivers | Driver/Networking |
| 38 | Descriptor Ring | Driver | Ring buffer of transfer descriptors | NIC drivers | Driver/Networking |
| 39 | Command Ring | Driver | Ring of pending device commands | NVMe, USB drivers | Driver |
| 40 | Completion Ring | Driver | Ring of completed operation results | NVMe, NIC drivers | Driver |
| 41 | Request Queue | Driver | Queued pending device requests | Block/storage drivers | Driver |
| 42 | Completion Queue | Driver | Queued completed request results | NVMe, async I/O | Driver |
| 43 | Command Queue | Driver | Queued commands to device | GPU/storage drivers | Driver |
| 44 | Register Abstraction | Driver | Typed access to hardware registers | Peripheral drivers | Driver/Hardware |
| 45 | Register Map | Driver | Structured layout of device registers | MMIO drivers | Driver/Hardware |
| 46 | MMIO Abstraction | Driver | Wraps memory-mapped I/O access | Peripheral drivers | Driver/Hardware |
| 47 | Port I/O Abstraction | Driver | Wraps port-based I/O access | Legacy x86 drivers | Driver/Hardware |
| 48 | Buffer Ownership Transfer | Driver | Explicit hand-off of buffer ownership | Zero-copy drivers | Driver |
| 49 | Zero-Copy Device Transfer | Driver | Avoid copying between device and app | High-perf drivers | Driver/Performance |
| 50 | Double-Buffered DMA | Driver | Two DMA buffers alternate for continuity | Audio/video capture | Driver/Embedded |
| 51 | DMA-Safe Memory | Driver | Memory meeting DMA alignment/cache rules | Embedded drivers | Driver/Embedded |
| 52 | Device Reset | Driver | Recover device to known state | Fault handling | Driver |
| 53 | Recovery State Machine | Driver | Models error-recovery transitions | Fault-tolerant drivers | Driver |
| 54 | Timeout Recovery | Driver | Detect and recover from stalled ops | Driver resilience | Driver |
| 55 | Watchdog Recovery | Driver | Reset on watchdog timeout | Embedded devices | Driver/Embedded |
| 56 | Error Recovery | Driver | Structured handling of device errors | Drivers | Driver |
| 57 | Fault Containment | Driver | Prevent fault propagation | Isolated driver design | Driver |
| 58 | Power-State Management | Driver | Handle device power transitions | Mobile/embedded drivers | Driver/Embedded |
| 59 | Suspend/Resume | Driver | Save/restore state across power cycles | OS power management | Driver/OS |
| 60 | Device Shutdown | Driver | Orderly device teardown | Driver cleanup | Driver |
| 61 | Safe Resource Cleanup | Driver | Guaranteed release of device resources | Driver teardown | Driver |

## Category 12 — Embedded / RTOS

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Super Loop | Embedded | Single infinite loop polling tasks | Bare-metal firmware | Embedded |
| 2 | Cooperative Scheduler | Embedded | Tasks yield control voluntarily | Simple RTOS | Embedded/RTOS |
| 3 | Preemptive Scheduler | Embedded | OS forcibly switches tasks | RTOS | Embedded/RTOS |
| 4 | Event-Driven Firmware | Embedded | Firmware reacts to events | Sensor nodes | Embedded |
| 5 | Interrupt-Driven Firmware | Embedded | Firmware driven by hardware interrupts | Low-power devices | Embedded |
| 6 | State Machine | Embedded | Explicit state/transition modeling | Protocol/device control | Embedded |
| 7 | Hierarchical State Machine | Embedded | Nested states with inheritance | Complex device control | Embedded |
| 8 | Active Object | Embedded | Async task with own thread/queue | RTOS task design | Embedded/RTOS |
| 9 | Command Processor | Embedded | Executes queued device commands | Device control firmware | Embedded |
| 10 | Command Queue | Embedded | Buffered pending commands | Firmware control loops | Embedded |
| 11 | Event Queue | Embedded | Buffered pending events | RTOS task communication | Embedded/RTOS |
| 12 | Message Queue | Embedded | RTOS inter-task communication | RTOS tasks | Embedded/RTOS |
| 13 | Watchdog | Embedded | Detect/recover from firmware hangs | Safety-critical firmware | Embedded |
| 14 | Fail-Safe State | Embedded | Defined safe fallback state | Safety-critical systems | Embedded |
| 15 | Fail-Silent Design | Embedded | Stop output on fault instead of erroring | Safety-critical systems | Embedded |
| 16 | Fault Recovery | Embedded | Structured recovery from firmware faults | Robust firmware | Embedded |
| 17 | HAL | Embedded | Hardware abstraction layer | Portable firmware | Embedded |
| 18 | BSP | Embedded | Board support package for init | Embedded platforms | Embedded |
| 19 | Device Driver Layer | Embedded | Low-level hardware control layer | Firmware stack | Embedded |
| 20 | Middleware Layer | Embedded | Services layer above drivers | Firmware stack | Embedded |
| 21 | Application Layer | Embedded | Top-level firmware logic | Firmware stack | Embedded |
| 22 | Timer Service | Embedded | Manages timed callbacks | RTOS, firmware | Embedded/RTOS |
| 23 | Tick Scheduler | Embedded | Fixed-interval scheduling tick | RTOS kernels | Embedded/RTOS |
| 24 | Tickless Scheduler | Embedded | Low-power event-driven scheduling | Battery-powered RTOS | Embedded/RTOS |
| 25 | ISR-to-Task Handoff | Embedded | Move work from ISR to task context | RTOS drivers | Embedded/RTOS |
| 26 | Interrupt-to-Queue | Embedded | ISR posts event to queue for task | RTOS drivers | Embedded/RTOS |
| 27 | Ring Buffer | Embedded | Circular fixed-size buffer | Sensor/UART data | Embedded |
| 28 | Double Buffer | Embedded | Alternate buffers for continuity | ADC/DMA sampling | Embedded |
| 29 | DMA Pipeline | Embedded | Chained DMA transfers | High-throughput sampling | Embedded |
| 30 | Sensor Acquisition Pipeline | Embedded | Staged sensor read/process/output | IoT, sensor nodes | Embedded |
| 31 | Power Management State Machine | Embedded | Models power mode transitions | Battery-powered devices | Embedded |

## Category 13 — Networking

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Reactor | Networking | Event-driven I/O demultiplexing | epoll/select servers | Networking |
| 2 | Proactor | Networking | Async completion-based I/O | IOCP, io_uring servers | Networking |
| 3 | Acceptor-Connector | Networking | Decouple connection setup from service | Network servers/clients | Networking |
| 4 | Event Loop | Networking | Central event dispatch loop | Async network servers | Networking |
| 5 | Connection Pool | Networking | Reuse established connections | DB/HTTP clients | Networking |
| 6 | Connection Manager | Networking | Tracks/controls active connections | Servers, proxies | Networking |
| 7 | Session Object | Networking | Represents per-client session state | Servers | Networking |
| 8 | Request-Response | Networking | Synchronous exchange pattern | RPC, HTTP | Networking |
| 9 | Request Pipeline | Networking | Staged request processing | HTTP servers | Networking |
| 10 | Protocol Pipeline | Networking | Layered protocol processing stages | Network stacks | Networking |
| 11 | Protocol Layering | Networking | Stack protocols by abstraction level | OSI-style stacks | Networking |
| 12 | Protocol Adapter | Networking | Translate between protocol formats | Gateways, bridges | Networking |
| 13 | Serialization Layer | Networking | Encode/decode wire formats | RPC, messaging | Networking |
| 14 | Message Framing | Networking | Delimit messages in byte stream | TCP protocols | Networking |
| 15 | Multiplexer | Networking | Combine multiple streams into one channel | HTTP/2, RPC | Networking |
| 16 | Demultiplexer | Networking | Split combined channel into streams | HTTP/2, RPC | Networking |
| 17 | Connection State Machine | Networking | Models connection lifecycle states | TCP-like protocols | Networking |
| 18 | Keepalive | Networking | Periodic liveness probes | Long-lived connections | Networking |
| 19 | Heartbeat | Networking | Periodic liveness signal | Distributed protocols | Networking |
| 20 | Timeout | Networking | Bound wait for network response | Clients, RPC | Networking |
| 21 | Retry | Networking | Reattempt failed operation | Resilient clients | Networking/Resilience |
| 22 | Exponential Backoff | Networking | Increasing delay between retries | Resilient clients | Networking/Resilience |
| 23 | Circuit Breaker | Networking | Stop calls to failing dependency | Resilient services | Networking/Resilience |
| 24 | Bulkhead | Networking | Isolate resource pools to limit failure | Resilient services | Networking/Resilience |
| 25 | Rate Limiter | Networking | Cap request rate | API gateways | Networking |
| 26 | Token Bucket | Networking | Rate limiting via token refill | Traffic shaping | Networking |
| 27 | Leaky Bucket | Networking | Rate limiting via fixed drain rate | Traffic shaping | Networking |
| 28 | Backpressure | Networking | Signal upstream to slow down | Streaming protocols | Networking |
| 29 | Load Balancer | Networking | Distribute traffic across servers | Distributed services | Networking/Distributed |
| 30 | Failover | Networking | Switch to backup on failure | High-availability systems | Networking/Resilience |
| 31 | Service Discovery | Networking | Locate service instances dynamically | Microservices | Networking/Distributed |
| 32 | Session Recovery | Networking | Restore session after disconnect | Resilient clients | Networking |
| 33 | Flow Control | Networking | Regulate data transmission rate | TCP-like protocols | Networking |
| 34 | Zero-Copy Networking | Networking | Avoid extra copies in network path | High-perf servers | Networking/Performance |
| 35 | Kernel Bypass | Networking | Skip kernel networking stack | DPDK, high-freq trading | Networking/Performance |
| 36 | Poll Mode Driver | Networking | Poll NIC instead of interrupts | DPDK-style drivers | Networking/Driver |
| 37 | io_uring | Networking | Modern async Linux I/O interface | High-perf Linux servers | Networking/OS |
| 38 | Completion-Based I/O | Networking | Notify on operation completion | Windows IOCP, io_uring | Networking |
| 39 | Readiness-Based I/O | Networking | Notify when I/O is ready | epoll/select/kqueue | Networking |

## Category 14 — Software Architecture

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Layered Architecture | Architecture | Stack of dependent abstraction layers | Enterprise apps | Architecture |
| 2 | MVC | Architecture | Separate model, view, controller | Web/desktop apps | Architecture |
| 3 | MVP | Architecture | Presenter mediates model and view | Desktop/UI apps | Architecture |
| 4 | MVVM | Architecture | ViewModel binds view and model | Qt/desktop UI | UI/Architecture |
| 5 | PAC | Architecture | Hierarchical presentation-abstraction-control | Complex UI systems | Architecture |
| 6 | Clean Architecture | Architecture | Dependency rule toward domain core | Large applications | Architecture |
| 7 | Hexagonal Architecture | Architecture | Ports/adapters isolate domain | Testable applications | Architecture |
| 8 | Onion Architecture | Architecture | Concentric layers around domain | Domain-centric apps | Architecture |
| 9 | Ports and Adapters | Architecture | Decouple core logic from I/O | Testable systems | Architecture |
| 10 | Microkernel Architecture | Architecture | Minimal core plus plugins | Extensible platforms | Architecture |
| 11 | Plugin Architecture | Architecture | Extend via dynamically loaded modules | Extensible apps | Architecture |
| 12 | Component-Based Architecture | Architecture | Compose system from components | Modular apps, engines | Architecture |
| 13 | Event-Driven Architecture | Architecture | System driven by event flow | Reactive systems | Architecture |
| 14 | Service-Oriented Architecture | Architecture | System composed of network services | Enterprise systems | Architecture/Distributed |
| 15 | Microservices | Architecture | Independently deployable small services | Cloud-native systems | Distributed |
| 16 | Modular Monolith | Architecture | Single deployable, modular internal structure | Mid-size systems | Architecture |
| 17 | Client-Server | Architecture | Clients request, server responds | Distributed apps | Architecture/Networking |
| 18 | Broker Architecture | Architecture | Broker mediates distributed components | Middleware systems | Architecture/Distributed |
| 19 | Pipe-and-Filter | Architecture | Chain of independent processing filters | Data pipelines | Architecture/Data Processing |
| 20 | Blackboard Architecture | Architecture | Shared knowledge base, multiple experts | AI/complex problem solving | Architecture |
| 21 | Event Sourcing Architecture | Architecture | Persist state as sequence of events | Auditable systems | Distributed/Architecture |
| 22 | CQRS Architecture | Architecture | Separate read and write models | Scalable systems | Distributed/Architecture |
| 23 | Data-Centered Architecture | Architecture | Shared central data store | Repository-style systems | Architecture |
| 24 | Shared-Nothing Architecture | Architecture | No shared state between nodes | Distributed scalability | Distributed |
| 25 | Shared-Memory Architecture | Architecture | Nodes share common memory | HPC systems | Architecture |

## Category 15 — Database / Data Access

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Repository | Data Access | Abstracts collection-like data access | Domain persistence | Data Access |
| 2 | DAO | Data Access | Encapsulates data access logic | Enterprise apps | Data Access |
| 3 | Data Mapper | Data Access | Maps objects to DB independent of both | ORMs | Data Access |
| 4 | Active Record | Data Access | Object wraps its own persistence logic | Simple ORMs | Data Access |
| 5 | Unit of Work | Data Access | Tracks changes for single transaction commit | Transactional apps | Data Access |
| 6 | Identity Map | Data Access | Ensures single object instance per record | ORMs | Data Access |
| 7 | Lazy Loading | Data Access | Defer loading related data until needed | ORMs | Data Access |
| 8 | Query Object | Data Access | Encapsulates query as object | Flexible querying | Data Access |
| 9 | Specification | Data Access | Encapsulate selection criteria as object | Query composition | Data Access |
| 10 | Transaction Script | Data Access | Procedural logic per business transaction | Simple business apps | Data Access |
| 11 | Table Module | Data Access | One class handles all rows of a table | Simple data apps | Data Access |
| 12 | Row Data Gateway | Data Access | Object per row for DB access | Simple data apps | Data Access |
| 13 | Table Data Gateway | Data Access | Single gateway object per table | Simple data apps | Data Access |
| 14 | Connection Pool | Data Access | Reuse database connections | High-throughput apps | Data Access/Performance |
| 15 | Cache-Aside | Data Access | App manages cache population on miss | Read-heavy systems | Caching |
| 16 | Write-Through | Data Access | Write to cache and store together | Consistent caching | Caching |
| 17 | Write-Behind | Data Access | Write to cache, async flush to store | High write throughput | Caching |
| 18 | Read-Through | Data Access | Cache loads from store on miss transparently | Read-heavy systems | Caching |
| 19 | Optimistic Locking | Data Access | Detect conflicts at commit time | Low-contention data | Data Access |
| 20 | Pessimistic Locking | Data Access | Lock data before modification | High-contention data | Data Access |
| 21 | MVCC | Data Access | Multiple versions allow concurrent access | Databases | Data Access |
| 22 | Write-Ahead Logging | Data Access | Log changes before applying | Durable storage engines | Data Access |
| 23 | Buffer Pool | Data Access | Cache of in-memory database pages | DB engines | Data Access/Performance |
| 24 | Log-Structured Storage | Data Access | Append-only write-optimized storage | LSM-tree databases | Data Access |
| 25 | Compaction | Data Access | Merge/reduce log-structured data files | LSM databases | Data Access |

## Category 16 — Distributed Systems

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Leader Election | Distributed | Select coordinator among nodes | Cluster coordination | Distributed |
| 2 | Consensus | Distributed | Agree on value across nodes | Raft, Paxos systems | Distributed |
| 3 | Gossip | Distributed | Epidemic-style info propagation | Cluster membership | Distributed |
| 4 | Heartbeat | Distributed | Periodic liveness signal | Failure detection | Distributed |
| 5 | Distributed Lock | Distributed | Mutual exclusion across nodes | Coordination services | Distributed |
| 6 | Lease | Distributed | Time-bounded ownership grant | Distributed locking | Distributed |
| 7 | Quorum | Distributed | Majority agreement for operation validity | Replicated systems | Distributed |
| 8 | Replication | Distributed | Copy data across multiple nodes | Fault tolerance, HA | Distributed |
| 9 | Primary-Replica | Distributed | One primary, replicas follow | Databases, storage | Distributed |
| 10 | Leader-Follower | Distributed | Leader coordinates, followers replicate | Replicated logs | Distributed |
| 11 | Sharding | Distributed | Partition data across nodes | Scalable storage | Distributed |
| 12 | Partitioning | Distributed | Divide dataset into segments | Scalable databases | Distributed |
| 13 | Consistent Hashing | Distributed | Minimal remapping on node changes | Distributed caches/storage | Distributed |
| 14 | Service Discovery | Distributed | Locate services dynamically | Microservices | Distributed |
| 15 | Distributed Configuration | Distributed | Centralized config across nodes | Cluster management | Distributed |
| 16 | Eventual Consistency | Distributed | Convergence over time, not immediate | Highly available systems | Distributed |
| 17 | Strong Consistency | Distributed | Immediate agreement across replicas | Critical data systems | Distributed |
| 18 | Idempotency | Distributed | Repeated operation has same effect | Reliable messaging | Distributed |
| 19 | Retry | Distributed | Reattempt failed distributed operation | Resilient clients | Distributed/Resilience |
| 20 | Exponential Backoff | Distributed | Growing delay between retries | Resilient clients | Distributed/Resilience |
| 21 | Circuit Breaker | Distributed | Stop calling failing dependency | Resilient services | Distributed/Resilience |
| 22 | Bulkhead | Distributed | Isolate failures to resource pool | Resilient services | Distributed/Resilience |
| 23 | Timeout | Distributed | Bound wait for remote response | Distributed calls | Distributed |
| 24 | Fallback | Distributed | Alternate response on failure | Resilient services | Distributed/Resilience |
| 25 | Graceful Degradation | Distributed | Reduced functionality under failure | Resilient systems | Distributed/Resilience |
| 26 | Saga | Distributed | Sequence of compensating local transactions | Distributed transactions | Distributed |
| 27 | Outbox | Distributed | Store events with local transaction for reliable publish | Event-driven services | Distributed |
| 28 | Inbox | Distributed | Dedupe/track incoming messages | Reliable messaging | Distributed |
| 29 | Transactional Outbox | Distributed | Guarantee event publish with DB transaction | Event-driven services | Distributed |
| 30 | Event Sourcing | Distributed | Persist state as event log | Auditable, replayable systems | Distributed |
| 31 | CQRS | Distributed | Separate command and query models | Scalable services | Distributed |
| 32 | Reliable Messaging | Distributed | Guaranteed delivery semantics | Message brokers | Distributed |
| 33 | Exactly-Once | Distributed | Message processed exactly one time | Critical messaging | Distributed |
| 34 | At-Least-Once | Distributed | Message may be delivered multiple times | Common messaging default | Distributed |
| 35 | At-Most-Once | Distributed | Message delivered zero or one time | Best-effort messaging | Distributed |
| 36 | Dead Letter Queue | Distributed | Holds undeliverable/failed messages | Message brokers | Distributed |
| 37 | Competing Consumers | Distributed | Multiple consumers share a queue | Load-distributed processing | Distributed |
| 38 | Distributed Scheduler | Distributed | Schedules jobs across cluster nodes | Cluster job systems | Distributed |

## Category 17 — Domain / Enterprise

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Service Layer | Domain/Enterprise | Defines application's business operations | Enterprise apps | Domain |
| 2 | Domain Service | Domain/Enterprise | Business logic not owned by an entity | DDD applications | Domain |
| 3 | Application Service | Domain/Enterprise | Orchestrates use-case workflow | Enterprise apps | Domain |
| 4 | Repository | Domain/Enterprise | Collection-like access to aggregates | DDD applications | Domain |
| 5 | Unit of Work | Domain/Enterprise | Tracks and commits related changes | Transactional domain ops | Domain |
| 6 | Specification | Domain/Enterprise | Encapsulates business rule as object | Validation, querying | Domain |
| 7 | Factory | Domain/Enterprise | Creates complex domain aggregates | DDD applications | Domain |
| 8 | Aggregate | Domain/Enterprise | Consistency boundary of related entities | DDD applications | Domain |
| 9 | Aggregate Root | Domain/Enterprise | Entry point entity of an aggregate | DDD applications | Domain |
| 10 | Entity | Domain/Enterprise | Object with identity over time | Domain models | Domain |
| 11 | Value Object | Domain/Enterprise | Immutable object defined by attributes | Domain models | Domain |
| 12 | Domain Event | Domain/Enterprise | Represents something that happened in domain | Event-driven domains | Domain |
| 13 | Domain Model | Domain/Enterprise | Object model reflecting business rules | Complex business apps | Domain |
| 14 | Anti-Corruption Layer | Domain/Enterprise | Isolates domain from external model | Legacy integration | Domain |
| 15 | Bounded Context | Domain/Enterprise | Explicit domain model boundary | Large domain systems | Domain |
| 16 | Domain-Driven Design | Domain/Enterprise | Model software around business domain | Complex enterprise systems | Domain |

## Category 18 — Caching

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Cache-Aside | Caching | App loads/populates cache on miss | Read-heavy services | Caching |
| 2 | Read-Through | Caching | Cache transparently loads from source | Read-heavy services | Caching |
| 3 | Write-Through | Caching | Write updates cache and store synchronously | Consistent caching | Caching |
| 4 | Write-Behind | Caching | Write to cache, async flush to store | Write-heavy services | Caching |
| 5 | Refresh-Ahead | Caching | Proactively refresh before expiry | Latency-sensitive caches | Caching |
| 6 | Memoization | Caching | Cache function results by input | Pure computations | Caching/Performance |
| 7 | Local Cache | Caching | In-process cache storage | Single-node apps | Caching |
| 8 | Distributed Cache | Caching | Shared cache across nodes | Scaled services | Caching/Distributed |
| 9 | Multi-Level Cache | Caching | Layered caches of increasing latency | High-perf systems | Caching |
| 10 | Cache Stampede Prevention | Caching | Avoid concurrent reload on expiry | High-traffic caches | Caching |
| 11 | Cache Penetration Prevention | Caching | Guard against repeated misses on absent keys | High-traffic caches | Caching |
| 12 | Cache Warming | Caching | Pre-populate cache before load | Startup optimization | Caching |
| 13 | Cache Invalidation | Caching | Remove/update stale cache entries | Consistent caching | Caching |
| 14 | Negative Caching | Caching | Cache absence-of-result responses | Lookup services | Caching |

## Category 19 — Error Handling / Resilience

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Error Code | Resilience | Return status code for error signaling | C-style APIs | Error Handling |
| 2 | Exception-Based Handling | Resilience | Signal errors via exceptions | C++ application code | Error Handling |
| 3 | Result Type | Resilience | Return success/error union type | Modern C++ APIs | Error Handling |
| 4 | Expected/Unexpected | Resilience | std::expected-style error propagation | Modern C++ APIs | Error Handling |
| 5 | Optional-as-Result | Resilience | Use optional to signal absence/failure | Lightweight error signaling | Error Handling |
| 6 | Null Object | Resilience | Neutral no-op stand-in for null | Avoid null checks | Error Handling |
| 7 | Fail Fast | Resilience | Detect and report errors immediately | Robust systems | Resilience |
| 8 | Fail Safe | Resilience | Default to safe state on failure | Safety-critical systems | Resilience |
| 9 | Graceful Degradation | Resilience | Reduced service instead of total failure | Resilient systems | Resilience |
| 10 | Retry | Resilience | Reattempt failed operation | Transient failure handling | Resilience |
| 11 | Timeout | Resilience | Bound operation wait time | Resilient calls | Resilience |
| 12 | Circuit Breaker | Resilience | Stop calling failing dependency | Resilient services | Resilience |
| 13 | Bulkhead | Resilience | Isolate failures to resource pool | Resilient services | Resilience |
| 14 | Fallback | Resilience | Alternate path on failure | Resilient services | Resilience |
| 15 | Recovery State Machine | Resilience | Models structured error recovery | Drivers, services | Resilience |
| 16 | Watchdog Recovery | Resilience | Reset/recover on stall detection | Embedded, services | Resilience |
| 17 | Transaction Rollback | Resilience | Undo partial transaction on failure | Databases, transactions | Resilience |
| 18 | Compensation | Resilience | Undo effect via compensating action | Distributed transactions | Resilience |
| 19 | Dead Letter Queue | Resilience | Holds failed/undeliverable messages | Message brokers | Resilience |
| 20 | Poison Message Handling | Resilience | Isolate messages that repeatedly fail | Message processing | Resilience |
| 21 | Error Boundary | Resilience | Contain errors within a subsystem | Modular applications | Resilience |

## Category 20 — Testing / Testability

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Test Double | Testing | Generic term for test substitute object | Unit testing | Testing |
| 2 | Mock | Testing | Verifies expected interactions | Unit testing | Testing |
| 3 | Stub | Testing | Returns canned responses | Unit testing | Testing |
| 4 | Fake | Testing | Working lightweight implementation | Unit/integration testing | Testing |
| 5 | Spy | Testing | Records calls for later verification | Unit testing | Testing |
| 6 | Dependency Injection | Testing | Supply substitutable dependencies | Testable design | Testing |
| 7 | Seam | Testing | Point where behavior can be altered for tests | Legacy code testing | Testing |
| 8 | Test Adapter | Testing | Adapts system interface for test harness | Integration testing | Testing |
| 9 | Virtual Clock | Testing | Controllable simulated time source | Time-dependent tests | Testing |
| 10 | Deterministic Scheduler | Testing | Reproducible task execution order | Concurrency testing | Testing |
| 11 | Dependency Substitution | Testing | Swap real dependency for test version | Unit testing | Testing |
| 12 | Characterization Test | Testing | Capture existing behavior before change | Legacy code safety | Testing |
| 13 | Golden Master | Testing | Compare output against saved reference | Regression testing | Testing |
| 14 | Approval Testing | Testing | Human-approved output snapshots | Regression testing | Testing |

## Category 21 — UI / Desktop / Qt

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | MVC | UI | Separate model, view, controller | Desktop apps | UI |
| 2 | MVP | UI | Presenter mediates model/view | Desktop apps | UI |
| 3 | MVVM | UI | ViewModel binds data to view | Qt Quick/QML apps | UI |
| 4 | Observer | UI | Notify UI on model change | Qt signals, data binding | UI |
| 5 | Command | UI | Encapsulate UI action as object | Menus, toolbars, undo | UI |
| 6 | State | UI | UI behavior varies with mode | Dialogs, wizards | UI |
| 7 | Mediator | UI | Coordinate widget interactions | Complex dialogs | UI |
| 8 | Presentation Model | UI | View-independent state of UI | Testable UI logic | UI |
| 9 | ViewModel | UI | Exposes bindable state to view | MVVM UI | UI |
| 10 | Presenter | UI | Handles view logic, updates view | MVP UI | UI |
| 11 | Document/View | UI | Separate document data from its views | Qt/MFC apps | UI |
| 12 | Undo/Redo | UI | Reversible command history | Editors, IDEs | UI |
| 13 | Navigation Controller | UI | Manages screen/view transitions | Mobile/desktop apps | UI |
| 14 | Event Bus | UI | Decoupled UI event distribution | Modular UI apps | UI |
| 15 | Signal/Slot | UI | Qt's typed observer mechanism | Qt applications | UI |
| 16 | Dialog Controller | UI | Manages dialog lifecycle/logic | Desktop apps | UI |

## Category 22 — Game Engine / Real-Time

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Game Loop | Game Engine | Central update/render cycle | Game engines | Game Engine |
| 2 | Update Method | Game Engine | Per-frame entity update call | Game objects | Game Engine |
| 3 | Component Pattern | Game Engine | Compose behavior via components | Game objects | Game Engine |
| 4 | Entity Component System | Game Engine | Data-oriented entity composition | Modern game engines | Game Engine/Performance |
| 5 | Object Pool | Game Engine | Reuse frequently created/destroyed objects | Bullets, particles | Game Engine/Performance |
| 6 | Command | Game Engine | Encapsulate input/action as object | Input handling, replay | Game Engine |
| 7 | State | Game Engine | Manage entity/game mode behavior | AI, game states | Game Engine |
| 8 | Event Queue | Game Engine | Buffered game event handling | Gameplay systems | Game Engine |
| 9 | Double Buffer | Game Engine | Alternate render/update buffers | Rendering pipelines | Game Engine |
| 10 | Dirty Flag | Game Engine | Mark data needing recomputation | Transform/physics updates | Game Engine/Performance |
| 11 | Service Locator | Game Engine | Global access to engine services | Game engines | Game Engine |
| 12 | Spatial Partitioning | Game Engine | Divide space for efficient queries | Collision, culling | Game Engine/Performance |
| 13 | Flyweight | Game Engine | Share common data across instances | Particles, tiles | Game Engine/Performance |
| 14 | Prototype | Game Engine | Clone template entities | Spawning objects | Game Engine |
| 15 | Data-Oriented Design | Game Engine | Layout data for cache efficiency | Performance-critical engines | Game Engine/Performance |
| 16 | Job System | Game Engine | Parallel task scheduling | Multi-threaded engines | Game Engine/Concurrency |
| 17 | Frame Graph | Game Engine | Declarative render pass dependency graph | Rendering pipelines | Game Engine/Graphics |
| 18 | Resource Manager | Game Engine | Loads/tracks game assets | Asset pipelines | Game Engine |

## Category 23 — Compiler / Language Implementation

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Lexer | Compiler | Converts source text to tokens | Compilers, interpreters | Compiler/Language |
| 2 | Parser | Compiler | Builds structure from tokens | Compilers, interpreters | Compiler/Language |
| 3 | Recursive Descent | Compiler | Top-down parsing via mutual recursion | Hand-written parsers | Compiler/Language |
| 4 | Pratt Parser | Compiler | Operator-precedence recursive parsing | Expression parsers | Compiler/Language |
| 5 | AST | Compiler | Tree representation of source structure | Compilers, interpreters | Compiler/Language |
| 6 | Visitor | Compiler | Traverse/operate over AST nodes | Compilers, analyzers | Compiler/Language |
| 7 | Interpreter | Compiler | Directly execute parsed structure | Scripting engines | Compiler/Language |
| 8 | Symbol Table | Compiler | Tracks identifiers and scope info | Compilers | Compiler/Language |
| 9 | Type Checker | Compiler | Validates type correctness | Compilers | Compiler/Language |
| 10 | Semantic Analysis | Compiler | Validates meaning beyond syntax | Compilers | Compiler/Language |
| 11 | Intermediate Representation | Compiler | Lowered form between AST and codegen | Compilers | Compiler/Language |
| 12 | Pass Pipeline | Compiler | Sequential compiler transformation stages | Compilers | Compiler/Language |
| 13 | Optimization Pass | Compiler | Transforms IR to improve output | Compilers | Compiler/Language |
| 14 | Bytecode Interpreter | Compiler | Executes compact intermediate bytecode | VMs, scripting engines | Compiler/Language |
| 15 | Virtual Machine | Compiler | Executes portable instruction set | Language runtimes | Compiler/Language |
| 16 | JIT Compiler | Compiler | Compiles code at runtime for speed | High-perf runtimes | Compiler/Performance |
| 17 | Plugin Pass Architecture | Compiler | Extensible pipeline of compiler passes | LLVM-style compilers | Compiler/Language |

## Category 24 — High-Performance C++

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Data-Oriented Design | Performance | Organize data by access pattern | Game/simulation engines | Performance |
| 2 | Structure of Arrays | Performance | Store fields in separate arrays | Cache-friendly processing | Performance |
| 3 | Array of Structures | Performance | Store records contiguously per object | General-purpose storage | Performance |
| 4 | Cache-Aware Design | Performance | Design data layout for cache locality | High-perf computing | Performance |
| 5 | Cache Blocking | Performance | Process data in cache-sized chunks | Numerical computing | Performance |
| 6 | Loop Tiling | Performance | Partition loops for cache reuse | Matrix operations | Performance |
| 7 | False-Sharing Avoidance | Performance | Prevent unrelated data on same cache line | Multi-threaded code | Performance/Concurrency |
| 8 | CPU Affinity | Performance | Pin threads to specific cores | Latency-sensitive systems | Performance |
| 9 | NUMA-Aware Design | Performance | Allocate memory near accessing core | Multi-socket servers | Performance |
| 10 | Zero-Copy | Performance | Avoid redundant data copies | I/O, networking | Performance |
| 11 | Batching | Performance | Group operations to amortize overhead | I/O, GPU calls | Performance |
| 12 | SIMD | Performance | Single-instruction multiple-data ops | Numerical/media processing | Performance |
| 13 | Vectorization | Performance | Compiler/manual loop vector execution | Numerical computing | Performance |
| 14 | Prefetching | Performance | Load data before it's needed | Latency hiding | Performance |
| 15 | Branch Prediction Optimization | Performance | Structure code for predictable branches | Hot loops | Performance |
| 16 | Object Pool | Performance | Reuse objects to avoid allocation cost | Real-time systems | Performance |
| 17 | Memory Pool | Performance | Pre-allocated reusable memory blocks | Real-time systems | Performance |
| 18 | Lock-Free Data Structure | Performance | Concurrent structure without locks | High-throughput concurrency | Performance/Concurrency |
| 19 | Work Stealing | Performance | Balance load among worker threads | Parallel task systems | Performance/Concurrency |
| 20 | Pipeline Parallelism | Performance | Overlap staged processing across threads | Streaming systems | Performance/Concurrency |
| 21 | Double Buffering | Performance | Alternate buffers to avoid stalls | Rendering, I/O | Performance |
| 22 | Ring Buffer | Performance | Circular buffer with O(1) ops | Low-latency queues | Performance |
| 23 | Arena Allocation | Performance | Bulk allocate, free all at once | Per-frame/temp allocations | Performance |
| 24 | Small Object Optimization | Performance | Inline small allocations avoiding heap | Containers, variant types | Performance |
| 25 | Small String Optimization | Performance | Inline small strings avoiding heap | std::string implementations | Performance |
| 26 | Short Buffer Optimization | Performance | Inline small buffers avoiding heap | Custom containers | Performance |
| 27 | Lazy Evaluation | Performance | Defer computation until result needed | Expression templates | Performance |
| 28 | Memoization | Performance | Cache computed results by input | Repeated computations | Performance |

## Category 25 — Security / Isolation

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Capability-Based Security | Security | Access granted via unforgeable tokens | Sandboxed systems | Security |
| 2 | Principle of Least Privilege | Security | Grant minimum necessary access | System design | Security |
| 3 | Sandbox | Security | Isolated restricted execution environment | Untrusted code execution | Security |
| 4 | Privilege Separation | Security | Split process privileges by function | Hardened services | Security |
| 5 | Secure Boundary | Security | Enforced trust boundary between components | System design | Security |
| 6 | Input Validation Boundary | Security | Validate untrusted input at entry point | APIs, parsers | Security |
| 7 | Authentication Boundary | Security | Enforce identity verification point | APIs, services | Security |
| 8 | Authorization Boundary | Security | Enforce permission checks at entry | APIs, services | Security |
| 9 | Secure Resource Ownership | Security | Clear ownership prevents leaks/misuse | Resource-holding systems | Security |
| 10 | Zero Trust Boundary | Security | Verify every access regardless of origin | Distributed systems | Security |
| 11 | Secret Manager | Security | Centralized secure secret storage/access | Credential management | Security |
| 12 | Secure Factory | Security | Controlled creation of sensitive objects | Crypto/credential objects | Security |
| 13 | Safe Deserialization | Security | Guard against unsafe deserialized input | Network/file parsing | Security |
| 14 | Memory Isolation | Security | Separate memory regions between components | Sandboxing, VMs | Security |

## Category 26 — Messaging / Eventing

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Observer | Messaging | Notify dependents of state change | In-process events | Messaging |
| 2 | Publish-Subscribe | Messaging | Decoupled topic-based messaging | Event systems, brokers | Messaging |
| 3 | Event Bus | Messaging | Central in-process event distribution | Modular applications | Messaging |
| 4 | Message Bus | Messaging | Central message distribution channel | Distributed systems | Messaging/Distributed |
| 5 | Event Queue | Messaging | Buffered ordered event storage | Async event handling | Messaging |
| 6 | Command Bus | Messaging | Routes commands to handlers | CQRS systems | Messaging |
| 7 | Query Bus | Messaging | Routes queries to handlers | CQRS systems | Messaging |
| 8 | Event Dispatcher | Messaging | Routes events to subscribers | Event systems | Messaging |
| 9 | Mediator | Messaging | Centralizes component communication | Decoupled modules | Messaging |
| 10 | Message Broker | Messaging | Intermediary routing messages between services | Distributed messaging | Messaging/Distributed |
| 11 | Competing Consumers | Messaging | Multiple consumers share a queue | Load-distributed processing | Messaging/Distributed |
| 12 | Work Queue | Messaging | Queue of pending work items | Task distribution | Messaging |
| 13 | Dead Letter Queue | Messaging | Holds undeliverable messages | Message brokers | Messaging |
| 14 | Event Router | Messaging | Directs events based on rules | Event-driven systems | Messaging |
| 15 | Event Aggregator | Messaging | Combines multiple event sources | Decoupled event handling | Messaging |
| 16 | Event Filter | Messaging | Selects relevant events from stream | Event processing | Messaging |
| 17 | Event Replay | Messaging | Re-process historical event log | Event sourcing systems | Messaging/Distributed |
| 18 | Event Sourcing | Messaging | Persist state changes as event sequence | Auditable systems | Messaging/Distributed |

## Category 27 — Pipeline / Data Processing

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Pipe-and-Filter | Pipeline | Chain independent processing stages | Data transformation systems | Data Processing |
| 2 | Processing Pipeline | Pipeline | Sequential staged data processing | ETL, media processing | Data Processing |
| 3 | Producer-Consumer Pipeline | Pipeline | Staged handoff between producers/consumers | Streaming systems | Data Processing |
| 4 | Streaming Pipeline | Pipeline | Continuous unbounded data processing | Telemetry, media | Data Processing |
| 5 | Batch Pipeline | Pipeline | Process bounded data chunks | ETL, analytics | Data Processing |
| 6 | Parallel Pipeline | Pipeline | Concurrent execution of pipeline stages | High-throughput processing | Data Processing/Performance |
| 7 | Dataflow | Pipeline | Model computation as data movement graph | Reactive/stream systems | Data Processing |
| 8 | Backpressure | Pipeline | Slow producer when consumer lags | Streaming pipelines | Data Processing |
| 9 | Flow Control | Pipeline | Regulate throughput between stages | Streaming pipelines | Data Processing |
| 10 | Fan-In | Pipeline | Merge multiple sources into one | Aggregation stages | Data Processing |
| 11 | Fan-Out | Pipeline | Distribute one source to many consumers | Broadcast stages | Data Processing |
| 12 | Splitter | Pipeline | Divide stream into multiple paths | Pipeline routing | Data Processing |
| 13 | Aggregator | Pipeline | Combine multiple inputs into a result | Analytics pipelines | Data Processing |
| 14 | Router | Pipeline | Direct data based on rules | Pipeline routing | Data Processing |
| 15 | Filter | Pipeline | Select/transform subset of data | Pipeline stages | Data Processing |
| 16 | Transformer | Pipeline | Convert data shape/format | Pipeline stages | Data Processing |
| 17 | Sink | Pipeline | Terminal consumer of pipeline output | Storage, logging | Data Processing |
| 18 | Source | Pipeline | Origin producer of pipeline data | Sensors, files, streams | Data Processing |

## Category 28 — File / Resource / Plugin

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Resource Manager | Resource | Owns and tracks resource lifecycle | Engines, applications | Resource |
| 2 | Resource Cache | Resource | Caches loaded resources for reuse | Asset pipelines | Resource/Performance |
| 3 | Resource Factory | Resource | Creates managed resource instances | Applications, engines | Resource |
| 4 | Plugin Manager | Resource | Loads/manages plugin lifecycle | Extensible apps | Resource |
| 5 | Plugin Registry | Resource | Tracks registered plugins | Extensible apps | Resource |
| 6 | Dynamic Loader | Resource | Loads code/modules at runtime | Plugin systems | Resource/OS |
| 7 | Module Registry | Resource | Tracks loaded modules | Modular applications | Resource |
| 8 | Handle Table | Resource | Maps handles to resource objects | Resource management | Resource |
| 9 | File Abstraction | Resource | Uniform interface over file I/O | Cross-platform apps | Resource |
| 10 | Stream Abstraction | Resource | Uniform interface over data streams | I/O libraries | Resource |
| 11 | RAII Resource Wrapper | Resource | Bind resource to object lifetime | File/handle management | Resource |
| 12 | Resource Lifetime Manager | Resource | Controls resource creation/destruction timing | Engines, drivers | Resource |
| 13 | Lazy Resource Loading | Resource | Load resources only when needed | Asset pipelines | Resource/Performance |
| 14 | Resource Preloading | Resource | Load resources ahead of use | Latency-sensitive apps | Resource/Performance |
| 15 | Hot Reloading | Resource | Reload resources/code without restart | Development tooling, engines | Resource |
| 16 | Dependency Graph Loader | Resource | Loads resources respecting dependencies | Asset/module systems | Resource |

## Category 29 — State Machine / Control

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | State Machine | State Machine | Explicit states and transitions | Protocols, UI, devices | State Machine |
| 2 | Finite State Machine | State Machine | Fixed finite set of states/transitions | Protocol control, embedded | State Machine |
| 3 | Hierarchical State Machine | State Machine | Nested states with inherited behavior | Complex control logic | State Machine |
| 4 | Table-Driven State Machine | State Machine | Transitions defined via lookup table | Data-driven control logic | State Machine |
| 5 | Mealy Machine | State Machine | Output depends on state and input | Digital logic, protocols | State Machine |
| 6 | Moore Machine | State Machine | Output depends only on state | Digital logic, protocols | State Machine |
| 7 | State Transition Table | State Machine | Tabular mapping of state transitions | State machine implementation | State Machine |
| 8 | Recovery State Machine | State Machine | Models structured fault recovery | Drivers, resilient systems | State Machine |
| 9 | Protocol State Machine | State Machine | Models communication protocol states | Networking, drivers | State Machine |
| 10 | Device State Machine | State Machine | Models hardware device states | Drivers, embedded | State Machine |
| 11 | Connection State Machine | State Machine | Models network connection lifecycle | Networking | State Machine |
| 12 | Lifecycle State Machine | State Machine | Models object/component lifecycle | General software components | State Machine |

## Category 30 — Hardware / Low-Level C++

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Register Abstraction | Hardware | Typed wrapper over hardware registers | Peripheral drivers | Hardware |
| 2 | Bitfield Abstraction | Hardware | Structured access to packed bits | Register manipulation | Hardware |
| 3 | MMIO Wrapper | Hardware | Safe access to memory-mapped I/O | Peripheral drivers | Hardware |
| 4 | Port I/O Wrapper | Hardware | Safe access to port-based I/O | Legacy x86 drivers | Hardware |
| 5 | Volatile Register Access | Hardware | Prevent compiler optimization of HW reads | Register access | Hardware |
| 6 | Hardware Resource Guard | Hardware | RAII guard for hardware resource access | Peripheral drivers | Hardware |
| 7 | Interrupt Guard | Hardware | Disable/restore interrupts in scope | Critical sections | Hardware/Embedded |
| 8 | Critical Section Guard | Hardware | Protect code from concurrent/interrupt access | Embedded synchronization | Hardware/Embedded |
| 9 | DMA Descriptor | Hardware | Metadata describing a DMA transfer | DMA drivers | Hardware/Driver |
| 10 | Descriptor Ring | Hardware | Ring of transfer descriptors | NIC/storage drivers | Hardware/Driver |
| 11 | Device Context | Hardware | Per-device state and configuration | Drivers | Hardware/Driver |
| 12 | Hardware Capability Object | Hardware | Represents queried device capabilities | Driver negotiation | Hardware/Driver |
| 13 | Hardware Version Adapter | Hardware | Adapts differences across HW revisions | Multi-revision drivers | Hardware/Driver |
| 14 | Hardware Compatibility Layer | Hardware | Uniform API across hardware variants | Cross-platform drivers | Hardware/Driver |
| 15 | Device Simulation Layer | Hardware | Simulates hardware for testing | Driver testing | Hardware/Testing |
| 16 | Hardware Mock Layer | Hardware | Mocked hardware interface for tests | Driver unit testing | Hardware/Testing |
| 17 | Board Abstraction | Hardware | Uniform API over board differences | Embedded platforms | Hardware/Embedded |
| 18 | Peripheral Abstraction | Hardware | Uniform API over peripheral devices | Embedded drivers | Hardware/Embedded |
| 19 | Clock Abstraction | Hardware | Uniform API for clock configuration | Embedded drivers | Hardware/Embedded |
| 20 | GPIO Abstraction | Hardware | Uniform API for GPIO control | Embedded drivers | Hardware/Embedded |
| 21 | UART Abstraction | Hardware | Uniform API for UART communication | Embedded drivers | Hardware/Embedded |
| 22 | SPI Abstraction | Hardware | Uniform API for SPI communication | Embedded drivers | Hardware/Embedded |
| 23 | I2C Abstraction | Hardware | Uniform API for I2C communication | Embedded drivers | Hardware/Embedded |
| 24 | CAN Abstraction | Hardware | Uniform API for CAN bus communication | Automotive/embedded drivers | Hardware/Embedded |
| 25 | Timer Abstraction | Hardware | Uniform API for hardware timers | Embedded drivers | Hardware/Embedded |
| 26 | ADC Abstraction | Hardware | Uniform API for analog-to-digital conversion | Embedded drivers | Hardware/Embedded |
| 27 | PWM Abstraction | Hardware | Uniform API for pulse-width modulation | Embedded drivers | Hardware/Embedded |

## Category 31 — C++ Library / Framework Design

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Pimpl | Library Design | Hide implementation behind pointer | ABI-stable libraries | Library Design |
| 2 | NVI | Library Design | Public non-virtual, private virtual hooks | Extensible base classes | Library Design |
| 3 | CRTP | Library Design | Compile-time static polymorphism | Static interfaces | Library Design |
| 4 | Type Erasure | Library Design | Uniform interface over varied types | Generic containers/callables | Library Design |
| 5 | Plugin Architecture | Library Design | Extend library via loadable modules | Extensible frameworks | Library Design |
| 6 | Factory Registration | Library Design | Self-registering factories at init | Plugin/extension systems | Library Design |
| 7 | Static Registration | Library Design | Register components at static init time | Plugin systems | Library Design |
| 8 | Callback Interface | Library Design | User-supplied function/hook interface | Event-driven libraries | Library Design |
| 9 | Observer Interface | Library Design | Subscribable notification interface | Reactive libraries | Library Design |
| 10 | Policy-Based Customization | Library Design | Compose behavior via template policies | Generic libraries | Library Design |
| 11 | Traits-Based Customization | Library Design | Customize via type trait specialization | Generic libraries | Library Design |
| 12 | Allocator-Aware Design | Library Design | Containers parameterized by allocator | STL-style containers | Library Design |
| 13 | Customization Point Object | Library Design | Uniform customizable free-function object | Ranges-style libraries | Library Design |
| 14 | Tag Invoke | Library Design | Extensible customization via tag dispatch | Modern C++ libraries | Library Design |
| 15 | Ranges-Based Customization | Library Design | Customization via range adaptors | std::ranges-style libraries | Library Design |
| 16 | Dependency Injection | Library Design | Externally supplied dependencies | Testable library design | Library Design |
| 17 | ABI Boundary | Library Design | Stable binary interface across versions | Shared libraries | Library Design |
| 18 | Stable Interface Boundary | Library Design | Interface stable despite internal change | Long-lived libraries | Library Design |

## Category 32 — Modern C++20/23

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Concepts | Modern C++ | Named constraints on template parameters | Generic library APIs | Modern C++ |
| 2 | Ranges | Modern C++ | Composable lazy view-based algorithms | Container processing | Modern C++ |
| 3 | Coroutines | Modern C++ | Suspendable/resumable functions | Async code, generators | Modern C++/Concurrency |
| 4 | Generator | Modern C++ | Coroutine-based lazy sequence producer | Iteration, streaming | Modern C++ |
| 5 | Async Coroutine | Modern C++ | Coroutine-based asynchronous operation | Async I/O | Modern C++/Concurrency |
| 6 | Sender/Receiver | Modern C++ | Composable async execution model | std::execution pipelines | Modern C++/Concurrency |
| 7 | Structured Concurrency | Modern C++ | Bounded task lifetime scoping | Safe async code | Modern C++/Concurrency |
| 8 | std::jthread | Modern C++ | Joinable thread with cooperative cancellation | Modern concurrent code | Modern C++/Concurrency |
| 9 | std::stop_token | Modern C++ | Cooperative cancellation signal | Modern concurrent code | Modern C++/Concurrency |
| 10 | std::expected | Modern C++ | Explicit success/error return type | Error handling | Modern C++ |
| 11 | std::variant State Modeling | Modern C++ | Type-safe tagged union for states | State machines | Modern C++ |
| 12 | std::visit | Modern C++ | Type-safe dispatch over variant | Variant-based state handling | Modern C++ |
| 13 | std::span | Modern C++ | Non-owning view over contiguous data | Buffer APIs | Modern C++ |
| 14 | std::mdspan | Modern C++ | Non-owning multidimensional array view | Numerical computing | Modern C++ |
| 15 | PMR | Modern C++ | Polymorphic memory resource for containers | Custom allocation | Modern C++ |
| 16 | constexpr Design | Modern C++ | Compile-time evaluated logic | Compile-time computation | Modern C++ |
| 17 | Compile-Time State Machine | Modern C++ | State machine resolved at compile time | Zero-overhead control logic | Modern C++/Performance |

## Category 33 — Cancellation / Lifetime

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Cancellation Token | Lifetime | Signal to request operation cancellation | Async operations | Concurrency |
| 2 | Cooperative Cancellation | Lifetime | Task checks and honors cancellation requests | Async/task systems | Concurrency |
| 3 | Stop Token | Lifetime | Standardized cancellation signal object | std::jthread-based code | Modern C++/Concurrency |
| 4 | Scoped Cancellation | Lifetime | Cancellation bound to a scope's lifetime | Structured concurrency | Concurrency |
| 5 | Lifetime Token | Lifetime | Tracks validity of a referenced object | Async callback safety | System Programming |
| 6 | Weak Observer | Lifetime | Non-owning observer safe against destruction | Callback/event systems | System Programming |
| 7 | Ownership Token | Lifetime | Represents transferable exclusive ownership | Resource management | System Programming |
| 8 | Resource Lease | Lifetime | Time/scope-bounded resource ownership | Pooled resources | System Programming |
| 9 | Timeout-Based Lifetime | Lifetime | Resource expires after time bound | Caches, sessions | System Programming |
| 10 | RAII Cancellation | Lifetime | Cancellation tied to object destruction | Scoped async operations | Concurrency |
| 11 | Graceful Shutdown Protocol | Lifetime | Orderly halt of ongoing operations | Services, servers | System Programming |

## Category 34 — Transaction / Consistency

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Transaction | Transaction | Atomic unit of related operations | Databases, business logic | Transaction |
| 2 | Unit of Work | Transaction | Tracks changes for single commit | Transactional apps | Transaction |
| 3 | Two-Phase Commit | Transaction | Coordinated commit across participants | Distributed transactions | Transaction/Distributed |
| 4 | Saga | Transaction | Compensating-transaction sequence | Distributed transactions | Transaction/Distributed |
| 5 | Compensation | Transaction | Undo effect via compensating action | Distributed transactions | Transaction/Distributed |
| 6 | Optimistic Concurrency | Transaction | Detect conflicts at commit time | Low-contention data | Transaction |
| 7 | Pessimistic Concurrency | Transaction | Lock resources before use | High-contention data | Transaction |
| 8 | MVCC | Transaction | Multiple data versions enable concurrency | Databases | Transaction |
| 9 | Write-Ahead Logging | Transaction | Log before applying changes for durability | Storage engines | Transaction |
| 10 | Snapshot Isolation | Transaction | Transactions see consistent point-in-time view | Databases | Transaction |
| 11 | Eventual Consistency | Transaction | Convergence over time across replicas | Distributed data stores | Transaction/Distributed |
| 12 | Strong Consistency | Transaction | Immediate agreement across replicas | Critical data systems | Transaction/Distributed |
| 13 | Read Repair | Transaction | Fix stale replicas detected during read | Distributed databases | Transaction/Distributed |
| 14 | Quorum Read/Write | Transaction | Majority agreement for read/write validity | Distributed databases | Transaction/Distributed |

## Category 35 — Observability / Operations

| # | Pattern / Technique | Type | What / Purpose | Where Used | Target Domain |
|---|---|---|---|---|---|
| 1 | Structured Logging | Observability | Machine-parseable structured log entries | Services, applications | Observability |
| 2 | Correlation ID | Observability | Track a request across components | Distributed tracing | Observability/Distributed |
| 3 | Trace Context | Observability | Propagates tracing metadata across calls | Distributed tracing | Observability/Distributed |
| 4 | Metrics Collector | Observability | Aggregates runtime performance metrics | Monitoring systems | Observability |
| 5 | Health Check | Observability | Reports component operational status | Services, load balancers | Observability |
| 6 | Readiness Check | Observability | Reports whether component can accept traffic | Orchestrated services | Observability |
| 7 | Liveness Check | Observability | Reports whether component is alive/hung | Orchestrated services | Observability |
| 8 | Diagnostic Interface | Observability | Exposes internal state for debugging | Drivers, services | Observability |
| 9 | Telemetry Pipeline | Observability | Collects/forwards operational telemetry | Monitoring systems | Observability |
| 10 | Audit Trail | Observability | Records history of significant actions | Compliance, security | Observability |
| 11 | Event Log | Observability | Chronological record of system events | Debugging, compliance | Observability |
| 12 | Performance Counter | Observability | Tracks numeric performance metric | System monitoring | Observability |
| 13 | Watchdog Monitor | Observability | Detects unresponsive components | Resilient services | Observability |
| 14 | Self-Diagnostics | Observability | Component tests own health/state | Embedded, drivers | Observability |

## Final Cross-Domain Summary Table

| Pattern | Primary Category | Also Used In | Typical C++ Target |
|---|---|---|---|
| RAII | C++ Idiom | Drivers, Embedded, Apps | Resource Lifetime |
| Factory Method | GoF Creational | Plugins, Drivers, Apps | Object Creation |
| Strategy | GoF Behavioral | Algorithms, Drivers | Behavior Selection |
| Observer | GoF Behavioral | Qt, UI, Events, Messaging | Notifications |
| Reactor | Concurrency | Networking, OS | Event I/O |
| Proactor | Concurrency | Networking, OS | Async I/O |
| Ring Buffer | Buffering/Systems | Drivers, Embedded, Networking | Data Transfer |
| Thread Pool | Concurrency | Servers, Apps | Parallel Work |
| HAL | Driver | Embedded, OS | Hardware Abstraction |
| DMA | Driver/Hardware | Embedded, Storage, Networking | Data Transfer |
| MVVM | Architecture | Qt/Desktop | UI |
| Repository | Data Access | Applications, DDD | Persistence |
| Circuit Breaker | Resilience | Networking, Distributed | Fault Tolerance |
| Object Pool | Memory/Performance | Games, Servers, Drivers | Allocation Reuse |
| Lock-Free Queue | Lock-Free/Concurrency | High-perf servers, Audio | Data Transfer |
| Saga | Distributed/Transaction | Microservices | Distributed Transactions |
| Event Sourcing | Distributed/Messaging | Auditable systems | State Persistence |
| State Machine | State Machine | Protocols, Drivers, Embedded | Control Flow |
| Pimpl | C++ Idiom/Library | Libraries, SDKs | ABI Stability |
| CRTP | C++ Idiom/Library | Libraries, Performance code | Static Polymorphism |
| Type Erasure | C++ Idiom/Library | Generic libraries | Uniform Interfaces |
| Coroutines | Modern C++ | Async I/O, Generators | Async Control Flow |
| Cache-Aside | Caching/Data Access | Read-heavy services | Caching |
| Consensus | Distributed | Clusters, Coordination | Agreement |
| ISR + Worker Thread | Driver/Embedded | Kernel/Embedded drivers | Interrupt Handling |
| Entity Component System | Game Engine | Game engines | Data-Oriented Composition |
| Watchdog | OS/Embedded/Resilience | Embedded, Services | Fault Detection |
| Dependency Injection | DI/Testing | Applications, Tests | Loose Coupling |
| Structured Logging | Observability | Services, Applications | Diagnostics |
