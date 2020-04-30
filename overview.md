# Theory of Algorithms Project 

Author: Cormac Raftery G00348802

 

## Project Specifications 

You must write a program in the C programming language that calculates the MD5 hash digest of an input of some free text or a filename via the command line. 

## What is the MD5 hashing Algorithm? 

The MD5(message-digest) algorithm is a widely used hash function producing a 128-bit hash value. It is used as a checksum to verify data integrity, but only against unintentional corruption. 

## Introduction 

This was a project assigned to me by Dr. Ian Mcloughlin in year 4 semester 2 of computing in software development as part of my Theory of Algorithms module. We were asked to use github to host our projects’, so I created a repository named TheoryOfAlgorithms. Inside this repository you should find: 

A c file named MD5.c which contains all of the coding for this assignment. This class when downloaded should run with the command “gcc -o md5 -O3 -lm md5.c”.  

The user interface should then ask you to insert a file or string to be hashed using the MD5 hashing algorithm. 

A README.MD which should contain some basic information about the project. 

This overview.md file which you are currently reading which provides further information about the project. 

## MD5 VS SHA 
<img src="https://pediaa.com/wp-content/uploads/2019/07/Difference-Between-MD5-and-SHA-Comparison-Summary-768x808.jpg" alt="md5 vs sha" width="500" height="500"> 
The main difference between MD5 and SHA is that MD5 is not cryptographically stronger and not secure while SHA is more cryptographically stronger and secure with versions such as SHA 256 and SHA 512. 

## Running the project 

The main file in this project is md5.c.  

To use the program, you must ensure that you have the GCC compiler installed. When this is correctly installed, you must open the file directory with the command prompt. When in the correct directory, you can compile the C file by entering the following: 

gcc md5.c -o md5 

Once this command is executed, and there is no compile time errors, you can run the program. The program is ran by executing the commands as displayed in the user interface. 

## Test 
<img src="https://cdn.ttgtmedia.com/rms/onlineImages/security-md5_hashing_desktop.jpg" alt="hash example" width="500" height="500">

## Algorithm 

This project was based on the MD5 hashing algorithm which was originally designed to be used as a cryptographic hash function. It failed in this regard due to coinciding strings having the same hash value and thus is now used as a checksum. It can be used for checking if files have been tampered with as if you hash 2 similar files but one has been tampered with, when you run it through the MD5 algorithm you will get 2 different hash values and the tampered file could potentially be harmful to your machine. It is very difficult to tamper with a file without changing the md5 hash value. 

The MD5 hashing algorithm processes a variable-length message into a fixed-length output of 128 bits. The input message is separated into chunks of 512-bits which equates to 16 32-bit words. The message is then padded so that its length is divisible by 512. The message is padded with a single 1 and the rest 0’s until the length of the message is up to 64 bits fewer than a multiple of 512. The remaining 64 padded bits indicate the length of the original message modulo 264.  

The processing of the message is quite fascinating as the MD5 hashing algorithm operates on a 128-bit state, divided into 4 32-bit words. The 4 states are then modified in rounds. In each round the state is passed through a non-linear function, includes modular addition and then is rotated left. 

## Complexity 

 

## References 

https://www.youtube.com/watch?v=AhCLgRVcKMg - A YouTube tutorial on how to install the c programming language on a windows machine. 

https://sourceforge.net/projects/mingw-w64/ - A site to download the gcc compiler from a reliable website.   

https://www.includehelp.com/c/executing-system-commands-using-c-program.aspx - Executing system commands using C programming lanuage 

https://www.programmingalgorithms.com/algorithm/md5/ - Example of running an MD5 program 

https://stackoverflow.com/questions/10324611/how-to-calculate-the-md5-hash-of-a-large-file-in-c - Calculate MD5 hash of large file in C 

https://cboard.cprogramming.com/c-programming/48755-md5-algorithm.html - Example of creating MD5 program using a seperate main and md5.h file 

https://www.youtube.com/watch?v=SjyR74lbZOc - Adding the GNU getopt() for the -help functionality 

https://www.tutorialspoint.com/getopt-function-in-c-to-parse-command-line-arguments - Using the getopt function in C 

https://www.gnu.org/software/libc/manual/html_node/Getopt-Long-Option-Example.html#Getopt-Long-Option-Example - GNU library for parsing long Options with getopt_long 

https://stackoverflow.com/questions/20076001/how-do-i-create-a-help-option-in-a-command-line-program-in-c-c - Stackoverflow for creating the -help function in C 

https://stackoverflow.com/questions/9642732/parsing-command-line-arguments-in-c - Parsing command line arguments using either getopt() or argp.h 

https://stackoverflow.com/questions/33271214/how-to-test-an-md5-implementation - How to test an MD5 Implementation 

https://pediaa.com/what-is-the-difference-between-md5-and-sha/ - All of the key differences between md5 and sha 
