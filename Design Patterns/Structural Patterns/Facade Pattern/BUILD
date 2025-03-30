cc_binary (
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":facade",
    ],
)

cc_library (
    name = "facade",
    hdrs = ["facade.h"],
    srcs = ["facade.cc"],
    deps = [ ":systems" ],
)

cc_library (
    name = "systems",
    hdrs = ["systems.h"],
    srcs = ["systems.cc"],
)