#include <iostream>
#include <GLFW/glfw3.h>
#include <webgpu/webgpu_glfw.h>
#include <webgpu/webgpu_cpp.h>

#if defined(__EMSCRIPTEN__)
#include <emscripten/emscripten.h>
#endif

#include <dawn/webgpu_cpp_print.h>
#include <dawn/webgpu_cpp.h>

wgpu::Device device;
wgpu::Adapter adapter;
wgpu::Instance instance;

void initWebGPU() {
    // Create a WebGPU instance
    instance = wgpu::CreateInstance();

    // Request an adapter
    adapter = instance.RequestAdapter();

    if (!adapter) {
        std::cerr << "Failed to get GPU adapter!" << std::endl;
        return;
    }

    // Request a device from the adapter
    device = adapter.RequestDevice();

    if (!device) {
        std::cerr << "Failed to create GPU device!" << std::endl;
        return;
    }

    std::cout << "WebGPU initialized successfully!" << std::endl;
}
