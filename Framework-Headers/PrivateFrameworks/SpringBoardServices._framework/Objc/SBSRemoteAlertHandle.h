//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue, SBSRemoteAlertHandleClient;

@interface SBSRemoteAlertHandle : NSObject
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    BOOL _active;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    BOOL _valid;
    id<SBSRemoteAlertHandleClient> _handleClient;
    NSString *_handleID;
    NSHashTable *_observers;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSString *handleID; // @synthesize handleID=_handleID;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)defaultHandleClient;
+ (id)handleWithConfiguration:(id)arg1;
+ (id)lookupHandlesForConfiguration:(id)arg1 creatingIfNone:(BOOL)arg2;
+ (id)lookupHandlesForDefinition:(id)arg1;
+ (id)lookupHandlesForDefinition:(id)arg1 creatingIfNone:(BOOL)arg2;
+ (id)lookupHandlesForDefinition:(id)arg1 creatingIfNone:(BOOL)arg2 configurationContext:(id)arg3;
+ (id)newHandleWithDefinition:(id)arg1 configurationContext:(id)arg2;
+ (void)setDefaultHandleClient:(id)arg1;
- (void).cxx_destruct;
- (void)_didActivate;
- (void)_didDeactivate;
- (id)_initWithHandleID:(id)arg1 handleClient:(id)arg2;
- (void)_invalidateWithError:(id)arg1 shouldInvalidateHandleClient:(BOOL)arg2;
- (void)_receivedInvalidationWithError:(id)arg1;
- (void)activateWithContext:(id)arg1;
- (void)activateWithOptions:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)invalidate;
- (void)removeObserver:(id)arg1;

@end
