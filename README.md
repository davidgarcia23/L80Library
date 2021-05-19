
This GPS is a project made with the intention of making a final project in which we talk about the CAN Bus, a technology widely used these days which we consider that serves to acquire a very practical and useful knowledge for future employment.

The objective of this program is to be able to have the software developed to be able to make a practical application in the GPS L80 module where we will be able to verify the correct operation of the same one.

The software that we are going to use consists of two parts, the program that installed and executed will make the commands / orders that we program it to do. The other part is the library, which is responsible for the commands that we use in the GPS program, the device itself understands them as this built to do things based on the commands you need and that process needs a translation, and this is responsible for the library, in which we tell him that we want to do depending on the order that comes to him.

In this case, we are going to talk about the library, which is a set of functional implementations, coded in a programming language, that provides a well-defined interface to the functionality that is invoked.

For this we need the information found in the datasheet which in our case is GNSS SDK commands manual since we are working with GNSS Module Series using version 1.4 of 2017.

With this file what we do is to translate the functionality of our program in commands that understand the module that will apply them, for this what we do is to create a series of functions that depending on what gets them to be called do a procedure or another.
