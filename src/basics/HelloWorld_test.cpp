#include <gtest/gtest.h>
#include "HelloWorld.cpp"

TEST(HelloWorld, SimpleTest){
	HelloWorld helloworld;
	helloworld.printMaxMinInt();
}