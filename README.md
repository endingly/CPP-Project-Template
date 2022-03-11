# CPP-Project-Template

## requestment

* vcpkg
* cmake

## introduce

This project serves as a project template for a C/C++ project, and the main project structure consists of two:

1. The top level `CMakeLists.txt` generates a `.lib` file
2. Under the tests directory is the test project, which references the `.lib` file produced by the top-level project to test with google test