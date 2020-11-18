//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCallbackContextRegistry, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AVCMNotificationDispatcher : NSObject
{
    struct opaqueCMNotificationCenter *_cmNotificationCenter;
    AVCallbackContextRegistry *_callbackContextRegistry;
    NSMutableDictionary *_listenerObjectsPassedToFig;
    NSObject<OS_dispatch_queue> *_listenerObjectsQueue;
}

@property (readonly, nonatomic) struct opaqueCMNotificationCenter *CMNotificationCenter;
@property (readonly, nonatomic, getter=_callbackContextRegistry) AVCallbackContextRegistry *callbackContextRegistry;

+ (void)initialize;
+ (id)notificationDispatcherForCMNotificationCenter:(struct opaqueCMNotificationCenter *)arg1;
- (void)_addListenerAndCallback:(id)arg1 forWeakReferenceToListener:(id)arg2 callback:(CDUnknownFunctionPointerType)arg3 name:(struct __CFString *)arg4 object:(const void *)arg5;
- (id)_copyAndRemoveListenerAndCallbackForWeakReferenceToListener:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2 name:(struct __CFString *)arg3 object:(const void *)arg4;
- (void)addListenerWithWeakReference:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2 name:(struct __CFString *)arg3 object:(const void *)arg4 flags:(unsigned int)arg5;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithCMNotificationCenter:(struct opaqueCMNotificationCenter *)arg1;
- (void)removeListenerWithWeakReference:(id)arg1 callback:(CDUnknownFunctionPointerType)arg2 name:(struct __CFString *)arg3 object:(const void *)arg4;

@end

