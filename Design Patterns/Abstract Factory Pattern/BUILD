cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":furniture-factory",
        ":chair",
        ":sofa",
        ":coffee-table",
    ],
)

cc_library(
    name = "furniture-factory",
    srcs = ["furniture-factory.cc"],
    hdrs = ["furniture-factory.h"],
    deps = [
        ":chair",
        ":sofa",
        ":coffee-table",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "chair",
    srcs = ["chair.cc"],
    hdrs = ["chair.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "sofa",
    srcs = ["sofa.cc"],
    hdrs = ["sofa.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "coffee-table",
    srcs = ["coffee-table.cc"],
    hdrs = ["coffee-table.h"],
    visibility = ["//visibility:public"],
)