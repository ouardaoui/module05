import struct

def float_to_binary(num):
    # Use the struct.pack method to convert the float to binary
    packed = struct.pack('!f', num)
    
    # Convert the binary data to a binary string
    binary_string = ''.join(format(byte, '08b') for byte in packed)
    
    return binary_string

# Example usage
decimal_number = 10
binary_representation = float_to_binary(decimal_number)
print(binary_representation)
