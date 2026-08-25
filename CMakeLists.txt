cmake_minimum_required(VERSION 4.2)
project(ed2_elementary_sorting_list01-cpp)

set(CMAKE_CXX_STANDARD 20)

#add_executable(ed2_elementay_sorting_list01 main.cpp
#        src/Exer01_BubbleSortString.cpp
#        src/Exer02_SelectionSortDescending.cpp
#        src/Exer03_SelectionSortKSwaps.cpp
#        src/Exer04_InsertionSortShiftCount.cpp
#        src/Exer05_InsertionSortDescendingTail.cpp)

# Cada arquivo .cpp com sua própria função main ganha seu próprio executável independente:
add_executable(Exer01_BubbleSortString src/Exer01_BubbleSortString.cpp)
add_executable(Exer02_SelectionSortDescending src/Exer02_SelectionSortDescending.cpp)
add_executable(Exer03_SelectionSortKSwaps src/Exer03_SelectionSortKSwaps.cpp)
add_executable(Exer04_InsertionSortShiftCount src/Exer04_InsertionSortShiftCount.cpp)
add_executable(Exer05_InsertionSortDescendingTail src/Exer05_InsertionSortDescendingTail.cpp)

# Se ainda mantiver um main.cpp na raiz, declare-o aqui (ou pode apagá-lo se não for usar):
add_executable(main_app main.cpp)