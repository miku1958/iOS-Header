//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EDPersistenceHookRegistry : NSObject
{
    struct os_unfair_lock_s _lock;
    struct __CFDictionary *_hookRespondersBySelector;
    struct __CFDictionary *_methodSignaturesBySelector;
}

+ (id)_proxiedProtocols;
- (id)_copyRespondersForSelector:(SEL)arg1;
- (void)_forwardStackInvocation:(id)arg1;
- (void)_initializeMethodSignatures;
- (void)_messageRespondersWithInvocation:(id)arg1;
- (void)_registerHookResponder:(id)arg1 protocol:(id)arg2;
- (void)_registerHookResponder:(id)arg1 withMethodDescription:(struct objc_method_description)arg2;
- (void)_registerSelector:(SEL)arg1 types:(const char *)arg2;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)registerAccountChangeHookResponder:(id)arg1;
- (void)registerActivityHookResponder:(id)arg1;
- (void)registerDatabaseChangeHookResponder:(id)arg1;
- (void)registerMailboxChangeHookResponder:(id)arg1;
- (void)registerMessageChangeHookResponder:(id)arg1;
- (void)registerMessageDeliveryHookResponder:(id)arg1;
- (void)registerMessageReadHookResponder:(id)arg1;
- (void)registerProtectedDataReconciliationHookResponder:(id)arg1;
- (void)registerSearchableIndexHookResponder:(id)arg1;
- (void)registerThreadChangeHookResponder:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)unregisterAllHookResponders;
- (void)unregisterHookResponder:(id)arg1;

@end
