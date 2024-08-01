# Target executable
TARGET = myprogram  # Or whatever name you prefer

# Source Files (Update with your actual paths if needed)
SOURCES = main.cpp gpio/gpio.cpp LoRa/Sx1278.cpp LoRa/utils.cpp spi/spi.cpp

# Object Files (Generated from sources)
OBJECTS = $(SOURCES:.cpp=.o)

# Compiler and Flags (Adjust based on your compiler)
CXX = g++
CXXFLAGS = -Wall -Igpio -ILoRa -Ispi

# Linking
LDFLAGS =  -lwiringJet -lpthread -ljetgpio

# Default target
all: $(TARGET)

# Build the target
$(TARGET): $(OBJECTS)
	$(CXX) $(LDFLAGS) $^ -o $@

# Rule to compile .cpp files into .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target
clean:
	rm -f $(OBJECTS) $(TARGET)

