################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../FileIO.cpp 

OBJS += \
./FileIO.o 

CPP_DEPS += \
./FileIO.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I"/tmp/guest-2vv3iq/git/327_proj3_test" -I"/tmp/guest-2vv3iq/git/327_proj3_stringparser" -I"/tmp/guest-2vv3iq/git/327_proj3_fileIO" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


