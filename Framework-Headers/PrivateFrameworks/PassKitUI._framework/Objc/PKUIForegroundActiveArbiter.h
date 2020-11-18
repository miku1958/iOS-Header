//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKForegroundActiveArbiter-Protocol.h>

@class NSHashTable, NSLock, NSString;
@protocol OS_dispatch_source;

@interface PKUIForegroundActiveArbiter : NSObject <PKForegroundActiveArbiter>
{
    BOOL _foreground;
    BOOL _enteringForeground;
    BOOL _enteringForegroundExpired;
    BOOL _active;
    CDStruct_973bafd3 _foregroundActiveState;
    unsigned int _deactivationReasons;
    NSHashTable *_observers;
    NSHashTable *_deactivationObservers;
    unsigned long long _backgroundTaskIdentifier;
    NSObject<OS_dispatch_source> *_enteringForegroundTimeout;
    NSLock *_lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_beginEnteringForeground;
- (void)_didRemoveDeactivationReasonNotification:(id)arg1;
- (id)_init;
- (void)_updateForegroundActiveWithEnteringForegroundPolicy:(long long)arg1;
- (void)_willAddDeactivationReasonNotification:(id)arg1;
- (void)dealloc;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (id)init;
- (unsigned int)registerDeactivationObserver:(id)arg1;
- (CDStruct_973bafd3)registerObserver:(id)arg1;
- (void)unregisterDeactivationObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)willEnterForeground;
- (void)willResignActive;
- (void)willTerminate;

@end
