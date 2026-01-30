# sw_vers spoofer
This program helps spoof the `sw_vers` of the Mac OS X system it is installed on.

# Installation
Requirements:
- Mac running Mac OS X 10.0 Cheetah or later
- GNU make
- A C99-compatible C compiler (would recommend `gcc` 4.0 or later)

Steps:
1. Set $PRODUCTNAME, $PRODUCTVERSION, & $BUILDVERSION to the values of the Mac you wish to spoof, making sure to have a set of escaped quotes in your setting. For example, for OS X 10.5 Leopard, it would be `'\"Mac OS X\"'`, `'\"10.5.8\"'`, and `'\"9L31a\"'` respectively.
2. Run `make` to compile the program.
3. Copy the `sw_vers` executable to wherever you want to place it.
