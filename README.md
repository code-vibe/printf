# Creating our own version of ' 0x11.C - printf'
This repository contains our own version of the function printf, originally included in the library stdio.h.

![](https://www.canva.com/design/DAFPZI5bBmY/hpJ1oN2mG-uYUXOIgFQ5rA/view?utm_content=DAFPZI5bBmY&utm_campaign=designshare&utm_medium=link&utm_source=publishsharelink)

## Introduction
Emulates the operation of the printf function which delivers an output according to a format composed by zero or more directives and conversion specifiers:

Specifier | Input example | Output example
| --- | --- | --- |
%c | "Printing a char: [%c]\n", 'X' | Printing a char: [X]
%s | "Printing a string: [%s]\n", "Hello, World" | Printing a string: [Hello, World]
%d or %i | "Printing a number: [%i]\n", 386 | Printing a number: [386]
%% | "Printing a percent sign: [%%]\n", % | Printing a percent sign: [%]

![](https://pbs.twimg.com/media/Ewq0PXyWEAIp3Z8?format=jpg&name=small)

## Files in this repository

```c
gcc -Wall -Werror -Wextra -pedantic *.c
````

## Examples to use it

#include "main.h"
    /**
     * main - main function
     * Return: always 0
    **/
    int main()
    {
        _printf("Hello World!/n");
        return (0);
    }

    output: Hello World!
---

    #include "main.h"
    /**
     * main - main function
     * Return: always 0
    **/
    int main()
    {
            char string[7] = "World!"

        _printf("Hello %s/n", string);
        return (0);
    }

    output: Hello World!
---


    #include "main.h"
    /**
     * main - main function
     * Return: always 0
    **/
    int main()
    {
            int num = 1006

        _printf("This is a number: %d/n", num);
        return (0);
    }

    output: This is a number: 1006
    
    ## Environment
 This project has been tested on `Ubuntu 20.04 LTS`

## Authors

* **Sam-Oladapo Ebenezer-** [github](https://github.com/code-vibe) - mrsamoladapo@gmail.com
* **Gbenga Elegbede** [github](https://github.com/serena0012) - jonathangnenga@gmail.com

