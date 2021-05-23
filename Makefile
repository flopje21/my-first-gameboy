SRC_DIR=$(CURDIR)/src
BUILD_DIR=build/

.PHONY: build debug test clean

all: clean test build

clean:
	rm -rf $(BUILD_DIR)app

build:
	mkdir $(BUILD_DIR)app
	cd $(BUILD_DIR)app && cmake $(SRC_DIR)

test:
	@echo "No tests yet"