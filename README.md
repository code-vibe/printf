# Creating our own version of ' 0x11.C - printf'
This repository contains our own version of the function printf, originally included in the library stdio.h.

![](https://camo.githubusercontent.com/7ae24cd7299112d0306349df5f4cd38c3f1c8db4ce4db21513c1009334c0cab2/68747470733a2f2f696d672e64657672616e742e636f6d2f64657672616e742f72616e742f725f323336383635345f316b574a782e6a7067)

## Introduction
Emulates the operation of the printf function which delivers an output according to a format composed by zero or more directives and conversion specifiers:

Specifier | Input example | Output example
| --- | --- | --- |
%c | "Printing a char: [%c]\n", 'X' | Printing a char: [X]
%s | "Printing a string: [%s]\n", "Hello, World" | Printing a string: [Hello, World]
%d or %i | "Printing a number: [%i]\n", 386 | Printing a number: [386]
%% | "Printing a percent sign: [%%]\n", % | Printing a percent sign: [%]
