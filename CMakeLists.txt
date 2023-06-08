cmake_minimum_required(VERSION 3.23)
project(picture_editor)

set(CMAKE_CXX_STANDARD 17)

add_executable(picture_editor main.cpp UIManager.cpp UIManager.h ImageEditor.cpp ImageEditor.h Toolbox.cpp Toolbox.h)

# Путь к папке с заголовочными файлами SFML
set(SFML_INCLUDE_DIR  ${CMAKE_SOURCE_DIR}/SFML/include)

# Путь к папке с библиотеками SFML
set(SFML_LIBRARY_DIR  ${CMAKE_SOURCE_DIR}/SFML/lib)

# Подключение пути к заголовочным файлам SFML
include_directories(${SFML_INCLUDE_DIR})

# Найдите все библиотеки SFML
find_library(SFML_SYSTEM_LIBRARY sfml-system PATHS ${SFML_LIBRARY_DIR} REQUIRED)
find_library(SFML_WINDOW_LIBRARY sfml-window PATHS ${SFML_LIBRARY_DIR} REQUIRED)
find_library(SFML_GRAPHICS_LIBRARY sfml-graphics PATHS ${SFML_LIBRARY_DIR} REQUIRED)

# Линковка библиотек SFML с проектом
target_link_libraries(picture_editor ${SFML_SYSTEM_LIBRARY} ${SFML_WINDOW_LIBRARY} ${SFML_GRAPHICS_LIBRARY})