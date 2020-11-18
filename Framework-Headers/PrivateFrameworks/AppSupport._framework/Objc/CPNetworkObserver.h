//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface CPNetworkObserver : NSObject
{
    NSLock *_lock;
    NSMutableDictionary *_reachabilityRequests;
    unsigned int _networkReachability;
    struct __SCNetworkReachability *_networkReach;
    struct __CFDictionary *_networkObservers;
    struct __SCPreferences *_wifiPreferences;
    struct __CFDictionary *_wifiObservers;
    BOOL _networkNotified;
    BOOL _networkReachable;
    BOOL _wifiNotified;
    BOOL _wifiEnabled;
}

+ (id)sharedNetworkObserver;
- (void)_networkObserversInitialize;
- (void)_networkReachableCallBack:(unsigned int)arg1;
- (void)_networkReachableFirstCallBack:(id)arg1;
- (void)_wifiCallBack:(unsigned int)arg1;
- (void)_wifiFirstCallBack:(id)arg1;
- (void)_wifiObserversInitialize;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 forHostname:(id)arg3;
- (void)addWiFiObserver:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)isNetworkReachable;
- (BOOL)isWiFiEnabled;
- (void)removeNetworkReachableObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forHostname:(id)arg2;
- (void)removeWiFiObserver:(id)arg1;

@end

