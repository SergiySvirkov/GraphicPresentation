// ThirdPartyLibraries/OpenGL/glad.c

#include <glad/glad.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif

static void* get_proc(const char* name) {
#ifdef _WIN32
    return (void*)wglGetProcAddress(name);
#else
    return dlsym(RTLD_DEFAULT, name);
#endif
}

int gladLoadGLLoader(void (*load)(void*), void* user) {
    return gladLoadGLLoaderLoadGLLoaderContext(load, user);
}

int gladLoadGLLoaderLoadGLLoaderContext(void (*load)(void*), void* user) {
    int status = gladLoadGLLoaderLoadGLLoaderContextUserPtr(load, user);
    if (!status) return status;

    return gladPostLoadGLLoaderLoadGLLoaderContext();
}

int gladLoadGLLoaderLoadGLLoaderContextUserPtr(void (*load)(void*), void* user) {
    GLADreset();
    glad_set_pre_callback(NULL);
    glad_set_post_callback(NULL);
    glad_set_loader_callback(load);
    glad_set_userptr_callback(user);

    return gladLoadGL();
}

int gladLoadGL() {
    return gladLoadGLLoader((GLADloadproc) get_proc);
}

#endif  // GLAD_GL_IMPLEMENTATION

