//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _CFPrefsClientContext : NSObject
{
    _Atomic id _cfprefsd;
    struct __CFDictionary *_suiteCache;
    struct __CFSet *_observedSources;
    NSObject<OS_xpc_object> *_entitlements;
    struct __CFBoolean *_sandboxed;
    struct os_unfair_lock_s _lock;
    BOOL _isPlatformBinary;
    BOOL _impersonatingAnotherProcess;
    BOOL _hasInFlightKVONotifications;
    BOOL _didDeferKVONotifications;
    BOOL _valid;
}

@end

