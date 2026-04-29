cmake_minimum_required(VERSION 3.12)
project(Astrologian)


set(CMAKE_CXX_STANDARD  17)
set(CMAKE_CXX_STANDARD_REQUIRED  ON)

#Make sure to install Catch2 on your machine
find_package(Catch2 3.14 REQUIRED)

add_subdirectory(godot-cpp)

add_executable(astrologian-app src/Main.cpp
        src/Artifacts/Artifact.h
        src/Artifacts/CrimsonBarb/CrimsonBarb.cpp
        src/Artifacts/CrimsonBarb/CrimsonBarb.h
        src/Artifacts/AquaInsignia/AquaInsignia.cpp
        src/Artifacts/AquaInsignia/AquaInsignia.h
        src/GameLogic/Inventory.cpp
        src/GameLogic/Inventory.h
        src/Artifacts/ArtifactPool/ArtifactPool.cpp
        src/Artifacts/ArtifactPool/ArtifactPool.h
        src/Util/Random/RandomNumber.cpp
        src/Util/Random/RandomNumber.h
        src/GameLogic/GameModel.cpp
        src/GameLogic/GameModel.h
        src/Artifacts/CrimsonBarb/CrimsonBarbViewGodot.cpp
        src/Artifacts/CrimsonBarb/CrimsonBarbViewGodot.h
        src/ViewFactory/DummyViewFactory.cpp
        src/ViewFactory/DummyViewFactory.h
        src/Artifacts/CrimsonBarb/CrimsonBarbView.cpp
        src/Artifacts/CrimsonBarb/CrimsonBarbView.h)

add_executable(all_tests
        tests/CrimsonBarbTests.cpp
        tests/CrimsonBarbTests.h
        src/Artifacts/CrimsonBarb/CrimsonBarb.cpp
        src/Artifacts/CrimsonBarb/CrimsonBarb.h
        src/Artifacts/AquaInsignia/AquaInsignia.cpp
        src/Artifacts/AquaInsignia/AquaInsignia.h
        src/GameLogic/Inventory.cpp
        src/GameLogic/Inventory.h
        tests/InventoryTests.cpp
        tests/InventoryTests.h
        tests/AquaInsigniaTests.cpp
        tests/AquaInsigniaTests.h
        src/GameLogic/GameModel.cpp
        src/GameLogic/GameModel.h
        src/View/View.cpp
        src/View/View.h
        src/ViewFactory/ViewFactory.cpp
        src/ViewFactory/ViewFactory.h
        src/Util/Random/RandomNumber.cpp
        src/Util/Random/RandomNumber.h
        tests/RandomNumberTests.cpp
        tests/RandomNumberTests.h
        src/Artifacts/ArtifactPool/ArtifactPool.cpp
        src/Artifacts/ArtifactPool/ArtifactPool.h
        src/ViewFactory/DummyViewFactory.cpp
        src/ViewFactory/DummyViewFactory.h
        src/View/ViewType.h
        tests/ArtifactPoolTests.cpp
        tests/ArtifactPoolTests.h
        src/Artifacts/container/DummyArtifactContainerView.cpp
        src/Artifacts/container/DummyArtifactContainerView.h
        src/Artifacts/AquaInsignia/AquaInsigniaView.cpp
        src/Artifacts/AquaInsignia/AquaInsigniaView.h
        src/Artifacts/CrimsonBarb/CrimsonBarbView.cpp
        src/Artifacts/CrimsonBarb/CrimsonBarbView.h
        src/Artifacts/ArtifactViewGodot.cpp
        src/Artifacts/ArtifactViewGodot.h
)

add_library(Astrologian SHARED
        src/Artifacts/Artifact.h
        src/Artifacts/CrimsonBarb/CrimsonBarb.cpp
        src/Artifacts/CrimsonBarb/CrimsonBarb.h
        src/Artifacts/AquaInsignia/AquaInsignia.cpp
        src/Artifacts/AquaInsignia/AquaInsignia.h
        src/GameLogic/Inventory.cpp
        src/GameLogic/Inventory.h
        src/Artifacts/ArtifactPool/ArtifactPool.cpp
        src/Artifacts/ArtifactPool/ArtifactPool.h
        src/Util/Random/RandomNumber.cpp
        src/Util/Random/RandomNumber.h
        src/GameLogic/GameModel.cpp
        src/GameLogic/GameModel.h
        src/Artifacts/CrimsonBarb/CrimsonBarbViewGodot.cpp
        src/Artifacts/CrimsonBarb/CrimsonBarbViewGodot.h
        src/GodotSetup/GodotEntry.cpp
        src/GodotSetup/AstrologianGodot.cpp
        src/GodotSetup/AstrologianGodot.h
        src/ViewFactory/GodotViewFactory.cpp
        src/ViewFactory/GodotViewFactory.h
        src/Artifacts/container/ArtifactContainerViewGodot.cpp
        src/Artifacts/container/ArtifactContainerViewGodot.h
        src/View/ViewType.h
        src/Artifacts/AquaInsignia/AquaInsigniaViewGodot.h
        src/Artifacts/AquaInsignia/AquaInsigniaViewGodot.cpp
        src/Artifacts/CrimsonBarb/CrimsonBarbView.cpp
        src/Artifacts/CrimsonBarb/CrimsonBarbView.h
        src/ViewFactory/ViewFactory.h
        src/ViewFactory/ViewFactory.cpp
        src/Artifacts/ArtifactViewGodot.cpp
        src/Artifacts/ArtifactViewGodot.h
)

target_include_directories(Astrologian PRIVATE godot-cpp/include/godot)
target_include_directories(Astrologian PRIVATE godot-cpp/gdextension)

target_link_libraries(all_tests PRIVATE Catch2::Catch2WithMain)
target_link_libraries(Astrologian PRIVATE godot-cpp)

add_custom_command(TARGET Astrologian POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE:Astrologian>
        ~/projects/Astrologian/Astrologian/astrologian/bin/libAstrologian.dylib
)

include(CTest)
include(Catch)
catch_discover_tests(all_tests)

add_custom_target(run_tests ALL
        COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure
        DEPENDS all_tests
)

