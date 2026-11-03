# This makefile is designed to produce a pipewire module in the form of a shared object file
# that is designed to support the operation of the ChatMix V.2 device.

MODULE := libpipewire-module-chat-mix-v2.so
SRCS   := chat-mix-v2.c
OBJS   := $(SRCS:.c=.o)
DEPS   := $(OBJS:.o=.d)

PREFIX ?= /usr
MODDIR ?= $(PREFIX)/lib/pipewire-0.3

PW_CFLAGS := $(shell pkg-config --cflags libpipewire-0.3)
PW_LIBS   := $(shell pkg-config --libs libpipewire-0.3)

CFLAGS += -g -fPIC -MMD -MP
CFLAGS += -Wall -Wextra -Werror -Wformat=2 -Wjump-misses-init -Wlogical-op -Wshadow

.PHONY: all clean install uninstall

all: $(MODULE)

%.o: %.c
	$(CC) $(CFLAGS) $(PW_CFLAGS) -c -o $@ $<

$(MODULE): $(OBJS)
	$(CC) -shared -o $@ $^ $(PW_LIBS)

install: $(MODULE)
	install -Dm755 $(MODULE) $(DESTDIR)$(MODDIR)/$(MODULE)

uninstall:
	rm -f $(DESTDIR)$(MODDIR)/$(MODULE)

clean:
	rm -f $(MODULE) $(OBJS) $(DEPS)

-include $(DEPS)