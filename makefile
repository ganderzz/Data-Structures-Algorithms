all:
		clang++ ./src/LinkedList/Main.cc ./src/LinkedList/Node.cc ./src/LinkedList/LinkedList.cc -g -std=c++14 -stdlib=libc++