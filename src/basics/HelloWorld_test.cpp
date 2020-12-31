#include <gtest/gtest.h>
#include "HelloWorld.hpp"

TEST(HelloWorld, SimpleTest){
	HelloWorld helloworld;
	helloworld.printMaxMinInt();
}