
#ifndef CHIP8_H
#define CHIP8_H
#include <cstdint>
#include <array>


//no need to use vectors, we know the size of everything beforehand, so we can use arrays instead
class Chip8 {
private:
    std::array<uint8_t, 4096> memory; // 4KB of RAM memory
    std::array<uint8_t, 64 * 32> display; // Graphics (64x32 pixels)
    uint16_t pc; // Program counter
    uint16_t I; // Index register
    std::array<uint16_t, 48> stack; // Stack for subroutine calls
    uint8_t delay_timer; // Delay timer that counts down at 60Hz when set to a value greater than 0
    uint8_t sound_timer; // Sound timer that gives off a sound when it does not reach 0
    std::array<uint8_t, 16> V; // 16 general purpose registers
    std::array<uint16_t, 16> keypad; // Hexadecimal keypad (0-F)

};

#endif // CHIP8_H