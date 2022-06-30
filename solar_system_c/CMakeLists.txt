cmake_minimum_required(VERSION 3.18)
project(projetCIR1_groupe8 C)

set(CMAKE_C_STANDARD 99)

add_executable(projetCIR1_groupe8 source_code/main.c source_code/maths.c source_code/ecriture.c source_code/euler.c source_code/liste.c source_code/controle.c source_code/trajectoires.c)
target_link_libraries(projetCIR1_groupe8 m)
