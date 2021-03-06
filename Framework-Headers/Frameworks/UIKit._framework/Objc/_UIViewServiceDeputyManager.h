//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIViewServiceViewControllerOperatorDelegate-Protocol.h>

@class NSLock, NSMutableDictionary, NSMutableSet, NSString, _UIAsyncInvocation;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewServiceDeputyManager : NSObject <_UIViewServiceViewControllerOperatorDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    _UIAsyncInvocation *_invalidationInvocation;
    NSMutableDictionary *_connectionHandlers;
    NSLock *_connectionHandlersLock;
    NSMutableSet *_deputies;
    CDUnknownBlockType _terminationHandler;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    id _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property id delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterfaceSupportingDeputyInterfaces:(id)arg1;
- (int)__automatic_invalidation_logic;
- (void)__prototype_requestConnectionToDeputyFromHostObject:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)__requestConnectionToDeputyOfClass:(Class)arg1 fromHostObject:(byref id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (Class)_deputyClassForConnectionSelector:(SEL)arg1;
- (void)_invalidateUnconditionallyThen:(CDUnknownBlockType)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)checkDeputyForRotation:(id)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (void)invalidate;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(CDUnknownBlockType)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)unregisterDeputyClass:(Class)arg1;
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;

@end

