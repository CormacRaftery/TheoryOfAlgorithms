# Theory of Algorithms Project 

Author: Cormac Raftery G00348802

## Project Specifications 

You must write a program in the C programming language that calculates the MD5 hash digest of an input of some free text or a filename via the command line. 

## What is the MD5 hashing Algorithm? 

The MD5(message-digest) algorithm is a widely used hash function producing a 128-bit hash value. It is used as a checksum to verify data integrity, but only against unintentional corruption. 

## Introduction 

This was a project assigned to me by Dr. Ian Mcloughlin in year 4 semester 2 of computing in software development as part of my Theory of Algorithms module. We were asked to use github to host our projects’, so I created a repository named TheoryOfAlgorithms. 
More detailed information about this project is in the overview.md file.
https://github.com/CormacRaftery/TheoryOfAlgorithms/blob/master/overview.md

## Running the project 

The main file in this project is md5.c.  

To use the program, you must ensure that you have the GCC compiler installed. When this is correctly installed, you must open the file directory with the command prompt. When in the correct directory, you can compile the C file by entering the following: 

gcc md5.c -o md5 

Once this command is executed, and there is no compile time errors, you can run the program. The program is ran by executing either 

md5 -s "your string"

or 

md5 -f "your file"
