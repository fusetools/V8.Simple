/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.7
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_v8_WRAP_H_
#define SWIG_v8_WRAP_H_

class SwigDirector_Callback : public V8Simple::Callback, public Swig::Director {

public:
    SwigDirector_Callback();
    virtual V8Simple::Type GetValueType() const;
    virtual ~SwigDirector_Callback();
    virtual void Delete();
    virtual V8Simple::Value *Call(V8Simple::UniqueValueVector *args);
    virtual void Retain();
    virtual void Release();

    typedef int (SWIGSTDCALL* SWIG_Callback0_t)();
    typedef void * (SWIGSTDCALL* SWIG_Callback1_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback2_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback3_t)();
    void swig_connect_director(SWIG_Callback0_t callbackGetValueType, SWIG_Callback1_t callbackCall, SWIG_Callback2_t callbackRetain, SWIG_Callback3_t callbackRelease);

private:
    SWIG_Callback0_t swig_callbackGetValueType;
    SWIG_Callback1_t swig_callbackCall;
    SWIG_Callback2_t swig_callbackRetain;
    SWIG_Callback3_t swig_callbackRelease;
    void swig_init_callbacks();
};

struct SwigDirector_MessageHandler : public V8Simple::MessageHandler, public Swig::Director {

public:
    SwigDirector_MessageHandler();
    virtual void Handle(V8Simple::String const *message);
    virtual ~SwigDirector_MessageHandler();

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackHandle);

private:
    SWIG_Callback0_t swig_callbackHandle;
    void swig_init_callbacks();
};

struct SwigDirector_ScriptExceptionHandler : public V8Simple::ScriptExceptionHandler, public Swig::Director {

public:
    SwigDirector_ScriptExceptionHandler();
    virtual void Handle(V8Simple::ScriptException const &e);
    virtual ~SwigDirector_ScriptExceptionHandler();

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackHandle);

private:
    SWIG_Callback0_t swig_callbackHandle;
    void swig_init_callbacks();
};

struct SwigDirector_ExternalFreer : public V8Simple::ExternalFreer, public Swig::Director {

public:
    SwigDirector_ExternalFreer();
    virtual void Free(void *external);
    virtual ~SwigDirector_ExternalFreer();

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackFree);

private:
    SWIG_Callback0_t swig_callbackFree;
    void swig_init_callbacks();
};


#endif
