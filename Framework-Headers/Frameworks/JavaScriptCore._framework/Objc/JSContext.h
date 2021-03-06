//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class JSValue, JSVirtualMachine, NSString;

@interface JSContext : NSObject
{
    JSVirtualMachine *m_virtualMachine;
    struct OpaqueJSContext *m_context;
    struct Strong<JSC::JSObject, JSC::ShouldStrongDestructorGrabLock::No> m_exception;
    struct WeakObjCPtr<id<JSModuleLoaderDelegate>> m_moduleLoaderDelegate;
    CDUnknownBlockType _exceptionHandler;
}

@property (strong) JSValue *exception;
@property (copy) CDUnknownBlockType exceptionHandler; // @synthesize exceptionHandler=_exceptionHandler;
@property (readonly) JSValue *globalObject;
@property (copy) NSString *name;
@property (readonly) JSVirtualMachine *virtualMachine;

+ (id)contextWithJSGlobalContextRef:(struct OpaqueJSContext *)arg1;
+ (id)currentArguments;
+ (id)currentCallee;
+ (id)currentContext;
+ (id)currentThis;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueJSContext *)JSGlobalContextRef;
- (struct __CFRunLoop *)_debuggerRunLoop;
- (BOOL)_includesNativeCallStackWhenReportingExceptions;
- (BOOL)_remoteInspectionEnabled;
- (void)_setDebuggerRunLoop:(struct __CFRunLoop *)arg1;
- (void)_setITMLDebuggableType;
- (void)_setIncludesNativeCallStackWhenReportingExceptions:(BOOL)arg1;
- (void)_setRemoteInspectionEnabled:(BOOL)arg1;
- (void)beginCallbackWithData:(struct CallbackData *)arg1 calleeValue:(struct OpaqueJSValue *)arg2 thisValue:(struct OpaqueJSValue *)arg3 argumentCount:(unsigned long long)arg4 arguments:(const struct OpaqueJSValue **)arg5;
- (BOOL)boolFromNotifyException:(struct OpaqueJSValue *)arg1;
- (void)dealloc;
- (id)dependencyIdentifiersForModuleJSScript:(id)arg1;
- (void)endCallbackWithData:(struct CallbackData *)arg1;
- (void)ensureWrapperMap;
- (id)evaluateJSScript:(id)arg1;
- (id)evaluateScript:(id)arg1;
- (id)evaluateScript:(id)arg1 withSourceURL:(id)arg2;
- (id)init;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext *)arg1;
- (id)initWithVirtualMachine:(id)arg1;
- (id)moduleLoaderDelegate;
- (void)notifyException:(struct OpaqueJSValue *)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setModuleLoaderDelegate:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)valueFromNotifyException:(struct OpaqueJSValue *)arg1;
- (id)wrapperForJSObject:(struct OpaqueJSValue *)arg1;
- (id)wrapperForObjCObject:(id)arg1;
- (id)wrapperMap;

@end

