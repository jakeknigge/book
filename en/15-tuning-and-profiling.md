# Tuning and Profiling

(_avsm_: all notes and outline so far)

## The OCaml toolchain

Bytecode and native code introduction. Bytecode better for quick development, native code for production.  Mostly have feature parity.

### The `ocamlc` bytecode compiler

The simplest code generator in OCaml is the `ocamlc` compiler, which outputs
portable bytecode that is interpreted via the `ocamlrun` runtime.  The OCaml
bytecode virtual machine is a stack machine (much like the Java Virtual
Machine), with the exception of a single register that stores the more recent
result.  This provides a simple runtime model that is easy to implement, but
executes rather slowly due to being interpreted.

Bytecode is generated by the the `ocamlc` compiler, which generates the following
files:

Extension  Generated By     Purpose 
---------  ------------     -------
.ml        manual/codegen   Source files for compilation unit module implementations.
.mli       manual/codegen   Source files for compilation unit module interfaces. If missing, generated from the `.ml` file.
.cmi       ocamlc           Compiled module interface from a corresponding `.mli` source file.
.cmo       ocamlc           Compiled bytecode object file of the module implementation.
.cma       ocamlc           Library of bytecode object files packed into a single file.
.o         ocamlc           C source files are compiled into native object files by the system `cc`.

### The `ocamlopt` native code compiler

### The `ocaml` top-level loop

## Tuning the Garbage Collector

## Byte code Profiling
## Native Code Profiling
### gdb
### perf
### dtrace