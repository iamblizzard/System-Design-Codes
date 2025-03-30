cc_binary (
    name = "main",
    srcs = ["main.cc"],
    deps = [
        ":commands",
        ":device",
    ],
)

cc_library (
    name = "commands",
    srcs = ["commands.cc"],
    hdrs = ["commands.h"],
    deps = [":device"],
)

cc_library (
    name = "device",
    srcs = ["device.cc"],
    hdrs = ["device.h"],
)