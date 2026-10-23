SRCS = $(wildcard src/*.c)
OBJS := $(notdir $(SRCS:.c=.o))
BUILDDIR ?= build
OBJS := $(addprefix $(BUILDDIR)/, $(OBJS))

vectors: $(OBJS)
		gcc $^ -o $@

$(BUILDDIR)/%.o: src/%.c
		@mkdir -p $(BUILDDIR)
		gcc -c $^ -o $@

.depend: $(SRCS)
		gcc -MM $^ -o $@

clean:
		rm -rf $(BUILDDIR)

-include .depend
.PHONY: clean vectors
