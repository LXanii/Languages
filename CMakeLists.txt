cmake_minimum_required(VERSION 3.21)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if ("${CMAKE_SYSTEM_NAME}" STREQUAL "iOS" OR IOS)
    set(CMAKE_OSX_ARCHITECTURES "arm64")
else()
    set(CMAKE_OSX_ARCHITECTURES "arm64;x86_64")
endif()
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

project(Languages VERSION 1.0.0)

add_library(${PROJECT_NAME} SHARED
    src/main.cpp
    src/PlayLayer.cpp
    src/PauseLayer.cpp
    src/splitFunc.cpp
    src/EditLevelLayer.cpp
    src/EndLevelLayer.cpp
    src/DailyLevelPage.cpp
    src/DailyLevelNode.cpp
    src/LevelBrowserLayer.cpp
    src/GJListLayer.cpp
    src/LevelCell.cpp
    src/SetFolderPopup.cpp
    src/FLAlertLayer.cpp
    src/SetIDPopup.cpp
    src/SetTextPopup.cpp
    src/RewardsPage.cpp
    src/LevelSelectLayer.cpp
    src/SongCell.cpp
    src/LevelSearchLayer.cpp
    src/MoreSearchLayer.cpp
    src/RateStarsLayer.cpp
    src/LikeItemLayer.cpp
    src/LevelInfoLayer.cpp
    src/ShareCommentLayer.cpp
    src/GJPathPage.cpp
)

if (NOT DEFINED ENV{GEODE_SDK})
    message(FATAL_ERROR "Unable to find Geode SDK! Please define GEODE_SDK environment variable to point to Geode")
else()
    message(STATUS "Found Geode: $ENV{GEODE_SDK}")
endif()

add_subdirectory($ENV{GEODE_SDK} ${CMAKE_CURRENT_BINARY_DIR}/geode)

setup_geode_mod(${PROJECT_NAME})
