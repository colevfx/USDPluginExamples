usd_library(arTri

    PUBLIC_HEADERS_INSTALL_PREFIX
        ${ORGANIZATION}

    PYTHON_INSTALL_PREFIX
        ${ORGANIZATION}

    PUBLIC_HEADERS
        api.h

    PUBLIC_CLASSES
        resolver

    LIBRARIES
        tf
        sdf
        vt
        gf
        pcp
        ar

    RESOURCE_FILES
        plugInfo.json
)

#add_subdirectory(tests)
