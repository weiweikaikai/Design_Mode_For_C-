CC = g++
CFLAGS = -Wall -g 
INCLUDE = -I./

TARGET1 = factory1
TARGET2 = factory2

SRC1 = ./1*.cpp
SRC2 = ./2*.cpp
.PHONY:all
all: $(TARGET2)  $(TARGET1) 

$(TARGET1):$(SRC1)
	$(CC) $(CFLAGS) $^ -o $@ $(INCLUDE)
$(TARGET2):$(SRC2)
	$(CC) $(CFLAGS) $^ -o $@ $(INCLUDE)

clean:
	-rm -rf $(TARGET1) $(TARGET2)	
