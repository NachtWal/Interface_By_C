#ifndef ___INTERFACE_TRACE_H___
#define ___INTERFACE_TRACE_H___

struct traceMethod;

typedef struct traceInterface
{
    const struct traceMethod *p_method;
}TraceInterface;

typedef struct traceMethod{
    void (*trace)(const int);
}TraceMethod;

#endif
