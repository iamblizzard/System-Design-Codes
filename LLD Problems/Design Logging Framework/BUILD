cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":logger",
        ":log_processor",
    ],
)

cc_library(
    name = "log_processor",
    srcs = ["log_processor.cc"],
    hdrs = ["log_processor.h"],
)

cc_library(
    name = "log_processors",
    srcs = ["log_processors.cc"],
    hdrs = ["log_processors.h"],
    deps = [":log_processor"],
)

cc_library(
    name = "logger",
    hdrs = ["logger.h"],
    deps = [
        ":log_processors",
        ":log_processor",
    ],
)
