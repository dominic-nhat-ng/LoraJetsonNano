CXX = g++
CXXFLAGS = -Wall -g -march=armv8-a
LDFLAGS = -ljetgpio 

# Define the target executable
TARGET = Receiver

# Define the source files and object files
SRCS = main.cpp Sx1278.cpp Print.cpp WString.cpp itoa.cpp utils.cpp
OBJS = $(SRCS:.cpp=.o)

# Default rule to build the target
all: $(TARGET)

# Rule to link the target
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS) $(LDFLAGS)
	rm -f *.o

# Rule to compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule to remove object files and the target executable
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean

