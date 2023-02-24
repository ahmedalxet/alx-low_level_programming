# 0x1C. C - Makefiles

## Concepts

* Make and Makefiles
* When and Why to Use Makefiles
* Rules in Makefiles
* Explicit and Implicit Rules in Makefiles
* Common and Useful Rules in Makefiles
* Variables in Makefiles

## Notes

Make is a build automation tool that helps compile programs efficiently by determining which files need to be rebuilt and in what order. It uses Makefiles, which are scripts containing rules for building targets, dependencies, and commands.

Makefiles can be used to automate the build process of complex projects, especially those with many source files or dependencies. They are typically used in software development to automate the compilation and linking of source code into executable files.

Rules in Makefiles define how to build a target, including what dependencies it has and what commands should be executed. These rules can be explicit or implicit, depending on whether the rule specifies a particular target or applies to a class of targets.

Explicit rules apply to specific targets, while implicit rules apply to all targets that match a specific pattern. Some of the most common and useful rules include the "all" rule, which builds all targets specified in the Makefile, and the "clean" rule, which removes all generated files.

Variables in Makefiles allow you to define and use values that can be used throughout the Makefile. They are typically used to store compiler options, library locations, or other common settings that are used across multiple rules or targets. To set and use variables, you can use the syntax $(variable_name) in the Makefile.

Overall, Make and Makefiles provide a powerful and flexible tool for automating the build process of complex projects, making it easier to manage dependencies and build times.
