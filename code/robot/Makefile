#Makefile for robot
PROJECT_NAME = robot

# macros
COMPILING_FLAG = $(CXX_ADDITION_FLAGS) 
LINK_FLAG =

# project directory
ifndef $(OBJ_ROOT)
OBJ_ROOT = ../obj/
endif

OBJ_DIR =  $(OBJ_ROOT)$(PROJECT_NAME)
TARGET_DIR = ../bin
TARGET = $(TARGET_DIR)/$(PROJECT_NAME)

SRC_DIR = .
SRC = $(wildcard *.cpp) $(wildcard script/lua/*.c) $(wildcard script/tolua/*.c)
DEPS = $(addprefix $(OBJ_DIR)/, $(patsubst %cpp, %d, $(filter %cpp, $(notdir $(SRC)))))
OBJS = $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(basename $(notdir $(SRC)))))

# includ and lib directory
INCLUDE_DIRS = ../tinyxml ../sdu ../collision ../net_manager ../transfer ../commonlib ./script/lua ./script/tolua
LIBARAY_DIRS = ../lib
LIBARAYS =  gameholder transfer net_manager commonlib sdu tinyxml zlib jsoncpp
CLIBARAYS = pthread
All_INCLUDE_DIRS = $(addprefix -I,$(INCLUDE_DIRS))
ALL_LIBARAY_DIRS = $(addprefix -L,$(LIBARAY_DIRS))
ALL_LIBARAYS = $(addprefix -l,$(LIBARAYS)) $(addprefix -l,$(CLIBARAYS))

# rule all
all : $(TARGET)
	@echo build $(PROJECT_NAME) End!

# for target
$(TARGET) : $(OBJS) $(addprefix $(LIBARAY_DIRS)/, $(patsubst %, lib%.a, $(LIBARAYS)))
	@echo linking $(TARGET)
	@$(CXX) $(LINK_FLAG) -o $@ $(OBJS) $(ALL_LIBARAY_DIRS) $(ALL_LIBARAYS) -ldl

# for .o
$(OBJ_DIR)/%.o : %.cpp
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(TARGET_DIR)
	@echo building $<
	@$(CXX) $(COMPILING_FLAG) $(All_INCLUDE_DIRS) -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c $< -o $@

$(OBJ_DIR)/%.o : ./script/lua/%.c
	@echo building $<
	@$(CC) $(COMPILING_FLAG) $(All_INCLUDE_DIRS) -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c $< -o $@

$(OBJ_DIR)/%.o : ./script/tolua/%.c
	@echo building $<
	@$(CC) $(COMPILING_FLAG) $(All_INCLUDE_DIRS) -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c $< -o $@

# clean
clean:
	@echo clean $(PROJECT_NAME)
	@rm -f $(TARGET) $(OBJS) $(DEPS)
.PHONY: clean

# include rules
-include $(DEPS)

# help
help:
	@echo $(OBJS)
.PHONY: help

