CC := gcc
CFLAGS := -Wall -Werror -fPIC
LDFLAGS := -shared
SOURCES := $(wildcard *.c)
OBJECTS := $(SOURCES:.c=.o)
LIBRARY := libdynamic.so

all: $(LIBRARY)

$(LIBRARY): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(LIBRARY)
