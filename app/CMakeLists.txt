qt_add_executable(${PROJECT_NAME}App
    main.cpp
    agari_tensuu_name.cpp
    agari_vector.cpp
)

set_source_files_properties(
    ../qml/Main.qml
    PROPERTIES
        QT_RESOURCE_ALIAS Main.qml
)

qt_add_qml_module(${PROJECT_NAME}App
    URI Test
    VERSION 1.0
    RESOURCE_PREFIX /qt/qml
    QML_FILES
        ../qml/Main.qml
)

target_include_directories(${PROJECT_NAME}App
    PRIVATE
        ${CMAKE_SOURCE_DIR}/include
)

target_link_libraries(${PROJECT_NAME}App
    PRIVATE
        Qt6::Quick
        Qt6::QuickControls2
)
