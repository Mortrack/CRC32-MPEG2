# CRC32-MPEG2 C library

This library provides the variables and functions necessary so that its implementer can invoke the CRC32-MPEG2 algorithm
in a simple and friendly way. However, my deep desire is to clarify that I, César Miranda Meza, did not invented this
algorithm, nor I developed its code. In fact, I do not know who was it that did that, but I learned about it from the
<a href=https://github.com/Embetronicx/STM32-Bootloader/blob/main/Bootloader_Example/HostApp/PcTool/etx_ota_update_main.c>
the code from the STM32-Bootloader made by Embetronicx</a>, but where here, the purpose of it is to simply provide it in
an independent and formal format with well Doxygen-documented files so that they can be easily reused by the community.

## How to use this library

To use this library, simply include the header file via the following line of code in your C program:

```c
#include "crc32_mpeg2.h"
```

and then just call the following function from the
<a href=https://github.com/Mortrack/CRC32-MPEG2/blob/main/Inc/crc32_mpeg2.h>crc32_mpeg2.h</a> header file whenever you
want to calculate the CRC32-MPEG over a desired given input data:

```c
uint32_t crc32_mpeg2(uint8_t *p_data, uint32_t data_length);
```

where to learn more about how to receive the result calculated from the algorithm and how to interpret the parameters of
that function, read the Doxygen-documentation accompanied by that function in the
<a href=https://github.com/Mortrack/CRC32-MPEG2/blob/main/Inc/crc32_mpeg2.h>crc32_mpeg2.h</a> header file.