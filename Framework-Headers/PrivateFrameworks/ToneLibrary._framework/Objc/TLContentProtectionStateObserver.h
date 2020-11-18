//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface TLContentProtectionStateObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSMutableDictionary *_blocksScheduledForProtectedContentUnlockedEvent;
    long long _contentProtectionStatus;
    long long _unlockedSinceBootStatus;
}

+ (id)sharedContentProtectionStateObserver;
- (void).cxx_destruct;
- (void)_assertNotRunningOnAccessQueue;
- (void)_assertRunningOnAccessQueue;
- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1;
- (void)_loadContentProtectionStatusIfNeeded;
- (void)_loadUnlockedSinceBootStatusIfNeeded;
- (id)_performBlockAfterProtectedContentUnlocked:(CDUnknownBlockType)arg1;
- (long long)_queryCurrentUnlockedSinceBootStatus;
- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)performBlockAfterProtectedContentUnlocked:(CDUnknownBlockType)arg1;

@end

