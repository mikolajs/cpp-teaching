################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/maturaPP/BaseSolution.cpp \
../src/maturaPP/Zad404.cpp 

OBJS += \
./src/maturaPP/BaseSolution.o \
./src/maturaPP/Zad404.o 

CPP_DEPS += \
./src/maturaPP/BaseSolution.d \
./src/maturaPP/Zad404.d 


# Each subdirectory must supply rules for building sources it contributes
src/maturaPP/%.o: ../src/maturaPP/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


